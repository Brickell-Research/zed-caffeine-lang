; Comments
(comment) @comment
(section_comment) @comment

; Keywords
[
  "Blueprints"
  "Expectations"
  "Expects"
  "for"
  "extends"
  "in"
  "Requires"
  "Provides"
  "Type"
] @keyword

; Refinement variable
(refined_type "x" @variable.special)

; Type names
(primitive_type) @type
[
  "List"
  "Dict"
  "Optional"
  "Defaulted"
] @type

; Type alias references (in type position)
(type_alias_ref (extendable_name) @type)

; Type alias definitions
(type_alias
  name: (extendable_name) @type.definition)

; Extendable definitions
(extendable
  name: (extendable_name) @function.definition)

; Extendable kind (Requires/Provides in parens)
(extendable_kind) @keyword

; Extendable references in extends clauses
(extends_clause (extendable_name) @function)

; Extendable references as values
(value (extendable_name) @function)

; Block names
(blueprint_block
  artifacts: (artifact_list (string) @string.special))
(expectation_block
  blueprint: (string) @string.special)

; Item names
(item
  name: (string) @string.special)

; Properties / fields
(field
  key: (identifier) @property)
(typed_field
  key: (identifier) @property)

; Strings
(string) @string
(string_content) @string
(escape_sequence) @string.escape
(template_variable) @variable.special

; Numbers
(number) @number
(percentage) @number

; Booleans
(boolean) @constant

; Operators
[
  ".."
  "|"
  "+"
] @operator

; Punctuation
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[
  ":"
  ","
  "*"
] @punctuation.delimiter

"\"" @string
