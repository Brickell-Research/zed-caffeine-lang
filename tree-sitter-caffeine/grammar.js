/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "caffeine",

  extras: ($) => [/\s/, $.comment, $.section_comment],

  conflicts: ($) => [
    [$.typed_struct, $.struct_literal],
    [$.type_alias_ref, $.value],
  ],

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.type_alias,
          $.extendable,
          $.blueprint_block,
          $.expectation_block,
        ),
      ),

    // ── Comments ───────────────────────────────────────────────
    comment: (_) => token(seq("#", /[^#]/, /.*/)),
    section_comment: (_) => token(seq("##", /.*/)),

    // ── Type Alias ─────────────────────────────────────────────
    // _env (Type): String { x | x in { "production", "staging" } }
    type_alias: ($) =>
      seq(
        field("name", $.extendable_name),
        "(",
        "Type",
        ")",
        ":",
        field("type", $.type_expr),
      ),

    // ── Extendable ─────────────────────────────────────────────
    // _defaults (Provides): { key: value }
    // _common (Requires): { key: Type }
    extendable: ($) =>
      seq(
        field("name", $.extendable_name),
        "(",
        field("kind", $.extendable_kind),
        ")",
        ":",
        field("body", choice($.typed_struct, $.struct_literal)),
      ),

    extendable_kind: (_) => choice("Requires", "Provides"),

    extendable_name: (_) => token(seq("_", /[a-zA-Z_][a-zA-Z0-9_]*/)),

    // ── Blueprint Block ────────────────────────────────────────
    // Blueprints for "SLO" + "DependencyRelations"
    blueprint_block: ($) =>
      seq(
        "Blueprints",
        "for",
        field("artifacts", $.artifact_list),
        repeat1($.item),
      ),

    artifact_list: ($) =>
      seq($.string, repeat(seq("+", $.string))),

    // ── Expectation Block ──────────────────────────────────────
    // Expectations for "name" OR Expects "name"
    expectation_block: ($) =>
      seq(
        choice(seq("Expectations", "for"), "Expects"),
        field("blueprint", $.string),
        repeat1($.item),
      ),

    // ── Item ───────────────────────────────────────────────────
    // * "name" extends [...]:
    item: ($) =>
      seq(
        "*",
        field("name", $.string),
        optional($.extends_clause),
        ":",
        optional($.requires_block),
        optional($.provides_block),
      ),

    extends_clause: ($) =>
      seq(
        "extends",
        "[",
        $.extendable_name,
        repeat(seq(",", $.extendable_name)),
        "]",
      ),

    // ── Requires / Provides ────────────────────────────────────
    requires_block: ($) =>
      seq("Requires", $.typed_struct),

    provides_block: ($) =>
      seq("Provides", $.struct_literal),

    // ── Typed Struct (in Requires) ─────────────────────────────
    // { field: Type, field: Type }
    typed_struct: ($) =>
      seq("{", optional($.typed_field_list), "}"),

    typed_field_list: ($) =>
      seq($.typed_field, repeat(seq(",", $.typed_field)), optional(",")),

    typed_field: ($) =>
      seq(field("key", $.identifier), ":", field("type", $.type_expr)),

    // ── Type Expressions ───────────────────────────────────────
    type_expr: ($) =>
      choice(
        $.refined_type,
        $.collection_type,
        $.modifier_type,
        $.record_type,
        $.primitive_type,
        $.type_alias_ref,
      ),

    primitive_type: (_) =>
      choice("String", "Integer", "Float", "Boolean", "URL", "Percentage"),

    collection_type: ($) =>
      choice(
        seq("List", "(", field("element", $.type_expr), ")"),
        seq(
          "Dict",
          "(",
          field("key_type", $.type_expr),
          ",",
          field("value_type", $.type_expr),
          ")",
        ),
      ),

    modifier_type: ($) =>
      choice(
        seq("Optional", "(", field("inner", $.type_expr), ")"),
        seq(
          "Defaulted",
          "(",
          field("inner", $.type_expr),
          ",",
          field("default", $.value),
          ")",
        ),
      ),

    record_type: ($) => $.typed_struct,

    // String { x | x in { "a", "b" } }
    // Float { x | x in ( 0.0..100.0 ) }
    refined_type: ($) =>
      seq(
        field("base", choice($.primitive_type, $.type_alias_ref)),
        "{",
        "x",
        "|",
        "x",
        "in",
        field("constraint", choice($.set_constraint, $.range_constraint)),
        "}",
      ),

    set_constraint: ($) =>
      seq("{", $.value, repeat(seq(",", $.value)), optional(","), "}"),

    range_constraint: ($) =>
      seq("(", field("low", $.number), "..", field("high", $.number), ")"),

    type_alias_ref: ($) => $.extendable_name,

    // ── Struct Literal (in Provides) ───────────────────────────
    // { key: value, key: value }
    struct_literal: ($) =>
      seq("{", optional($.field_list), "}"),

    field_list: ($) =>
      seq($.field, repeat(seq(",", $.field)), optional(",")),

    field: ($) =>
      seq(field("key", $.identifier), ":", field("value", $.value)),

    // ── Values ─────────────────────────────────────────────────
    value: ($) =>
      choice(
        $.string,
        $.percentage,
        $.number,
        $.boolean,
        $.list_literal,
        $.struct_literal,
        $.extendable_name,
      ),

    list_literal: ($) =>
      seq("[", optional(seq($.value, repeat(seq(",", $.value)), optional(","))), "]"),

    string: ($) =>
      seq(
        '"',
        repeat(choice($.string_content, $.template_variable, $.escape_sequence)),
        '"',
      ),

    string_content: (_) => token.immediate(prec(-1, /[^"\\$]+/)),

    // $env->env$ or $name$
    template_variable: (_) =>
      token.immediate(
        seq(
          "$",
          /[a-zA-Z_][a-zA-Z0-9_]*/,
          optional(seq("->", /[-a-zA-Z_][a-zA-Z0-9_.]*/)),
          "$",
        ),
      ),

    escape_sequence: (_) => token.immediate(seq("\\", /./)),

    percentage: (_) => token(seq(/[0-9]+(\.[0-9]+)?/, "%")),

    number: (_) =>
      token(
        choice(
          seq(optional("-"), /[0-9]+\.[0-9]+/),
          seq(optional("-"), /[0-9]+/),
        ),
      ),

    boolean: (_) => choice("true", "false"),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});
