/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  line_continuation: 2, // see $._qs_d_content
  quoted_string: 3, // for precedence over comments
  jinja: 10, // absolute beast. It's templating after all.
};

module.exports = grammar({
  name: "cylc",

  extras: ($) => [
    /[ \t\f\uFEFF\u2060\u200B]/,
    $.jinja2_expression,
    $.jinja2_statement,
    $.jinja2_comment,
    $.line_continuation,
    $.comment,
  ],

  conflicts: ($) => [
    [$.top_section],
    [$.runtime_section],
    [$.task_section],
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
            $.top_section,
            $.runtime_section,
            seq($.include_statement, $._line_return),
            $._line_return,
          ),
        ),
      ),

    // --------------------------- Terminal symbols ---------------------------
    // Made up of literals (RegExp and string)

    jinja2_shebang: (_) => "#!Jinja2",

    jinja2_expression: (_) =>
      token(prec(PREC.jinja, seq("{{", /([^{}]|\{[^{]|\}[^}])*/, "}}"))),
    // regex: Anything except {{ or }}

    jinja2_statement: (_) =>
      token(prec(PREC.jinja, seq("{%", /([^%{]|%[^}]|\{[^%])*/, "%}"))),

    jinja2_comment: (_) =>
      token(prec(PREC.jinja, seq("{#", /([^#{]|#[^}]|\{[^#])*/, "#}"))),

    include_directive: (_) => "%include",

    recurrence: ($) =>
      repeat1(choice(/[A-Z0-9/^$+\-,()!:,]+/, $.jinja2_expression, "min")),

    graph_logical: (_) => token(choice("&", "|")),

    graph_parenthesis: (_) => token(choice("(", ")")),

    graph_arrow: (_) => "=>",

    // Line continuation is handled explicitly because "Extra rules must have unambiguous endings."
    comment: (_) => seq("#", /([^\\\r\n]|\\[^\r\n]|\\\r?\n)*/),

    // used for section names + task/family names + task outputs / task parameters (in graph).
    // First character: alphanumeric/Unicode or underscore (see cylc/cylc-flow#6288)
    // @ts-ignore
    nametag: (_) => seq(/[\p{L}\p{N}_]+/, repeat(/[\p{L}\p{N} \t+%@_-]/)),

    key: (_) =>
      seq(
        // @ts-ignore
        /[\p{L}\p{N}:!^$+_()/._-]+/,
        // @ts-ignore
        repeat(token.immediate(/ ?[\p{L}\p{N}:!^$+_()/._-]/)),
      ),

    boolean: (_) => seq(choice("True", "False"), /[ \t]*/),

    integer: (_) => seq(repeat1(/\d+/), /[ \t]*/),

    _line_return: (_) => /\r?\n/,

    line_continuation: (_) => token(prec(PREC.line_continuation, /\\\r?\n/)),

    assignment_operator: (_) => "=",

    xtrigger_annotation: (_) => "@",

    suicide_annotation: (_) => "!",

    // For $.quoted_tring
    //   1. Match any character except corresponding quote, newline, or backslash
    //   2. Match escaped corresponding quote.
    //   3. Match backslash (except if followed by newline because of $.line_continuation precedence)
    _qs_d_content: (_) =>
      repeat1(
        choice(token(prec(PREC.quoted_string, /[^"\\\r\n]/)), /\\"/, /\\/),
      ),
    _qs_s_content: (_) =>
      repeat1(
        choice(token(prec(PREC.quoted_string, /[^'\\\r\n]/)), /\\[^\r\n]/),
      ),

    // For $.multiline_string
    //   1. Match anything except the corresponding quotes
    //   2. Match 1 quote, if not followed by another quote
    //   3. Match 2 quotes, if not followed by a third one
    _ms_d_content: (_) =>
      repeat1(
        choice(token(prec(PREC.quoted_string, /[^"]/)), /"[^"]/, /""[^"]/),
      ),
    _ms_s_content: (_) =>
      repeat1(
        choice(token(prec(PREC.quoted_string, /[^']/)), /'[^']/, /''[^']/),
      ),

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
          /[ \t]*/,
        ),
      ),

    // ------------------------- Non-Terminal Symbols -------------------------
    // Made up of Rules and literals.

    include_statement: ($) =>
      seq(
        field("directive", $.include_directive),
        field("path", choice($.quoted_string, $.unquoted_string)),
      ),

    section_name: ($) => $.nametag,

    namespace: ($) => seq($.task_name, repeat(seq(",", $.task_name))),

    top_section: ($) =>
      seq(
        field("brackets_open", "["),
        optional(field("name", $.section_name)),
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
        optional(field("name", $.section_name)),
        field("brackets_close", "]]"),
        $._line_return,
        optional(repeat(choice($.setting, $._line_return))),
        optional(repeat(choice($.sub_section_2, $._line_return))),
      ),

    sub_section_2: ($) =>
      seq(
        field("brackets_open", "[[["),
        optional(field("name", $.section_name)),
        field("brackets_close", "]]]"),
        $._line_return,
        optional(repeat(choice($.setting, $._line_return))),
      ),

    runtime_section: ($) =>
      seq(
        field("brackets_open", "["),
        field("name", alias("runtime", $.section_name)),
        field("brackets_close", "]"),
        $._line_return,
        optional(repeat(choice($.setting, $._line_return))),
        optional(repeat(choice($.task_section, $._line_return))),
      ),

    task_section: ($) =>
      seq(
        field("brackets_open", "[["),
        optional(field("name", $.namespace)),
        field("brackets_close", "]]"),
        $._line_return,
        optional(repeat(choice($.setting, $._line_return))),
        optional(repeat(choice($.sub_section_2, $._line_return))),
      ),

    graph_section: ($) =>
      seq(
        field("brackets_open", "[["),
        field("name", alias("graph", $.section_name)),
        field("brackets_close", "]]"),
        $._line_return,
        optional(repeat(choice($.graph_setting, $._line_return))),
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
                choice(
                  $.unquoted_graph_string,
                  $.quoted_graph_string,
                  $.multiline_graph_string,
                ),
              ),
            ),
          ),
        ),
        $._line_return,
      ),

    unquoted_graph_string: ($) =>
      alias(
        seq(
          repeat1(
            choice(
              $.graph_logical,
              $.graph_task,
              $.graph_arrow,
              $.graph_parenthesis,
            ),
          ),
        ),
        $.graph_string_content,
      ),

    quoted_graph_string: ($) =>
      choice(
        seq(
          field("quotes_open", '"'),
          alias($._qgs_content, $.graph_string_content),
          field("quotes_close", '"'),
        ),
        seq(
          field("quotes_open", "'"),
          alias($._qgs_content, $.graph_string_content),
          field("quotes_close", "'"),
        ),
      ),

    _qgs_content: ($) =>
      seq(
        repeat1(
          choice(
            $.graph_logical,
            $.graph_task,
            $.graph_arrow,
            $.graph_parenthesis,
          ),
        ),
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
          choice(
            $.graph_logical,
            $.graph_task,
            $.graph_arrow,
            $.graph_parenthesis,
            $._line_return,
          ),
        ),
      ),

    graph_task: ($) =>
      seq(
        optional(
          choice(
            field("xtrigger", $.xtrigger_annotation),
            field("suicide", $.suicide_annotation),
          ),
        ),
        field("name", $.task_name),
        optional(field("intercycle", $.intercycle_annotation)),
        optional(field("output", $.task_output)),
      ),

    task_name: ($) => prec.right(repeat1(choice($.nametag, $.task_parameter))),

    task_parameter: ($) =>
      seq(
        // token.immediate("<"),
        token("<"),
        optional(
          choice(
            seq(
              field("name", $.nametag),
              repeat(seq(token.immediate(","), field("name", $.nametag))),
            ),
            seq(
              field("name", $.nametag),
              optional(
                seq(token.immediate("="), field("selection", $.nametag)),
              ),
            ),
          ),
        ),
        // token.immediate(">")
        token(">"),
      ),

    task_output: ($) =>
      choice(
        seq(
          seq(token.immediate(":"), field("name", $.nametag)),
          optional(field("optional_annotation", token.immediate("?"))),
        ),
        field("optional_annotation", token.immediate("?")),
      ),

    intercycle_annotation: ($) =>
      seq(
        token.immediate("["),
        optional(field("recurrence", $.recurrence)),
        token("]"),
      ),

    setting: ($) =>
      seq(
        field("key", choice($.key, $.jinja2_expression)),
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

    unquoted_string: ($) => alias($._us_content, $.string_content),

    // A bit hacky. Has to manage the competition with the data
    // types available to $.setting (boolean, integer and datetime).
    _us_content: ($) =>
      prec.right(
        seq(
          choice(
            /[^ #\n\r]/,
            alias($.boolean, ""),
            alias($.integer, ""),
            alias($.datetime, ""),
          ),
          repeat(/[^#\n\r]/),
        ),
      ),

    quoted_string: ($) =>
      choice(
        seq(
          field("quotes_open", '"'),
          alias($._qs_d_content, $.string_content),
          field("quotes_close", '"'),
        ),
        seq(
          field("quotes_open", "'"),
          alias($._qs_s_content, $.string_content),
          field("quotes_close", "'"),
        ),
      ),

    multiline_string: ($) =>
      choice(
        seq(
          field("quotes_open", '"""'),
          alias($._ms_d_content, $.string_content),
          field("quotes_close", '"""'),
        ),
        seq(
          field("quotes_open", "'''"),
          alias($._ms_s_content, $.string_content),
          field("quotes_close", "'''"),
        ),
      ),
  },
});
