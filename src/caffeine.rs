use std::fs;
use zed::LanguageServerId;
use zed_extension_api::{self as zed, Result};

struct CaffeineExtension {
    cached_binary_path: Option<String>,
}

impl CaffeineExtension {
    fn language_server_binary_path(
        &mut self,
        language_server_id: &LanguageServerId,
        worktree: &zed::Worktree,
    ) -> Result<String> {
        // 1. Check system PATH (installed via Homebrew, cvm, or manual install)
        if let Some(path) = worktree.which("caffeine") {
            return Ok(path);
        }

        // 2. Check cached download
        if let Some(path) = &self.cached_binary_path {
            if fs::metadata(path).map_or(false, |stat| stat.is_file()) {
                return Ok(path.clone());
            }
        }

        // 3. Download from GitHub Releases
        zed::set_language_server_installation_status(
            language_server_id,
            &zed::LanguageServerInstallationStatus::CheckingForUpdate,
        );

        let release = zed::latest_github_release(
            "Brickell-Research/caffeine_lang",
            zed::GithubReleaseOptions {
                require_assets: true,
                pre_release: false,
            },
        )?;

        let (platform, arch) = zed::current_platform();
        let asset_name = format!(
            "caffeine-{version}-{os}-{arch}.{ext}",
            version = release.version,
            os = match platform {
                zed::Os::Mac => "macos",
                zed::Os::Linux => "linux",
                zed::Os::Windows => "windows",
            },
            arch = match arch {
                zed::Architecture::Aarch64 => "arm64",
                zed::Architecture::X86 | zed::Architecture::X8664 => "x64",
            },
            ext = match platform {
                zed::Os::Mac | zed::Os::Linux => "tar.gz",
                zed::Os::Windows => "zip",
            },
        );

        let asset = release
            .assets
            .iter()
            .find(|asset| asset.name == asset_name)
            .ok_or_else(|| format!("no asset found matching {:?}", asset_name))?;

        let version_dir = format!("caffeine-{}", release.version);
        let binary_path = format!("{version_dir}/caffeine");

        if !fs::metadata(&binary_path).map_or(false, |stat| stat.is_file()) {
            zed::set_language_server_installation_status(
                language_server_id,
                &zed::LanguageServerInstallationStatus::Downloading,
            );

            zed::download_file(
                &asset.download_url,
                &version_dir,
                match platform {
                    zed::Os::Mac | zed::Os::Linux => zed::DownloadedFileType::GzipTar,
                    zed::Os::Windows => zed::DownloadedFileType::Zip,
                },
            )
            .map_err(|e| format!("failed to download file: {e}"))?;

            // Clean up old versions
            let entries =
                fs::read_dir(".").map_err(|e| format!("failed to list working directory: {e}"))?;
            for entry in entries {
                let entry = entry.map_err(|e| format!("failed to load directory entry: {e}"))?;
                if entry.file_name().to_str() != Some(&version_dir) {
                    fs::remove_dir_all(entry.path()).ok();
                }
            }
        }

        self.cached_binary_path = Some(binary_path.clone());
        Ok(binary_path)
    }
}

impl zed::Extension for CaffeineExtension {
    fn new() -> Self {
        Self {
            cached_binary_path: None,
        }
    }

    fn language_server_command(
        &mut self,
        language_server_id: &LanguageServerId,
        worktree: &zed::Worktree,
    ) -> Result<zed::Command> {
        Ok(zed::Command {
            command: self.language_server_binary_path(language_server_id, worktree)?,
            args: vec!["lsp".to_string(), "--stdio".to_string()],
            env: Default::default(),
        })
    }
}

zed::register_extension!(CaffeineExtension);
