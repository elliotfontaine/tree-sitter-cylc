[
  (jinja2_expression)
  (jinja2_statement)
  (jinja2_comment)
] @text.literal

(include_statement) @keyword

(number) @number

(boolean) @boolean

(comment) @comment

(root_section
  name: (nametag) @keyword)

(subsection_1
  name: (nametag) @keyword)

(subsection_2
  name: (nametag) @keyword)

(graph_section
  "graph" @emphasis.strong)

(recurrence) @string
(recurrence
  cyclepoints: (cyclepoints) @number
  "=" @operator)

(setting
  key: (key) @variable
  "=" @operator
  value : [
    (unquoted_string)
    (quoted_string)
    (multiline_string)
  ] @string)
