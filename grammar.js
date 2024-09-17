/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  unquoted_string: 1,
  number: 2,
  boolean: 2,
  comment: 3,
  quoted_string: 4,
  multiline_string: 8,
  jinja2: 100,
};

module.exports = grammar({
  name: "cylc",

  extras: ($) => [
    /\s/,
    $.jinja2_expression,
    $.jinja2_statement,
    $.jinja2_comment,
    $.comment,
  ],

  rules: {
    // ----------------------------- Start Symbol -----------------------------
    configuration_file: ($) =>
      repeat(choice($.root_section, $.include_statement)),

    // ------------------------- Non-Terminal Symbols -------------------------
    root_section: ($) =>
      seq(
        "[",
        field("name", $.nametag),
        "]",
        optional(repeat($.setting)),
        optional(repeat(choice($.subsection_1, $.graph_section))),
      ),

    subsection_1: ($) =>
      seq(
        "[[",
        field("name", $.nametag),
        "]]",
        optional(repeat($.setting)),
        optional(repeat($.subsection_2)),
      ),

    graph_section: ($) =>
      seq("[[", "graph", "]]", optional(repeat($.recurrence))),

    subsection_2: ($) =>
      seq("[[[", field("name", $.nametag), "]]]", optional(repeat($.setting))),

    setting: ($) =>
      seq(
        field("key", $.key),
        "=",
        optional(
          field(
            "value",
            choice(
              "\n", // Empty value
              $.quoted_string,
              $.multiline_string,
              $.number,
              $.boolean,
              $.unquoted_string,
            ),
          ),
        ),
      ),

    recurrence: ($) =>
      seq(
        field("cyclepoints", $.cyclepoints),
        "=",
        optional(
          field(
            "graph_string",
            choice(
              "\n", // Empty value
              $.quoted_string,
              $.multiline_string,
              $.unquoted_string,
            ),
          ),
        ),
      ),

    // --------------------------- Terminal symbols ---------------------------

    multiline_string: ($) =>
      token(
        prec(
          PREC.multiline_string,
          choice(
            // Triple double quotes
            seq(
              '"""',
              repeat(
                choice(
                  /[^"\\]/, // Any character except double quotes or backslashes
                  /\\./, // Escaped sequences (e.g., \n, \t, \")
                  /"[^"]/, // Allow a single quote, not followed by another quote
                  /""[^"]/, // Allow one or two quotes inside the string
                  /\\\s*\n/, // Allow backslashes followed by optional spaces and a newline (for line continuation)
                ),
              ),
              '"""',
            ),
            // Triple single quotes
            seq(
              "'''",
              repeat(choice(/[^'\\]/, /\\./, /'[^']/, /''[^']/, /\\\s*\n/)),
              "'''",
            ),
          ),
        ),
      ),

    quoted_string: ($) =>
      token(
        prec(
          PREC.quoted_string,
          choice(
            // Match double quotes
            seq(
              '"',
              repeat(
                choice(
                  /[^"\\]/, // Match any character except double quotes or backslashes
                  /\\./, // Match escaped characters (e.g., \" or \')
                ),
              ),
              '"',
            ),
            // Match single quotes
            seq("'", repeat(choice(/[^'\\]/, /\\./)), "'"),
          ),
        ),
      ),

    number: ($) => token(prec(PREC.number, /\d+/)),

    comment: ($) => prec(PREC.comment, seq("#", /.*/)),

    unquoted_string: ($) => prec(PREC.unquoted_string, /[^"'#\s\n][^#\n]+/),

    // used for section names, task names and family names.
    nametag: ($) => /[a-zA-Z0-9\-_+%@]+/, // TODO: allow for unicode characters in nametags

    key: ($) => /[a-zA-Z0-9_-]+(\s[a-zA-Z0-9_-]+)*/, // TODO: allow for unicode characters in keys

    cyclepoints: ($) => /[a-zA-Z0-9\/\^\$\-\+\!\_\(\)]+/, // TODO: allow for more complex cyclepoints

    boolean: ($) => token(prec(PREC.boolean, choice("True", "False"))),

    include_statement: ($) => seq("%include", field("path", $.quoted_string)),

    jinja2_expression: ($) =>
      token(prec(PREC.jinja2, seq("{{", /[^{}]*/, "}}"))),

    jinja2_statement: ($) => token(prec(PREC.jinja2, seq("{%", /[^%]*/, "%}"))),

    jinja2_comment: ($) => token(prec(PREC.jinja2, seq("{#", /[^#]*/, "#}"))),

    // TODO: grammar for graph strings.
    // TODO: grammar for parameterized tasks.
    // TODO: refactor for less use of prec.
  },
});
