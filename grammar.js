/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cylc",

  extras: ($) => [
    // /[ \t\f\uFEFF\u2060\u200B]/, // breaks line returns requirements
    /[ \t]/, // Whitespaces
    $.jinja2_expression,
    $.jinja2_statement,
    $.jinja2_comment,
    $.comment,
  ],

  conflicts: ($) => [
    [$.top_section],
    [$.sub_section_1],
    [$.graph_section],
    [$.sub_section_2],
  ],

  rules: {
    // ----------------------------- Start Symbol -----------------------------

    workflow_configuration: ($) =>
      seq(
        optional($.jinja2_shebang),
        repeat(
          choice(
            seq($.top_section),
            seq($.include_statement, $._line_return),
            $._line_return,
          ),
        ),
      ),

    // --------------------------- Terminal symbols ---------------------------
    // Made up of literals (RegExp and string)

    jinja2_shebang: (_) => "#!Jinja2",

    jinja2_expression: (_) => token(prec(10, seq("{{", /[^{}]*/, "}}"))),

    jinja2_statement: (_) => token(prec(10, seq("{%", /[^{%]*/, "%}"))),

    jinja2_comment: (_) => token(prec(10, seq("{#", /[^{#]*/, "#}"))),

    include_directive: (_) => "%include",

    recurrence: (_) => token(repeat1(choice(/[A-Z0-9/^$+\-,()!]+/, "min"))),

    graph_logical: (_) => token(choice("&", "|")),

    graph_arrow: (_) => "=>",

    comment: (_) => seq("#", /[^\r\n]*/),

    // revert to these if Unicode makes the parser too slow.
    // nametag: (_) => /[a-zA-Z0-9\-_+%@]+/,
    // key: (_) => /[a-zA-Z0-9_-]+(\s[a-zA-Z0-9_-]+)*/,

    // used for section names + task/family names + task outputs / task parameters (in graph).
    nametag: (_) =>
      seq(
        /[\p{L}\p{N}_]+/, // First character: alphanumeric/Unicode or underscore (see cylc/cylc-flow#6288)
        repeat(/[\p{L}\p{N} \t+%@_-]/),
      ),

    key: (_) => seq(/[\p{L}\p{N}]+/, repeat(/[\p{L}\p{N} \t_-]/)), // doesn't allow +@% for keys

    boolean: (_) => token(seq(choice("True", "False"), repeat(/[ \t]/))),

    integer: (_) => token(seq(repeat1(/\d+/), repeat(/[ \t]/))),

    _line_return: (_) => /\r?\n/,

    assignment_operator: (_) => "=",

    xtrigger_annotation: (_) => "@",

    datetime: (_) =>
      token(
        seq(
          choice(
            seq(
              // with separators
              field(
                "date",
                /[0-9]{4}-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|30|31)/,
              ),
              "T",
              optional(
                // optional time
                seq(
                  token.immediate(
                    choice(
                      /[0-9]{2}:[0-9]{2}:[0-9]{2}/,
                      /[0-9]{2}:[0-9]{2}/,
                      /[0-9]{2}/,
                    ),
                  ),
                  optional(
                    // when time is present, optional timezone
                    choice(
                      "Z",
                      seq(
                        choice("+", "-"),
                        token.immediate(
                          choice(/[0-9]{2}:[0-9]{2}/, /[0-9]{2}/),
                        ),
                      ),
                    ),
                  ),
                ),
              ),
            ),
            seq(
              // without separators
              field("date", /[0-9]{4}(0[1-9]|1[0-2])(0[1-9]|[12][0-9]|30|31)/),
              "T",
              optional(
                seq(
                  token.immediate(choice(/[0-9]{6}/, /[0-9]{4}/, /[0-9]{2}/)),
                  optional(
                    choice(
                      "Z",
                      seq(
                        choice("+", "-"),
                        token.immediate(choice(/[0-9]{2}[0-9]{2}/, /[0-9]{2}/)),
                      ),
                    ),
                  ),
                ),
              ),
            ),
          ),
          repeat(/[ \t]/),
        ),
      ),

    // ------------------------- Non-Terminal Symbols -------------------------
    // Made up of Rules and literals.

    include_statement: ($) =>
      seq(
        field("directive", $.include_directive),
        field("path", $.quoted_string),
      ),

    top_section: ($) =>
      seq(
        field("brackets_open", "["),
        optional(field("name", $.nametag)),
        field("brackets_close", "]"),
        $._line_return,
        optional(repeat(choice($.setting, $._line_return))),
        optional(
          repeat(choice($.sub_section_1, $.graph_section, $._line_return)),
        ),
      ),

    sub_section_1: ($) =>
      seq(
        field("brackets_open", "[["),
        optional(field("name", $.nametag)),
        optional($.task_parameter),
        field("brackets_close", "]]"),
        $._line_return,
        optional(repeat(choice($.setting, $._line_return))),
        optional(repeat(choice($.sub_section_2, $._line_return))),
      ),

    graph_section: ($) =>
      seq(
        field("brackets_open", "[["),
        field("name", alias("graph", $.nametag)),
        field("brackets_close", "]]"),
        $._line_return,
        optional(repeat(choice($.graph_setting, $._line_return))),
      ),

    sub_section_2: ($) =>
      seq(
        field("brackets_open", "[[["),
        optional(field("name", $.nametag)),
        field("brackets_close", "]]]"),
        $._line_return,
        optional(repeat(choice($.setting, $._line_return))),
      ),

    graph_setting: ($) =>
      seq(
        field("key", $.recurrence),
        optional(
          seq(
            field("operator", $.assignment_operator),
            field(
              "value",
              optional(
                choice($.multiline_graph_string, $.unquoted_graph_string),
              ),
            ),
          ),
        ),
        $._line_return,
      ),

    unquoted_graph_string: ($) =>
      alias(
        seq(repeat1(choice($.graph_logical, $.graph_task, $.graph_arrow))),
        $.graph_string_content,
      ),

    multiline_graph_string: ($) =>
      choice(
        seq(
          field("quotes_open", '"""'),
          alias($._mgs_content, $.graph_string_content),
          field("quotes_close", '"""'),
        ),
        seq(
          field("quotes_open", "'''"),
          alias($._mgs_content, $.graph_string_content),
          field("quotes_close", "'''"),
        ),
      ),

    _mgs_content: ($) =>
      seq(
        repeat1(
          choice($.graph_logical, $.graph_task, $.graph_arrow, $._line_return),
        ),
      ),

    graph_task: ($) =>
      seq(
        optional($.xtrigger_annotation),
        $.nametag,
        optional($.task_parameter),
        optional($.intercycle_annotation),
        optional($.task_output),
      ),

    task_parameter: ($) =>
      seq(token.immediate("<"), optional($.nametag), token.immediate(">")),

    task_output: ($) =>
      seq(token.immediate(":"), $.nametag, optional(token.immediate("?"))),

    intercycle_annotation: ($) =>
      seq(token.immediate("["), $.recurrence, token.immediate("]")),

    setting: ($) =>
      seq(
        field("key", $.key),
        optional(
          seq(
            field("operator", $.assignment_operator),
            field(
              "value",
              optional(
                choice(
                  $.unquoted_string,
                  $.quoted_string,
                  $.multiline_string,
                  $.datetime,
                  $.integer,
                  $.boolean,
                ),
              ),
            ),
          ),
        ),
        $._line_return,
      ),

    unquoted_string: ($) =>
      alias(repeat1(token(/[^ "'#\n][^{#\n]*/)), $.string_content),

    quoted_string: ($) =>
      choice(
        // Match double quotes
        seq(
          field("quotes_open", '"'),
          alias(
            repeat1(
              choice(
                /[^"\\\n]/, // Match any character except double quotes, backslashes, or newlines
                /\\./, // Match escaped characters (e.g., \" or \')
                /\\\n\s*/, // Match a backslash followed by a newline and optional spaces (line continuation)
              ),
            ),
            $.string_content,
          ),
          field("quotes_close", '"'),
        ),
        // Match single quotes
        seq(
          field("quotes_open", "'"),
          alias(repeat(choice(/[^'\\\n]/, /\\./, /\\\n\s*/)), $.string_content),
          field("quotes_close", "'"),
        ),
      ),

    multiline_string: ($) =>
      choice(
        // Triple double quotes
        seq(
          field("quotes_open", '"""'),
          alias(
            repeat(
              choice(
                /[^"\\]/, // Any character except double quotes or backslashes
                /\\./, // Escaped sequences (e.g., \n, \t, \")
                /"[^"]/, // Allow a single quote, not followed by another quote
                /""[^"]/, // Allow one or two quotes inside the string
                /\\\s*\n/, // Allow backslashes followed by optional spaces and a newline (for line continuation)
              ),
            ),
            $.string_content,
          ),
          field("quotes_close", '"""'),
        ),
        // Triple single quotes
        seq(
          field("quotes_open", "'''"),
          alias(
            token(
              repeat(choice(/[^'\\]/, /\\./, /'[^']/, /''[^']/, /\\\s*\n/)),
            ),
            $.string_content,
          ),
          field("quotes_close", "'''"),
        ),
      ),
  },
});
