/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  unquoted_string: 1,
  integer: 2,
  datetime: 2,
  boolean: 4,
  comment: 5,
  quoted_string: 6,
  multiline_string: 8,
  jinja2: 100,
};

module.exports = grammar({
  name: "cylc",

  extras: ($) => [
    /[\s\f\uFEFF\u2060\u200B]|\r?\n/, // Whitespaces and newlines
    $.jinja2_expression,
    $.jinja2_statement,
    $.jinja2_comment,
    $.comment,
  ],

  rules: {
    // ----------------------------- Start Symbol -----------------------------
    workflow_configuration: ($) =>
      seq(
        optional($.jinja2_shebang),
        repeat(choice($.top_section, $.include_statement)),
      ),

    // --------------------------- Terminal symbols ---------------------------
    // Made up of literals (RegExp and string)

    jinja2_shebang: (_) => "#!Jinja2",

    jinja2_expression: (_) =>
      token(prec(PREC.jinja2, seq("{{", /[^{}]*/, "}}"))),

    jinja2_statement: (_) => token(prec(PREC.jinja2, seq("{%", /[^%]*/, "%}"))),

    jinja2_comment: (_) => token(prec(PREC.jinja2, seq("{#", /[^#]*/, "#}"))),

    include_directive: (_) => "%include",

    recurrence: (_) => token(repeat1(choice(/[A-Z0-9/^$+\-,()!]+/, "min"))),

    graph_logical: (_) => token(choice("&", "|")),

    graph_arrow: (_) => "=>",

    comment: (_) => token(seq("#", /.*/)),

    // used for section names + task/family names + task outputs / task parameters (in graph).
    nametag: (_) => /[a-zA-Z0-9\-_+%@]+/, // TODO: allow for unicode characters in nametags

    key: (_) => /[a-zA-Z0-9_-]+(\s[a-zA-Z0-9_-]+)*/, // TODO: allow for unicode characters in keys

    boolean: (_) => token(choice("True", "False")),

    integer: (_) => prec.left(PREC.integer, token(/\d+/)),

    _line_return: (_) => /\r?\n/,

    assignment_operator: (_) => "=",

    datetime: (_) =>
      prec.right(
        PREC.datetime,
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
                field(
                  "date",
                  /[0-9]{4}(0[1-9]|1[0-2])(0[1-9]|[12][0-9]|30|31)/,
                ),
                "T",
                optional(
                  seq(
                    token.immediate(choice(/[0-9]{6}/, /[0-9]{4}/, /[0-9]{2}/)),
                    optional(
                      choice(
                        "Z",
                        seq(
                          choice("+", "-"),
                          token.immediate(
                            choice(/[0-9]{2}[0-9]{2}/, /[0-9]{2}/),
                          ),
                        ),
                      ),
                    ),
                  ),
                ),
              ),
            ),
          ),
        ),
      ),

    // ------------------------- Non-Terminal Symbols -------------------------
    // Made up of Rules and literals.

    _jinja2: ($) =>
      choice($.jinja2_expression, $.jinja2_statement, $.jinja2_comment),

    include_statement: ($) =>
      seq(
        field("directive", $.include_directive),
        field("path", $.quoted_string),
      ),

    top_section: ($) =>
      seq(
        field("brackets_open", "["),
        optional(
          choice(
            field("name", $.nametag),
            field("name", alias("task parameters", $.nametag)),
          ),
        ),
        field("brackets_close", "]"),
        $._line_return,
        optional(repeat($.setting)),
        optional(repeat(choice($.sub_section_1, $.graph_section))),
      ),

    sub_section_1: ($) =>
      seq(
        field("brackets_open", "[["),
        optional(field("name", $.nametag)),
        optional($.task_parameter),
        field("brackets_close", "]]"),
        $._line_return,
        optional(repeat($.setting)),
        optional(repeat($.sub_section_2)),
      ),

    graph_section: ($) =>
      seq(
        field("brackets_open", "[["),
        field("name", alias("graph", $.nametag)),
        field("brackets_close", "]]"),
        $._line_return,
        optional(repeat($.graph_setting)),
      ),

    sub_section_2: ($) =>
      seq(
        field("brackets_open", "[[["),
        optional(field("name", $.nametag)),
        field("brackets_close", "]]]"),
        $._line_return,
        optional(repeat($.setting)),
      ),

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
                  $.quoted_string,
                  $.multiline_string,
                  $.datetime,
                  $.integer,
                  $.boolean,
                  $.unquoted_string,
                ),
              ),
            ),
          ),
        ),
        $._line_return,
      ),

    graph_setting: ($) =>
      seq(
        field("key", $.recurrence),
        field("operator", $.assignment_operator),
        field(
          "value",
          choice($.multiline_graph_string, $.unquoted_graph_string),
        ),
        $._line_return,
      ),

    unquoted_graph_string: ($) =>
      prec.left(
        seq(repeat1(choice($.graph_logical, $.graph_task, $.graph_arrow))),
      ),

    multiline_graph_string: ($) =>
      choice(
        seq(
          field("quotes_open", '"""'),
          repeat($.unquoted_graph_string),
          field("quotes_close", '"""'),
        ),
        seq(
          field("quotes_open", "'''"),
          repeat($.unquoted_graph_string),
          field("quotes_close", "'''"),
        ),
      ),

    graph_task: ($) =>
      seq(
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
                $._jinja2,
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

    quoted_string: ($) =>
      token(
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
            alias(
              repeat(choice(/[^'\\\n]/, /\\./, /\\\n\s*/)),
              $.string_content,
            ),
            field("quotes_close", "'"),
          ),
        ),
      ),

    unquoted_string: ($) =>
      prec(
        PREC.unquoted_string,
        alias(
          seq(
            /[^"'\s\n]/,
            repeat(
              choice(
                token.immediate(/[^"'#\n][^{#\n]*/),
                $._jinja2,
                //repeat(choice(token.immediate(/[^"'#\s\n][^#\n]*/), $._jinja2))
              ),
            ),
          ),
          $.string_content,
        ),
      ),

    // TODO: COMPLETE ISO 8601 datetime
    // Cylc Specificities:
    // - no decimal fractions (shortest cycling interval is 1 minute).
    // - SOME truncated representations are allowed https://en.wikipedia.org/wiki/ISO_8601#Truncated_representations_(deprecated)
    //
    // See: https://cylc.github.io/cylc-doc/latest/html/tutorial/scheduling/datetime-cycling.html#tutorial-iso8601-datetimes
    // See: https://github.com/metomi/isodatetime/blob/master/metomi/isodatetime/tests/test_00.py
    // There is too much to do it alone right now... Could be it's own grammar !

    // extended_datetime: ($) =>
    //   seq(
    //     choice(
    //       seq($.year, $.date_sep, $.month, $.date_sep, $.day),
    //       seq($.month, $.date_sep, $.day),
    //       $.day,
    //       $.year
    //     ),
    //     $.datetime_sep
    //     // ...
    //   ),

    // datetime_sep: ($) => "T",
    // date_sep: ($) => "-",
    // time_sep: ($) => ":",
    // year: ($) => /[0-9]{4}/,
    // month: ($) => /(0[1-9]|1[0-2])/,
    // day: ($) => /(0[1-9]|[12][0-9]|30|31)/,
    // hour: ($) => /([01][0-9]|2[0-3])/,
    // minute: ($) => /[0-5][0-9]/,
    // second: ($) => /[0-5][0-9]/,
  },
});
