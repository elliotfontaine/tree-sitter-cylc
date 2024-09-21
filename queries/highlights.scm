(ERROR) @emphasis.strong

[
  (jinja2_expression)
  (jinja2_statement)
  (jinja2_comment)
] @text.literal

(include_statement) @embedded

(comment) @comment

(root_section
  "[" @operator
  name: (nametag) @title
  "]" @operator)

(subsection_1
  "[[" @operator
  name: (nametag) @title
  "]]" @operator)

(subsection_2
  "[[[" @operator
  name: (nametag) @title
  "]]]" @operator)

(graph_section
  "[[" @property
  name: (nametag) @hint
  "]]" @property)

(recurrence
  cyclepoints: (cyclepoints) @number
  "=" @operator)

(multiline_graphstring
  (multiline_string_open) @operator
  (multiline_string_close) @operator)

[
  (graph_logical) 
  (graph_arrow)
] @operator

(intercycle_annotation
  (cyclepoints) @number)

(graph_task
  (nametag) @emphasis)

(task_parameter
  "<" @punctuation
  (nametag) @text.literal
  ">" @punctuation)

(intercycle_annotation
  "[" @punctuation
  (cyclepoints) @number
  "]" @punctuation)

(task_output
    ":" @punctuation
    (nametag) @variable
    "?"? @punctuation)

(setting
  key: (key) @variable
  "=" @operator
  value: [
    (unquoted_string) @string
    (quoted_string) @string
    (multiline_string) @string
    (boolean) @boolean
    (number) @number
  ]?)

  (datetime) @number



