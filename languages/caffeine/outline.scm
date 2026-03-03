(type_alias
  name: (extendable_name) @name
  "Type" @context) @item

(extendable
  name: (extendable_name) @name
  kind: (extendable_kind) @context) @item

(blueprint_block
  "Blueprints" @context
  artifacts: (artifact_list) @name) @item

(expectation_block
  blueprint: (string) @name) @item

(item
  name: (string) @name) @item

(section_comment) @annotation
