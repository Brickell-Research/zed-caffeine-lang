#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  sym_section_comment = 3,
  anon_sym_LPAREN = 4,
  anon_sym_Type = 5,
  anon_sym_RPAREN = 6,
  anon_sym_COLON = 7,
  anon_sym_Requires = 8,
  anon_sym_Provides = 9,
  sym_extendable_name = 10,
  anon_sym_Blueprints = 11,
  anon_sym_for = 12,
  anon_sym_PLUS = 13,
  anon_sym_Expectations = 14,
  anon_sym_Expects = 15,
  anon_sym_STAR = 16,
  anon_sym_extends = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_String = 23,
  anon_sym_Integer = 24,
  anon_sym_Float = 25,
  anon_sym_Boolean = 26,
  anon_sym_URL = 27,
  anon_sym_Percentage = 28,
  anon_sym_List = 29,
  anon_sym_Dict = 30,
  anon_sym_Optional = 31,
  anon_sym_Defaulted = 32,
  anon_sym_x = 33,
  anon_sym_PIPE = 34,
  anon_sym_in = 35,
  anon_sym_DOT_DOT = 36,
  anon_sym_DQUOTE = 37,
  sym_string_content = 38,
  sym_template_variable = 39,
  sym_escape_sequence = 40,
  sym_percentage = 41,
  sym_number = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  sym_source_file = 45,
  sym_type_alias = 46,
  sym_extendable = 47,
  sym_extendable_kind = 48,
  sym_blueprint_block = 49,
  sym_artifact_list = 50,
  sym_expectation_block = 51,
  sym_item = 52,
  sym_extends_clause = 53,
  sym_requires_block = 54,
  sym_provides_block = 55,
  sym_typed_struct = 56,
  sym_typed_field_list = 57,
  sym_typed_field = 58,
  sym_type_expr = 59,
  sym_primitive_type = 60,
  sym_collection_type = 61,
  sym_modifier_type = 62,
  sym_record_type = 63,
  sym_refined_type = 64,
  sym_set_constraint = 65,
  sym_range_constraint = 66,
  sym_type_alias_ref = 67,
  sym_struct_literal = 68,
  sym_field_list = 69,
  sym_field = 70,
  sym_value = 71,
  sym_list_literal = 72,
  sym_string = 73,
  sym_boolean = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_blueprint_block_repeat1 = 76,
  aux_sym_artifact_list_repeat1 = 77,
  aux_sym_extends_clause_repeat1 = 78,
  aux_sym_typed_field_list_repeat1 = 79,
  aux_sym_set_constraint_repeat1 = 80,
  aux_sym_field_list_repeat1 = 81,
  aux_sym_string_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_section_comment] = "section_comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_Type] = "Type",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_Requires] = "Requires",
  [anon_sym_Provides] = "Provides",
  [sym_extendable_name] = "extendable_name",
  [anon_sym_Blueprints] = "Blueprints",
  [anon_sym_for] = "for",
  [anon_sym_PLUS] = "+",
  [anon_sym_Expectations] = "Expectations",
  [anon_sym_Expects] = "Expects",
  [anon_sym_STAR] = "*",
  [anon_sym_extends] = "extends",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_String] = "String",
  [anon_sym_Integer] = "Integer",
  [anon_sym_Float] = "Float",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_URL] = "URL",
  [anon_sym_Percentage] = "Percentage",
  [anon_sym_List] = "List",
  [anon_sym_Dict] = "Dict",
  [anon_sym_Optional] = "Optional",
  [anon_sym_Defaulted] = "Defaulted",
  [anon_sym_x] = "x",
  [anon_sym_PIPE] = "|",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_template_variable] = "template_variable",
  [sym_escape_sequence] = "escape_sequence",
  [sym_percentage] = "percentage",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_type_alias] = "type_alias",
  [sym_extendable] = "extendable",
  [sym_extendable_kind] = "extendable_kind",
  [sym_blueprint_block] = "blueprint_block",
  [sym_artifact_list] = "artifact_list",
  [sym_expectation_block] = "expectation_block",
  [sym_item] = "item",
  [sym_extends_clause] = "extends_clause",
  [sym_requires_block] = "requires_block",
  [sym_provides_block] = "provides_block",
  [sym_typed_struct] = "typed_struct",
  [sym_typed_field_list] = "typed_field_list",
  [sym_typed_field] = "typed_field",
  [sym_type_expr] = "type_expr",
  [sym_primitive_type] = "primitive_type",
  [sym_collection_type] = "collection_type",
  [sym_modifier_type] = "modifier_type",
  [sym_record_type] = "record_type",
  [sym_refined_type] = "refined_type",
  [sym_set_constraint] = "set_constraint",
  [sym_range_constraint] = "range_constraint",
  [sym_type_alias_ref] = "type_alias_ref",
  [sym_struct_literal] = "struct_literal",
  [sym_field_list] = "field_list",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym_list_literal] = "list_literal",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_blueprint_block_repeat1] = "blueprint_block_repeat1",
  [aux_sym_artifact_list_repeat1] = "artifact_list_repeat1",
  [aux_sym_extends_clause_repeat1] = "extends_clause_repeat1",
  [aux_sym_typed_field_list_repeat1] = "typed_field_list_repeat1",
  [aux_sym_set_constraint_repeat1] = "set_constraint_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_section_comment] = sym_section_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Requires] = anon_sym_Requires,
  [anon_sym_Provides] = anon_sym_Provides,
  [sym_extendable_name] = sym_extendable_name,
  [anon_sym_Blueprints] = anon_sym_Blueprints,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_Expectations] = anon_sym_Expectations,
  [anon_sym_Expects] = anon_sym_Expects,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_Float] = anon_sym_Float,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_URL] = anon_sym_URL,
  [anon_sym_Percentage] = anon_sym_Percentage,
  [anon_sym_List] = anon_sym_List,
  [anon_sym_Dict] = anon_sym_Dict,
  [anon_sym_Optional] = anon_sym_Optional,
  [anon_sym_Defaulted] = anon_sym_Defaulted,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_template_variable] = sym_template_variable,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_percentage] = sym_percentage,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_type_alias] = sym_type_alias,
  [sym_extendable] = sym_extendable,
  [sym_extendable_kind] = sym_extendable_kind,
  [sym_blueprint_block] = sym_blueprint_block,
  [sym_artifact_list] = sym_artifact_list,
  [sym_expectation_block] = sym_expectation_block,
  [sym_item] = sym_item,
  [sym_extends_clause] = sym_extends_clause,
  [sym_requires_block] = sym_requires_block,
  [sym_provides_block] = sym_provides_block,
  [sym_typed_struct] = sym_typed_struct,
  [sym_typed_field_list] = sym_typed_field_list,
  [sym_typed_field] = sym_typed_field,
  [sym_type_expr] = sym_type_expr,
  [sym_primitive_type] = sym_primitive_type,
  [sym_collection_type] = sym_collection_type,
  [sym_modifier_type] = sym_modifier_type,
  [sym_record_type] = sym_record_type,
  [sym_refined_type] = sym_refined_type,
  [sym_set_constraint] = sym_set_constraint,
  [sym_range_constraint] = sym_range_constraint,
  [sym_type_alias_ref] = sym_type_alias_ref,
  [sym_struct_literal] = sym_struct_literal,
  [sym_field_list] = sym_field_list,
  [sym_field] = sym_field,
  [sym_value] = sym_value,
  [sym_list_literal] = sym_list_literal,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_blueprint_block_repeat1] = aux_sym_blueprint_block_repeat1,
  [aux_sym_artifact_list_repeat1] = aux_sym_artifact_list_repeat1,
  [aux_sym_extends_clause_repeat1] = aux_sym_extends_clause_repeat1,
  [aux_sym_typed_field_list_repeat1] = aux_sym_typed_field_list_repeat1,
  [aux_sym_set_constraint_repeat1] = aux_sym_set_constraint_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_section_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Provides] = {
    .visible = true,
    .named = false,
  },
  [sym_extendable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Blueprints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Expectations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Expects] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_URL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Percentage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Defaulted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_template_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_percentage] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_extendable] = {
    .visible = true,
    .named = true,
  },
  [sym_extendable_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_blueprint_block] = {
    .visible = true,
    .named = true,
  },
  [sym_artifact_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expectation_block] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_extends_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_requires_block] = {
    .visible = true,
    .named = true,
  },
  [sym_provides_block] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_field] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_type] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_type] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_refined_type] = {
    .visible = true,
    .named = true,
  },
  [sym_set_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_range_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_blueprint_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_artifact_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extends_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typed_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_artifacts = 1,
  field_base = 2,
  field_blueprint = 3,
  field_body = 4,
  field_constraint = 5,
  field_default = 6,
  field_element = 7,
  field_high = 8,
  field_inner = 9,
  field_key = 10,
  field_key_type = 11,
  field_kind = 12,
  field_low = 13,
  field_name = 14,
  field_type = 15,
  field_value = 16,
  field_value_type = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_artifacts] = "artifacts",
  [field_base] = "base",
  [field_blueprint] = "blueprint",
  [field_body] = "body",
  [field_constraint] = "constraint",
  [field_default] = "default",
  [field_element] = "element",
  [field_high] = "high",
  [field_inner] = "inner",
  [field_key] = "key",
  [field_key_type] = "key_type",
  [field_kind] = "kind",
  [field_low] = "low",
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
  [field_value_type] = "value_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 2},
  [14] = {.index = 21, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_blueprint, 1},
  [1] =
    {field_artifacts, 2},
  [2] =
    {field_blueprint, 2},
  [3] =
    {field_name, 1},
  [4] =
    {field_name, 0},
    {field_type, 5},
  [6] =
    {field_body, 5},
    {field_kind, 2},
    {field_name, 0},
  [9] =
    {field_key, 0},
    {field_type, 2},
  [11] =
    {field_element, 2},
  [12] =
    {field_inner, 2},
  [13] =
    {field_key, 0},
    {field_value, 2},
  [15] =
    {field_key_type, 2},
    {field_value_type, 4},
  [17] =
    {field_default, 4},
    {field_inner, 2},
  [19] =
    {field_base, 0},
    {field_constraint, 6},
  [21] =
    {field_high, 3},
    {field_low, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '"', 31,
        '#', 2,
        '$', 10,
        '(', 19,
        ')', 20,
        '*', 23,
        '+', 22,
        ',', 25,
        '-', 7,
        '.', 5,
        ':', 21,
        '[', 24,
        '\\', 12,
        ']', 26,
        '{', 27,
        '|', 29,
        '}', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 10:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '"', 31,
        '#', 2,
        '(', 19,
        ')', 20,
        '*', 23,
        '+', 22,
        ',', 25,
        '-', 7,
        '.', 5,
        ':', 21,
        '[', 24,
        ']', 26,
        '{', 27,
        '|', 29,
        '}', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_section_comment);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_section_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(17);
      if (('"' <= lookahead && lookahead <= '$') ||
          lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_template_variable);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_percentage);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'B', 1,
        'D', 2,
        'E', 3,
        'F', 4,
        'I', 5,
        'L', 6,
        'O', 7,
        'P', 8,
        'R', 9,
        'S', 10,
        'T', 11,
        'U', 12,
        '_', 13,
        'e', 14,
        'f', 15,
        'i', 16,
        't', 17,
        'x', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 13:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'q') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_extendable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_URL);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Dict);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_Expects);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_Optional);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_Provides);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_Requires);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_Defaulted);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_Blueprints);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Percentage);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Expectations);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_section_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Requires] = ACTIONS(1),
    [anon_sym_Provides] = ACTIONS(1),
    [sym_extendable_name] = ACTIONS(1),
    [anon_sym_Blueprints] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_Expectations] = ACTIONS(1),
    [anon_sym_Expects] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_URL] = ACTIONS(1),
    [anon_sym_Percentage] = ACTIONS(1),
    [anon_sym_List] = ACTIONS(1),
    [anon_sym_Dict] = ACTIONS(1),
    [anon_sym_Optional] = ACTIONS(1),
    [anon_sym_Defaulted] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_template_variable] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_percentage] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(126),
    [sym_type_alias] = STATE(19),
    [sym_extendable] = STATE(19),
    [sym_blueprint_block] = STATE(19),
    [sym_expectation_block] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_section_comment] = ACTIONS(3),
    [sym_extendable_name] = ACTIONS(7),
    [anon_sym_Blueprints] = ACTIONS(9),
    [anon_sym_Expectations] = ACTIONS(11),
    [anon_sym_Expects] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(15), 1,
      sym_extendable_name,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_List,
    ACTIONS(25), 1,
      anon_sym_Dict,
    ACTIONS(27), 1,
      anon_sym_Optional,
    ACTIONS(29), 1,
      anon_sym_Defaulted,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_percentage,
    ACTIONS(35), 1,
      sym_number,
    STATE(43), 1,
      sym_typed_struct,
    STATE(97), 1,
      sym_type_expr,
    STATE(99), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_primitive_type,
      sym_type_alias_ref,
    STATE(44), 4,
      sym_collection_type,
      sym_modifier_type,
      sym_record_type,
      sym_refined_type,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
    ACTIONS(21), 6,
      anon_sym_String,
      anon_sym_Integer,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_URL,
      anon_sym_Percentage,
  [72] = 12,
    ACTIONS(23), 1,
      anon_sym_List,
    ACTIONS(25), 1,
      anon_sym_Dict,
    ACTIONS(27), 1,
      anon_sym_Optional,
    ACTIONS(29), 1,
      anon_sym_Defaulted,
    ACTIONS(39), 1,
      sym_extendable_name,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_typed_struct,
    STATE(112), 1,
      sym_type_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(27), 2,
      sym_primitive_type,
      sym_type_alias_ref,
    STATE(44), 4,
      sym_collection_type,
      sym_modifier_type,
      sym_record_type,
      sym_refined_type,
    ACTIONS(21), 6,
      anon_sym_String,
      anon_sym_Integer,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_URL,
      anon_sym_Percentage,
  [119] = 12,
    ACTIONS(23), 1,
      anon_sym_List,
    ACTIONS(25), 1,
      anon_sym_Dict,
    ACTIONS(27), 1,
      anon_sym_Optional,
    ACTIONS(29), 1,
      anon_sym_Defaulted,
    ACTIONS(39), 1,
      sym_extendable_name,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_typed_struct,
    STATE(114), 1,
      sym_type_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(27), 2,
      sym_primitive_type,
      sym_type_alias_ref,
    STATE(44), 4,
      sym_collection_type,
      sym_modifier_type,
      sym_record_type,
      sym_refined_type,
    ACTIONS(21), 6,
      anon_sym_String,
      anon_sym_Integer,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_URL,
      anon_sym_Percentage,
  [166] = 12,
    ACTIONS(23), 1,
      anon_sym_List,
    ACTIONS(25), 1,
      anon_sym_Dict,
    ACTIONS(27), 1,
      anon_sym_Optional,
    ACTIONS(29), 1,
      anon_sym_Defaulted,
    ACTIONS(39), 1,
      sym_extendable_name,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_typed_struct,
    STATE(56), 1,
      sym_type_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(27), 2,
      sym_primitive_type,
      sym_type_alias_ref,
    STATE(44), 4,
      sym_collection_type,
      sym_modifier_type,
      sym_record_type,
      sym_refined_type,
    ACTIONS(21), 6,
      anon_sym_String,
      anon_sym_Integer,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_URL,
      anon_sym_Percentage,
  [213] = 12,
    ACTIONS(23), 1,
      anon_sym_List,
    ACTIONS(25), 1,
      anon_sym_Dict,
    ACTIONS(27), 1,
      anon_sym_Optional,
    ACTIONS(29), 1,
      anon_sym_Defaulted,
    ACTIONS(39), 1,
      sym_extendable_name,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_typed_struct,
    STATE(142), 1,
      sym_type_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(27), 2,
      sym_primitive_type,
      sym_type_alias_ref,
    STATE(44), 4,
      sym_collection_type,
      sym_modifier_type,
      sym_record_type,
      sym_refined_type,
    ACTIONS(21), 6,
      anon_sym_String,
      anon_sym_Integer,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_URL,
      anon_sym_Percentage,
  [260] = 12,
    ACTIONS(23), 1,
      anon_sym_List,
    ACTIONS(25), 1,
      anon_sym_Dict,
    ACTIONS(27), 1,
      anon_sym_Optional,
    ACTIONS(29), 1,
      anon_sym_Defaulted,
    ACTIONS(39), 1,
      sym_extendable_name,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_typed_struct,
    STATE(113), 1,
      sym_type_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(27), 2,
      sym_primitive_type,
      sym_type_alias_ref,
    STATE(44), 4,
      sym_collection_type,
      sym_modifier_type,
      sym_record_type,
      sym_refined_type,
    ACTIONS(21), 6,
      anon_sym_String,
      anon_sym_Integer,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_URL,
      anon_sym_Percentage,
  [307] = 12,
    ACTIONS(23), 1,
      anon_sym_List,
    ACTIONS(25), 1,
      anon_sym_Dict,
    ACTIONS(27), 1,
      anon_sym_Optional,
    ACTIONS(29), 1,
      anon_sym_Defaulted,
    ACTIONS(39), 1,
      sym_extendable_name,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_typed_struct,
    STATE(119), 1,
      sym_type_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(27), 2,
      sym_primitive_type,
      sym_type_alias_ref,
    STATE(44), 4,
      sym_collection_type,
      sym_modifier_type,
      sym_record_type,
      sym_refined_type,
    ACTIONS(21), 6,
      anon_sym_String,
      anon_sym_Integer,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_URL,
      anon_sym_Percentage,
  [354] = 12,
    ACTIONS(23), 1,
      anon_sym_List,
    ACTIONS(25), 1,
      anon_sym_Dict,
    ACTIONS(27), 1,
      anon_sym_Optional,
    ACTIONS(29), 1,
      anon_sym_Defaulted,
    ACTIONS(39), 1,
      sym_extendable_name,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_typed_struct,
    STATE(97), 1,
      sym_type_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(27), 2,
      sym_primitive_type,
      sym_type_alias_ref,
    STATE(44), 4,
      sym_collection_type,
      sym_modifier_type,
      sym_record_type,
      sym_refined_type,
    ACTIONS(21), 6,
      anon_sym_String,
      anon_sym_Integer,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_URL,
      anon_sym_Percentage,
  [401] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(33), 2,
      sym_extendable_name,
      sym_percentage,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
  [438] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(33), 2,
      sym_extendable_name,
      sym_percentage,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
  [475] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(33), 2,
      sym_extendable_name,
      sym_percentage,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
  [512] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(33), 2,
      sym_extendable_name,
      sym_percentage,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
  [549] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(33), 2,
      sym_extendable_name,
      sym_percentage,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
  [586] = 9,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(33), 2,
      sym_extendable_name,
      sym_percentage,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
  [620] = 9,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(33), 2,
      sym_extendable_name,
      sym_percentage,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
  [654] = 9,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(33), 2,
      sym_extendable_name,
      sym_percentage,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
  [688] = 9,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(33), 2,
      sym_extendable_name,
      sym_percentage,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_struct_literal,
      sym_list_literal,
      sym_string,
      sym_boolean,
  [722] = 7,
    ACTIONS(7), 1,
      sym_extendable_name,
    ACTIONS(9), 1,
      anon_sym_Blueprints,
    ACTIONS(11), 1,
      anon_sym_Expectations,
    ACTIONS(13), 1,
      anon_sym_Expects,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(24), 5,
      sym_type_alias,
      sym_extendable,
      sym_blueprint_block,
      sym_expectation_block,
      aux_sym_source_file_repeat1,
  [749] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(57), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_Provides,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [766] = 6,
    ACTIONS(61), 1,
      anon_sym_Requires,
    ACTIONS(63), 1,
      anon_sym_Provides,
    STATE(31), 1,
      sym_requires_block,
    STATE(48), 1,
      sym_provides_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
  [791] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(65), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_Provides,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [808] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [825] = 7,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_extendable_name,
    ACTIONS(74), 1,
      anon_sym_Blueprints,
    ACTIONS(77), 1,
      anon_sym_Expectations,
    ACTIONS(80), 1,
      anon_sym_Expects,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(24), 5,
      sym_type_alias,
      sym_extendable,
      sym_blueprint_block,
      sym_expectation_block,
      aux_sym_source_file_repeat1,
  [852] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(83), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [869] = 6,
    ACTIONS(61), 1,
      anon_sym_Requires,
    ACTIONS(63), 1,
      anon_sym_Provides,
    STATE(32), 1,
      sym_requires_block,
    STATE(51), 1,
      sym_provides_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
  [894] = 3,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [912] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(91), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [928] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [944] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(95), 8,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_extends,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [959] = 4,
    ACTIONS(63), 1,
      anon_sym_Provides,
    STATE(50), 1,
      sym_provides_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
  [978] = 4,
    ACTIONS(63), 1,
      anon_sym_Provides,
    STATE(48), 1,
      sym_provides_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
  [997] = 4,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(37), 2,
      sym_item,
      aux_sym_blueprint_block_repeat1,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
  [1016] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1031] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(105), 8,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_extends,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1046] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1061] = 4,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(37), 2,
      sym_item,
      aux_sym_blueprint_block_repeat1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
  [1080] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1095] = 4,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(37), 2,
      sym_item,
      aux_sym_blueprint_block_repeat1,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
  [1114] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1129] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1144] = 4,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(37), 2,
      sym_item,
      aux_sym_blueprint_block_repeat1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
  [1163] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1178] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1193] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_Provides,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
  [1207] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1221] = 7,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_field,
    STATE(82), 1,
      sym_typed_field,
    STATE(132), 1,
      sym_field_list,
    STATE(141), 1,
      sym_typed_field_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
  [1257] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
  [1270] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
  [1283] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
      anon_sym_STAR,
  [1296] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
  [1308] = 5,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_string_content,
    STATE(53), 1,
      aux_sym_string_repeat1,
    ACTIONS(141), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(148), 2,
      sym_template_variable,
      sym_escape_sequence,
  [1326] = 5,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_string_content,
    STATE(53), 1,
      aux_sym_string_repeat1,
    ACTIONS(141), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(155), 2,
      sym_template_variable,
      sym_escape_sequence,
  [1344] = 5,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym_string_content,
    STATE(54), 1,
      aux_sym_string_repeat1,
    ACTIONS(141), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(161), 2,
      sym_template_variable,
      sym_escape_sequence,
  [1362] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      sym_extendable_name,
      anon_sym_Blueprints,
      anon_sym_Expectations,
      anon_sym_Expects,
  [1374] = 4,
    ACTIONS(165), 1,
      anon_sym_Type,
    STATE(152), 1,
      sym_extendable_kind,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(167), 2,
      anon_sym_Requires,
      anon_sym_Provides,
  [1389] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(169), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1400] = 5,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_field,
    STATE(132), 1,
      sym_field_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1417] = 5,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_typed_field,
    STATE(141), 1,
      sym_typed_field_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1434] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(179), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1445] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(181), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(183), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1467] = 4,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(133), 2,
      sym_set_constraint,
      sym_range_constraint,
  [1482] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(189), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1493] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(191), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1504] = 4,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_set_constraint_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(196), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1519] = 3,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(42), 2,
      sym_item,
      aux_sym_blueprint_block_repeat1,
  [1531] = 4,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_set_constraint_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1545] = 4,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1559] = 3,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(52), 2,
      sym_typed_struct,
      sym_struct_literal,
  [1571] = 4,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_extends_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1585] = 4,
    ACTIONS(208), 1,
      anon_sym_PLUS,
    ACTIONS(211), 1,
      anon_sym_STAR,
    STATE(73), 1,
      aux_sym_artifact_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1599] = 4,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_typed_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1613] = 4,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_typed_field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1627] = 4,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1641] = 4,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1655] = 4,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_extends_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1669] = 4,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_typed_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1683] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_typed_field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1697] = 3,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1709] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_typed_field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1723] = 4,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1737] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1751] = 4,
    ACTIONS(244), 1,
      anon_sym_PLUS,
    ACTIONS(246), 1,
      anon_sym_STAR,
    STATE(88), 1,
      aux_sym_artifact_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1765] = 4,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_artifact_list,
    STATE(85), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1779] = 4,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_extends_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1793] = 4,
    ACTIONS(244), 1,
      anon_sym_PLUS,
    ACTIONS(253), 1,
      anon_sym_STAR,
    STATE(73), 1,
      aux_sym_artifact_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1807] = 4,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_set_constraint_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1821] = 3,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(39), 2,
      sym_item,
      aux_sym_blueprint_block_repeat1,
  [1833] = 4,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_set_constraint_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1847] = 3,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    STATE(33), 2,
      sym_item,
      aux_sym_blueprint_block_repeat1,
  [1859] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(196), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1869] = 4,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_set_constraint_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1883] = 4,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      anon_sym_extends,
    STATE(122), 1,
      sym_extends_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1897] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1906] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1915] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1924] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1933] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1942] = 3,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(98), 1,
      sym_typed_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1953] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1964] = 3,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(100), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1975] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
    ACTIONS(211), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1984] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [1995] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2006] = 3,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_typed_struct,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2017] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2028] = 3,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_struct_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2039] = 2,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2047] = 2,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2055] = 2,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2063] = 2,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2071] = 2,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2079] = 2,
    ACTIONS(283), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2087] = 2,
    ACTIONS(285), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2095] = 2,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2103] = 2,
    ACTIONS(289), 1,
      sym_extendable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2111] = 2,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2119] = 2,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2127] = 2,
    ACTIONS(295), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2135] = 2,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2143] = 2,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2151] = 2,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2159] = 2,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2167] = 2,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2175] = 2,
    ACTIONS(307), 1,
      anon_sym_x,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2183] = 2,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2191] = 2,
    ACTIONS(311), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2199] = 2,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2207] = 2,
    ACTIONS(315), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2215] = 2,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2223] = 2,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2231] = 2,
    ACTIONS(321), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2239] = 2,
    ACTIONS(323), 1,
      sym_extendable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2247] = 2,
    ACTIONS(325), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2255] = 2,
    ACTIONS(327), 1,
      anon_sym_x,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2263] = 2,
    ACTIONS(329), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2271] = 2,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2279] = 2,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2287] = 2,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2295] = 2,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2303] = 2,
    ACTIONS(339), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2311] = 2,
    ACTIONS(341), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2319] = 2,
    ACTIONS(343), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2327] = 2,
    ACTIONS(345), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2335] = 2,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2343] = 2,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2351] = 2,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2359] = 2,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2367] = 2,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
  [2375] = 2,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_section_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 119,
  [SMALL_STATE(5)] = 166,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 307,
  [SMALL_STATE(9)] = 354,
  [SMALL_STATE(10)] = 401,
  [SMALL_STATE(11)] = 438,
  [SMALL_STATE(12)] = 475,
  [SMALL_STATE(13)] = 512,
  [SMALL_STATE(14)] = 549,
  [SMALL_STATE(15)] = 586,
  [SMALL_STATE(16)] = 620,
  [SMALL_STATE(17)] = 654,
  [SMALL_STATE(18)] = 688,
  [SMALL_STATE(19)] = 722,
  [SMALL_STATE(20)] = 749,
  [SMALL_STATE(21)] = 766,
  [SMALL_STATE(22)] = 791,
  [SMALL_STATE(23)] = 808,
  [SMALL_STATE(24)] = 825,
  [SMALL_STATE(25)] = 852,
  [SMALL_STATE(26)] = 869,
  [SMALL_STATE(27)] = 894,
  [SMALL_STATE(28)] = 912,
  [SMALL_STATE(29)] = 928,
  [SMALL_STATE(30)] = 944,
  [SMALL_STATE(31)] = 959,
  [SMALL_STATE(32)] = 978,
  [SMALL_STATE(33)] = 997,
  [SMALL_STATE(34)] = 1016,
  [SMALL_STATE(35)] = 1031,
  [SMALL_STATE(36)] = 1046,
  [SMALL_STATE(37)] = 1061,
  [SMALL_STATE(38)] = 1080,
  [SMALL_STATE(39)] = 1095,
  [SMALL_STATE(40)] = 1114,
  [SMALL_STATE(41)] = 1129,
  [SMALL_STATE(42)] = 1144,
  [SMALL_STATE(43)] = 1163,
  [SMALL_STATE(44)] = 1178,
  [SMALL_STATE(45)] = 1193,
  [SMALL_STATE(46)] = 1207,
  [SMALL_STATE(47)] = 1221,
  [SMALL_STATE(48)] = 1244,
  [SMALL_STATE(49)] = 1257,
  [SMALL_STATE(50)] = 1270,
  [SMALL_STATE(51)] = 1283,
  [SMALL_STATE(52)] = 1296,
  [SMALL_STATE(53)] = 1308,
  [SMALL_STATE(54)] = 1326,
  [SMALL_STATE(55)] = 1344,
  [SMALL_STATE(56)] = 1362,
  [SMALL_STATE(57)] = 1374,
  [SMALL_STATE(58)] = 1389,
  [SMALL_STATE(59)] = 1400,
  [SMALL_STATE(60)] = 1417,
  [SMALL_STATE(61)] = 1434,
  [SMALL_STATE(62)] = 1445,
  [SMALL_STATE(63)] = 1456,
  [SMALL_STATE(64)] = 1467,
  [SMALL_STATE(65)] = 1482,
  [SMALL_STATE(66)] = 1493,
  [SMALL_STATE(67)] = 1504,
  [SMALL_STATE(68)] = 1519,
  [SMALL_STATE(69)] = 1531,
  [SMALL_STATE(70)] = 1545,
  [SMALL_STATE(71)] = 1559,
  [SMALL_STATE(72)] = 1571,
  [SMALL_STATE(73)] = 1585,
  [SMALL_STATE(74)] = 1599,
  [SMALL_STATE(75)] = 1613,
  [SMALL_STATE(76)] = 1627,
  [SMALL_STATE(77)] = 1641,
  [SMALL_STATE(78)] = 1655,
  [SMALL_STATE(79)] = 1669,
  [SMALL_STATE(80)] = 1683,
  [SMALL_STATE(81)] = 1697,
  [SMALL_STATE(82)] = 1709,
  [SMALL_STATE(83)] = 1723,
  [SMALL_STATE(84)] = 1737,
  [SMALL_STATE(85)] = 1751,
  [SMALL_STATE(86)] = 1765,
  [SMALL_STATE(87)] = 1779,
  [SMALL_STATE(88)] = 1793,
  [SMALL_STATE(89)] = 1807,
  [SMALL_STATE(90)] = 1821,
  [SMALL_STATE(91)] = 1833,
  [SMALL_STATE(92)] = 1847,
  [SMALL_STATE(93)] = 1859,
  [SMALL_STATE(94)] = 1869,
  [SMALL_STATE(95)] = 1883,
  [SMALL_STATE(96)] = 1897,
  [SMALL_STATE(97)] = 1906,
  [SMALL_STATE(98)] = 1915,
  [SMALL_STATE(99)] = 1924,
  [SMALL_STATE(100)] = 1933,
  [SMALL_STATE(101)] = 1942,
  [SMALL_STATE(102)] = 1953,
  [SMALL_STATE(103)] = 1964,
  [SMALL_STATE(104)] = 1975,
  [SMALL_STATE(105)] = 1984,
  [SMALL_STATE(106)] = 1995,
  [SMALL_STATE(107)] = 2006,
  [SMALL_STATE(108)] = 2017,
  [SMALL_STATE(109)] = 2028,
  [SMALL_STATE(110)] = 2039,
  [SMALL_STATE(111)] = 2047,
  [SMALL_STATE(112)] = 2055,
  [SMALL_STATE(113)] = 2063,
  [SMALL_STATE(114)] = 2071,
  [SMALL_STATE(115)] = 2079,
  [SMALL_STATE(116)] = 2087,
  [SMALL_STATE(117)] = 2095,
  [SMALL_STATE(118)] = 2103,
  [SMALL_STATE(119)] = 2111,
  [SMALL_STATE(120)] = 2119,
  [SMALL_STATE(121)] = 2127,
  [SMALL_STATE(122)] = 2135,
  [SMALL_STATE(123)] = 2143,
  [SMALL_STATE(124)] = 2151,
  [SMALL_STATE(125)] = 2159,
  [SMALL_STATE(126)] = 2167,
  [SMALL_STATE(127)] = 2175,
  [SMALL_STATE(128)] = 2183,
  [SMALL_STATE(129)] = 2191,
  [SMALL_STATE(130)] = 2199,
  [SMALL_STATE(131)] = 2207,
  [SMALL_STATE(132)] = 2215,
  [SMALL_STATE(133)] = 2223,
  [SMALL_STATE(134)] = 2231,
  [SMALL_STATE(135)] = 2239,
  [SMALL_STATE(136)] = 2247,
  [SMALL_STATE(137)] = 2255,
  [SMALL_STATE(138)] = 2263,
  [SMALL_STATE(139)] = 2271,
  [SMALL_STATE(140)] = 2279,
  [SMALL_STATE(141)] = 2287,
  [SMALL_STATE(142)] = 2295,
  [SMALL_STATE(143)] = 2303,
  [SMALL_STATE(144)] = 2311,
  [SMALL_STATE(145)] = 2319,
  [SMALL_STATE(146)] = 2327,
  [SMALL_STATE(147)] = 2335,
  [SMALL_STATE(148)] = 2343,
  [SMALL_STATE(149)] = 2351,
  [SMALL_STATE(150)] = 2359,
  [SMALL_STATE(151)] = 2367,
  [SMALL_STATE(152)] = 2375,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_struct, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, 0, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_struct, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, 0, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expr, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_ref, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, 0, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expectation_block, 3, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_type, 4, 0, 8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_type, 4, 0, 9),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blueprint_block_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blueprint_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refined_type, 8, 0, 13),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expectation_block, 4, 0, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_type, 6, 0, 11),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_type, 6, 0, 12),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blueprint_block, 4, 0, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requires_block, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_typed_struct, 2, 0, 0), REDUCE(sym_struct_literal, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provides_block, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, 0, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extendable, 6, 0, 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 6, 0, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 5, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_constraint_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_constraint_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_artifact_list_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_artifact_list_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_field_list, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_field_list, 3, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typed_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typed_field_list_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_alias_ref, 1, 0, 0), REDUCE(sym_value, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_field_list, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artifact_list, 1, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extends_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extends_clause_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artifact_list, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_field, 3, 0, 7),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 10),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_constraint, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_clause, 5, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extendable_kind, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_clause, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_constraint, 4, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_constraint, 5, 0, 14),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_constraint, 5, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_caffeine(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
