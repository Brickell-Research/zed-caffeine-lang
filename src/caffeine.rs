use zed_extension_api::{self as zed, Result};

struct CaffeineExtension;

impl zed::Extension for CaffeineExtension {
    fn new() -> Self {
        Self
    }

    fn language_server_command(
        &mut self,
        _language_server_id: &zed::LanguageServerId,
        worktree: &zed::Worktree,
    ) -> Result<zed::Command> {
        let path = worktree
            .which("caffeine")
            .ok_or_else(|| "caffeine not found in PATH. Install via: brew install brickellresearch/tap/caffeine".to_string())?;

        Ok(zed::Command {
            command: path,
            args: vec!["lsp".to_string(), "--stdio".to_string()],
            env: Default::default(),
        })
    }
}

zed::register_extension!(CaffeineExtension);
