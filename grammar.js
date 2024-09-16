/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'cylc',

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    // ----------------------------- Start Symbol -----------------------------
    configuration_file: $ => repeat($.root_section),

    // ------------------------- Non-Terminal Symbols -------------------------
    root_section: $ => seq(
      '[',
      field('name', $.string),
      ']',
      optional(repeat($.setting)),
      optional(repeat($.subsection_1))
    ),

    subsection_1: $ => seq(
      '[[',
      field('name', $.string),
      ']]',
      optional(repeat($.setting)),
      optional(repeat($.subsection_2))
    ),

    subsection_2: $ => seq(
      '[[[',
      field('name', $.string),
      ']]]',
      optional(repeat($.setting))
    ),

    setting: $ => seq(
      field('key', $.string),
      '=',
      field('value', choice($.string, $.quoted_string, $.multiline_string, $.number))
    ),

    // --------------------------- Terminal symbols ---------------------------
    quoted_string: $ => choice(
      // Match double quotes
      seq(
        '"',
        repeat(choice(
          /[^"\\]/,    // Match any character except double quotes or backslashes
          /\\./        // Match escaped characters (e.g., \" or \')
        )),
        '"',
      ),
      // Match single quotes (reverse the above)
      seq(
        "'",
        repeat(choice(
          /[^'\\]/,
          /\\./
        )),
        "'",
      )
    ),

    multiline_string: $ => choice(
      // Triple double quotes
      seq(
        '"""',
        repeat(choice(
          /[^"\\]/,
          /\\./,
          /""[^"]/     // Allow one or two quotes
        )),
        '"""'
      ),
      // Triple single quotes (reverse the above)
      seq(
        "'''",
        repeat(choice(
          /[^'\\]/,
          /\\./,
          /''[^']/
        )),
        "'''"
      )
    ),

    string: $ => /[a-zA-Z_-]+(\s[a-zA-Z_-]+)*/,

    number: $ => /\d+/,

    comment: $ => token(prec(-1, seq('#', /.*/))),

    // TODO: grammar for the workflow graph.

  }
});
