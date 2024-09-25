/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  unquoted_string: 1,
  number: 2,
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

  // TODO: rename grammar rules:
  // - root_section -> top_section
  // - subsection_1 -> sub_section_1
  // - subsection_2 -> sub_section_2
  // - multiline_string -> multilines_string
  // - number -> integer

  rules: {
    // ----------------------------- Start Symbol -----------------------------
    configuration_file: ($) =>
      seq(
        optional($.jinja2_shebang),
        repeat(choice($.root_section, $.include_statement)),
      ),

    // --------------------------- Terminal symbols ---------------------------
    // Made up of literals (RegExp and string)

    jinja2_shebang: (_) => "#!Jinja2",

    jinja2_expression: (_) =>
      token(prec(PREC.jinja2, seq("{{", /[^{}]*/, "}}"))),

    jinja2_statement: (_) => token(prec(PREC.jinja2, seq("{%", /[^%]*/, "%}"))),

    jinja2_comment: (_) => token(prec(PREC.jinja2, seq("{#", /[^#]*/, "#}"))),

    cyclepoints: (_) => token(repeat1(choice(/[A-Z0-9\/^$+\-,()!]+/, "min"))),

    graph_logical: (_) => token(choice("&", "|")),

    graph_arrow: (_) => "=>",

    comment: (_) => token(seq("#", /.*/)),

    // used for section names + task/family names + task outputs / task parameters (in graph).
    nametag: (_) => /[a-zA-Z0-9\-_+%@]+/, // TODO: allow for unicode characters in nametags

    key: (_) => /[a-zA-Z0-9_-]+(\s[a-zA-Z0-9_-]+)*/, // TODO: allow for unicode characters in keys

    boolean: (_) => token(choice("True", "False")),

    number: (_) => prec.left(PREC.number, token(/\d+/)),

    _line_return: (_) => /\r?\n/,

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
      seq(token("%include"), field("path", $.quoted_string)),

    root_section: ($) =>
      seq(
        "[",
        optional(
          choice(
            field("name", $.nametag),
            field("name", alias("task parameters", $.nametag)),
          ),
        ),
        "]",
        $._line_return,
        optional(repeat($.setting)),
        optional(repeat(choice($.subsection_1, $.graph_section))),
      ),

    subsection_1: ($) =>
      seq(
        "[[",
        optional(field("name", $.nametag)),
        optional($.task_parameter),
        "]]",
        $._line_return,
        optional(repeat($.setting)),
        optional(repeat($.subsection_2)),
      ),

    graph_section: ($) =>
      seq(
        "[[",
        field("name", alias("graph", $.nametag)),
        "]]",
        $._line_return,
        optional(repeat($.recurrence)),
      ),

    subsection_2: ($) =>
      seq(
        "[[[",
        optional(field("name", $.nametag)),
        "]]]",
        $._line_return,
        optional(repeat($.setting)),
      ),

    setting: ($) =>
      seq(
        field("key", $.key),
        optional(
          seq(
            "=",
            field(
              "value",
              optional(
                choice(
                  $.quoted_string,
                  $.multiline_string,
                  $.datetime,
                  $.number,
                  $.boolean,
                  $.unquoted_string,
                ),
              ),
            ),
          ),
        ),
        $._line_return,
      ),

    recurrence: ($) =>
      seq(
        field("cyclepoints", $.cyclepoints),
        "=",
        field(
          "graph_string",
          choice(
            //"\n", // Empty value
            $.multiline_graphstring,
            $.unquoted_graphstring,
          ),
        ),
        $._line_return,
      ),

    unquoted_graphstring: ($) =>
      prec.left(
        seq(repeat1(choice($.graph_logical, $.graph_task, $.graph_arrow))),
      ),

    multiline_graphstring: ($) =>
      choice(
        seq(
          alias('"""', $.multiline_string_open),
          repeat($.unquoted_graphstring),
          alias('"""', $.multiline_string_close),
        ),
        seq(
          alias("'''", $.multiline_string_open),
          repeat($.unquoted_graphstring),
          alias("'''", $.multiline_string_close),
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
      seq(token.immediate("["), $.cyclepoints, token.immediate("]")),

    multiline_string: ($) =>
      choice(
        // Triple double quotes
        seq(
          alias(token('"""'), $.multiline_string_open),
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
          alias('"""', $.multiline_string_close),
        ),
        // Triple single quotes
        seq(
          alias("'''", $.multiline_string_open),
          alias(
            token(
              repeat(choice(/[^'\\]/, /\\./, /'[^']/, /''[^']/, /\\\s*\n/)),
            ),
            $.string_content,
          ),
          alias("'''", $.multiline_string_close),
        ),
      ),

    quoted_string: ($) =>
      token(
        choice(
          // Match double quotes
          seq(
            '"',
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
            '"',
          ),
          // Match single quotes
          seq(
            "'",
            alias(
              repeat(choice(/[^'\\\n]/, /\\./, /\\\n\s*/)),
              $.string_content,
            ),
            "'",
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
