#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  sym_jinja2_shebang = 1,
  sym_jinja2_expression = 2,
  sym_jinja2_statement = 3,
  sym_jinja2_comment = 4,
  sym_include_directive = 5,
  sym_recurrence = 6,
  sym_graph_logical = 7,
  sym_graph_arrow = 8,
  sym_comment = 9,
  sym_nametag = 10,
  sym_key = 11,
  sym_boolean = 12,
  aux_sym_integer_token1 = 13,
  sym__line_return = 14,
  sym_assignment_operator = 15,
  aux_sym_datetime_token1 = 16,
  anon_sym_LBRACK = 17,
  anon_sym_taskparameters = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LBRACK_LBRACK = 20,
  anon_sym_RBRACK_RBRACK = 21,
  anon_sym_graph = 22,
  anon_sym_LBRACK_LBRACK_LBRACK = 23,
  anon_sym_RBRACK_RBRACK_RBRACK = 24,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 25,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_COLON = 29,
  anon_sym_QMARK = 30,
  anon_sym_LBRACK2 = 31,
  anon_sym_RBRACK2 = 32,
  aux_sym_multiline_string_token1 = 33,
  aux_sym_multiline_string_token2 = 34,
  aux_sym_multiline_string_token3 = 35,
  aux_sym_multiline_string_token4 = 36,
  aux_sym_multiline_string_token5 = 37,
  aux_sym_multiline_string_token6 = 38,
  sym_quoted_string = 39,
  aux_sym_unquoted_string_token1 = 40,
  aux_sym_unquoted_string_token2 = 41,
  sym_workflow_configuration = 42,
  sym_integer = 43,
  sym_datetime = 44,
  sym__jinja2 = 45,
  sym_include_statement = 46,
  sym_top_section = 47,
  sym_sub_section_1 = 48,
  sym_graph_section = 49,
  sym_sub_section_2 = 50,
  sym_setting = 51,
  sym_graph_setting = 52,
  sym_unquoted_graph_string = 53,
  sym_multiline_graph_string = 54,
  sym_graph_task = 55,
  sym_task_parameter = 56,
  sym_task_output = 57,
  sym_intercycle_annotation = 58,
  sym_multiline_string = 59,
  sym_unquoted_string = 60,
  aux_sym_workflow_configuration_repeat1 = 61,
  aux_sym_top_section_repeat1 = 62,
  aux_sym_top_section_repeat2 = 63,
  aux_sym_sub_section_1_repeat1 = 64,
  aux_sym_graph_section_repeat1 = 65,
  aux_sym_unquoted_graph_string_repeat1 = 66,
  aux_sym_multiline_graph_string_repeat1 = 67,
  aux_sym_multiline_string_repeat1 = 68,
  aux_sym_unquoted_string_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_jinja2_shebang] = "jinja2_shebang",
  [sym_jinja2_expression] = "jinja2_expression",
  [sym_jinja2_statement] = "jinja2_statement",
  [sym_jinja2_comment] = "jinja2_comment",
  [sym_include_directive] = "include_directive",
  [sym_recurrence] = "recurrence",
  [sym_graph_logical] = "graph_logical",
  [sym_graph_arrow] = "graph_arrow",
  [sym_comment] = "comment",
  [sym_nametag] = "nametag",
  [sym_key] = "key",
  [sym_boolean] = "boolean",
  [aux_sym_integer_token1] = "integer_token1",
  [sym__line_return] = "_line_return",
  [sym_assignment_operator] = "assignment_operator",
  [aux_sym_datetime_token1] = "datetime_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_taskparameters] = "nametag",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_graph] = "nametag",
  [anon_sym_LBRACK_LBRACK_LBRACK] = "[[[",
  [anon_sym_RBRACK_RBRACK_RBRACK] = "]]]",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_RBRACK2] = "]",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [aux_sym_multiline_string_token2] = "multiline_string_token2",
  [aux_sym_multiline_string_token3] = "multiline_string_token3",
  [aux_sym_multiline_string_token4] = "multiline_string_token4",
  [aux_sym_multiline_string_token5] = "multiline_string_token5",
  [aux_sym_multiline_string_token6] = "string_content",
  [sym_quoted_string] = "quoted_string",
  [aux_sym_unquoted_string_token1] = "string_content",
  [aux_sym_unquoted_string_token2] = "unquoted_string_token2",
  [sym_workflow_configuration] = "workflow_configuration",
  [sym_integer] = "integer",
  [sym_datetime] = "datetime",
  [sym__jinja2] = "_jinja2",
  [sym_include_statement] = "include_statement",
  [sym_top_section] = "top_section",
  [sym_sub_section_1] = "sub_section_1",
  [sym_graph_section] = "graph_section",
  [sym_sub_section_2] = "sub_section_2",
  [sym_setting] = "setting",
  [sym_graph_setting] = "graph_setting",
  [sym_unquoted_graph_string] = "unquoted_graph_string",
  [sym_multiline_graph_string] = "multiline_graph_string",
  [sym_graph_task] = "graph_task",
  [sym_task_parameter] = "task_parameter",
  [sym_task_output] = "task_output",
  [sym_intercycle_annotation] = "intercycle_annotation",
  [sym_multiline_string] = "multiline_string",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_workflow_configuration_repeat1] = "workflow_configuration_repeat1",
  [aux_sym_top_section_repeat1] = "top_section_repeat1",
  [aux_sym_top_section_repeat2] = "top_section_repeat2",
  [aux_sym_sub_section_1_repeat1] = "sub_section_1_repeat1",
  [aux_sym_graph_section_repeat1] = "graph_section_repeat1",
  [aux_sym_unquoted_graph_string_repeat1] = "unquoted_graph_string_repeat1",
  [aux_sym_multiline_graph_string_repeat1] = "multiline_graph_string_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_jinja2_shebang] = sym_jinja2_shebang,
  [sym_jinja2_expression] = sym_jinja2_expression,
  [sym_jinja2_statement] = sym_jinja2_statement,
  [sym_jinja2_comment] = sym_jinja2_comment,
  [sym_include_directive] = sym_include_directive,
  [sym_recurrence] = sym_recurrence,
  [sym_graph_logical] = sym_graph_logical,
  [sym_graph_arrow] = sym_graph_arrow,
  [sym_comment] = sym_comment,
  [sym_nametag] = sym_nametag,
  [sym_key] = sym_key,
  [sym_boolean] = sym_boolean,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [sym__line_return] = sym__line_return,
  [sym_assignment_operator] = sym_assignment_operator,
  [aux_sym_datetime_token1] = aux_sym_datetime_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_taskparameters] = sym_nametag,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_graph] = sym_nametag,
  [anon_sym_LBRACK_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK_RBRACK,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_RBRACK2] = anon_sym_RBRACK,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [aux_sym_multiline_string_token2] = aux_sym_multiline_string_token2,
  [aux_sym_multiline_string_token3] = aux_sym_multiline_string_token3,
  [aux_sym_multiline_string_token4] = aux_sym_multiline_string_token4,
  [aux_sym_multiline_string_token5] = aux_sym_multiline_string_token5,
  [aux_sym_multiline_string_token6] = aux_sym_multiline_string_token6,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym_unquoted_string_token1] = aux_sym_multiline_string_token6,
  [aux_sym_unquoted_string_token2] = aux_sym_unquoted_string_token2,
  [sym_workflow_configuration] = sym_workflow_configuration,
  [sym_integer] = sym_integer,
  [sym_datetime] = sym_datetime,
  [sym__jinja2] = sym__jinja2,
  [sym_include_statement] = sym_include_statement,
  [sym_top_section] = sym_top_section,
  [sym_sub_section_1] = sym_sub_section_1,
  [sym_graph_section] = sym_graph_section,
  [sym_sub_section_2] = sym_sub_section_2,
  [sym_setting] = sym_setting,
  [sym_graph_setting] = sym_graph_setting,
  [sym_unquoted_graph_string] = sym_unquoted_graph_string,
  [sym_multiline_graph_string] = sym_multiline_graph_string,
  [sym_graph_task] = sym_graph_task,
  [sym_task_parameter] = sym_task_parameter,
  [sym_task_output] = sym_task_output,
  [sym_intercycle_annotation] = sym_intercycle_annotation,
  [sym_multiline_string] = sym_multiline_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_workflow_configuration_repeat1] = aux_sym_workflow_configuration_repeat1,
  [aux_sym_top_section_repeat1] = aux_sym_top_section_repeat1,
  [aux_sym_top_section_repeat2] = aux_sym_top_section_repeat2,
  [aux_sym_sub_section_1_repeat1] = aux_sym_sub_section_1_repeat1,
  [aux_sym_graph_section_repeat1] = aux_sym_graph_section_repeat1,
  [aux_sym_unquoted_graph_string_repeat1] = aux_sym_unquoted_graph_string_repeat1,
  [aux_sym_multiline_graph_string_repeat1] = aux_sym_multiline_graph_string_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_jinja2_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja2_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja2_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja2_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_recurrence] = {
    .visible = true,
    .named = true,
  },
  [sym_graph_logical] = {
    .visible = true,
    .named = true,
  },
  [sym_graph_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_nametag] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line_return] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_datetime_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_taskparameters] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_graph] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_token6] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unquoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_workflow_configuration] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_datetime] = {
    .visible = true,
    .named = true,
  },
  [sym__jinja2] = {
    .visible = false,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_top_section] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_section_1] = {
    .visible = true,
    .named = true,
  },
  [sym_graph_section] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_section_2] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_graph_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_graph_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_graph_string] = {
    .visible = true,
    .named = true,
  },
  [sym_graph_task] = {
    .visible = true,
    .named = true,
  },
  [sym_task_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_task_output] = {
    .visible = true,
    .named = true,
  },
  [sym_intercycle_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_workflow_configuration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_top_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_top_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sub_section_1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graph_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_graph_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_graph_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_brackets_close = 1,
  field_brackets_open = 2,
  field_directive = 3,
  field_key = 4,
  field_name = 5,
  field_operator = 6,
  field_path = 7,
  field_quotes_close = 8,
  field_quotes_open = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_brackets_close] = "brackets_close",
  [field_brackets_open] = "brackets_open",
  [field_directive] = "directive",
  [field_key] = "key",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_path] = "path",
  [field_quotes_close] = "quotes_close",
  [field_quotes_open] = "quotes_open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 17, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directive, 0},
    {field_path, 1},
  [2] =
    {field_brackets_close, 1},
    {field_brackets_open, 0},
  [4] =
    {field_brackets_close, 2},
    {field_brackets_open, 0},
    {field_name, 1},
  [7] =
    {field_key, 0},
  [8] =
    {field_key, 0},
    {field_operator, 1},
  [10] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [13] =
    {field_quotes_close, 1},
    {field_quotes_open, 0},
  [15] =
    {field_brackets_close, 2},
    {field_brackets_open, 0},
  [17] =
    {field_quotes_close, 2},
    {field_quotes_open, 0},
  [19] =
    {field_brackets_close, 3},
    {field_brackets_open, 0},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [8] = {
    [1] = aux_sym_multiline_string_token6,
  },
  [10] = {
    [1] = aux_sym_multiline_string_token6,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_multiline_string_repeat1, 2,
    aux_sym_multiline_string_repeat1,
    aux_sym_multiline_string_token6,
  aux_sym_unquoted_string_repeat1, 2,
    aux_sym_unquoted_string_repeat1,
    aux_sym_multiline_string_token6,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 3,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 19,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 52,
  [62] = 54,
  [63] = 36,
  [64] = 21,
  [65] = 24,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 70,
  [75] = 71,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 76,
  [83] = 83,
  [84] = 77,
  [85] = 85,
  [86] = 78,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 110,
  [126] = 120,
  [127] = 102,
  [128] = 121,
  [129] = 129,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(104);
      if (lookahead == '\r') SKIP(97);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '=') ADVANCE(171);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '?') ADVANCE(201);
      if (lookahead == 'F') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == '[') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(116);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 167,
        '\r', 3,
        '"', 20,
        '#', 130,
        '\'', 34,
        'F', 232,
        'T', 233,
        '{', 231,
        0x200b, 230,
        0x2060, 230,
        0xfeff, 230,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 168,
        '\r', 9,
        '#', 130,
        ':', 200,
        '<', 198,
        '=', 42,
        '?', 201,
        '[', 202,
        '{', 23,
        '&', 116,
        '|', 116,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(9);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(9);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 169,
        '\r', 234,
        '#', 130,
        '{', 235,
        '\t', 234,
        0x0b, 234,
        '\f', 234,
        ' ', 234,
        0x200b, 234,
        0x2060, 234,
        0xfeff, 234,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'') ADVANCE(238);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '=') ADVANCE(171);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '\r') ADVANCE(207);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(207);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 14:
      if (lookahead == '\r') SKIP(15);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(15);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 15:
      if (lookahead == '\r') SKIP(15);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(15);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 16:
      if (lookahead == '\r') SKIP(16);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(16);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 17:
      if (lookahead == '\r') SKIP(17);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(17);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(196);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '{') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(71);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(72);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == '}') ADVANCE(222);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(197);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == '}') ADVANCE(222);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '1') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == '3') ADVANCE(75);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(181);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(195);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(191);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == '}') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 71:
      if (lookahead == '}') ADVANCE(108);
      END_STATE();
    case 72:
      if (lookahead == '}') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == '}') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == '}') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(43);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(39);
      END_STATE();
    case 77:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 78:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 79:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(224);
      END_STATE();
    case 97:
      if (eof) ADVANCE(104);
      if (lookahead == '\r') SKIP(97);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '=') ADVANCE(171);
      if (lookahead == 'F') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(116);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      END_STATE();
    case 98:
      if (eof) ADVANCE(104);
      if (lookahead == '\r') SKIP(98);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(98);
      END_STATE();
    case 99:
      if (eof) ADVANCE(104);
      if (lookahead == '\r') SKIP(100);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '?') ADVANCE(201);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(100);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 100:
      if (eof) ADVANCE(104);
      if (lookahead == '\r') SKIP(100);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(100);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 101:
      if (eof) ADVANCE(104);
      if (lookahead == '\r') SKIP(102);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '=') ADVANCE(171);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == ']') ADVANCE(204);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 102:
      if (eof) ADVANCE(104);
      if (lookahead == '\r') SKIP(102);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '=') ADVANCE(171);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 103:
      if (eof) ADVANCE(104);
      if (lookahead == '\r') SKIP(103);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(103);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_jinja2_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_jinja2_expression);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_jinja2_statement);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_jinja2_comment);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_include_directive);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_include_directive);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_recurrence);
      ADVANCE_MAP(
        'a', 143,
        'm', 140,
        '!', 112,
        '$', 112,
        '(', 112,
        ')', 112,
        ',', 112,
        '/', 112,
        '^', 112,
      );
      if (lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_recurrence);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_recurrence);
      ADVANCE_MAP(
        'm', 140,
        'r', 150,
        '!', 112,
        '$', 112,
        '(', 112,
        ')', 112,
        ',', 112,
        '/', 112,
        '^', 112,
      );
      if (lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_recurrence);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_recurrence);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(112);
      if (lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_graph_logical);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_graph_arrow);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '2') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'J') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'j') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'k') ADVANCE(131);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_key);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '0') ADVANCE(157);
      if (lookahead == '1') ADVANCE(161);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == '3') ADVANCE(160);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(163);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(166);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(166);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'T') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(159);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(156);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line_return);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(230);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__line_return);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '{') ADVANCE(23);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__line_return);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '{') ADVANCE(23);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__line_return);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '{') ADVANCE(23);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'Z') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'Z') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == ':') ADVANCE(88);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == 'Z') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == 'Z') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == 'Z') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == 'Z') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_taskparameters);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '[') ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ']') ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_graph);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK_LBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_RBRACK);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == '[') ADVANCE(190);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      if (lookahead == ']') ADVANCE(192);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\r') ADVANCE(207);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '{') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '{') ADVANCE(74);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_multiline_string_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_multiline_string_token2);
      if (lookahead == '\n') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_multiline_string_token3);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_multiline_string_token4);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_multiline_string_token5);
      if (lookahead == '\n') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '{') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(214);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == '}') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == '}') ADVANCE(222);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '\'') ADVANCE(197);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      ADVANCE_MAP(
        '\n', 167,
        '\r', 3,
        '#', 130,
        'F', 232,
        'T', 233,
        '{', 231,
        0x200b, 230,
        0x2060, 230,
        0xfeff, 230,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'') ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '{') ADVANCE(74);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      ADVANCE_MAP(
        '\r', 234,
        '{', 23,
        '\t', 234,
        0x0b, 234,
        '\f', 234,
        ' ', 234,
        0x200b, 234,
        0x2060, 234,
        0xfeff, 234,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '{') ADVANCE(28);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(238);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 99},
  [4] = {.lex_state = 101},
  [5] = {.lex_state = 101},
  [6] = {.lex_state = 101},
  [7] = {.lex_state = 101},
  [8] = {.lex_state = 101},
  [9] = {.lex_state = 101},
  [10] = {.lex_state = 101},
  [11] = {.lex_state = 101},
  [12] = {.lex_state = 101},
  [13] = {.lex_state = 101},
  [14] = {.lex_state = 101},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 99},
  [18] = {.lex_state = 99},
  [19] = {.lex_state = 99},
  [20] = {.lex_state = 101},
  [21] = {.lex_state = 99},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 99},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 101},
  [27] = {.lex_state = 101},
  [28] = {.lex_state = 99},
  [29] = {.lex_state = 99},
  [30] = {.lex_state = 101},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 99},
  [33] = {.lex_state = 101},
  [34] = {.lex_state = 99},
  [35] = {.lex_state = 103},
  [36] = {.lex_state = 99},
  [37] = {.lex_state = 101},
  [38] = {.lex_state = 103},
  [39] = {.lex_state = 101},
  [40] = {.lex_state = 101},
  [41] = {.lex_state = 101},
  [42] = {.lex_state = 101},
  [43] = {.lex_state = 101},
  [44] = {.lex_state = 101},
  [45] = {.lex_state = 101},
  [46] = {.lex_state = 101},
  [47] = {.lex_state = 103},
  [48] = {.lex_state = 101},
  [49] = {.lex_state = 101},
  [50] = {.lex_state = 101},
  [51] = {.lex_state = 101},
  [52] = {.lex_state = 99},
  [53] = {.lex_state = 99},
  [54] = {.lex_state = 99},
  [55] = {.lex_state = 101},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 101},
  [58] = {.lex_state = 101},
  [59] = {.lex_state = 101},
  [60] = {.lex_state = 101},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 101},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 101},
  [69] = {.lex_state = 101},
  [70] = {.lex_state = 99},
  [71] = {.lex_state = 99},
  [72] = {.lex_state = 103},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 99},
  [77] = {.lex_state = 99},
  [78] = {.lex_state = 99},
  [79] = {.lex_state = 99},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 99},
  [89] = {.lex_state = 101},
  [90] = {.lex_state = 99},
  [91] = {.lex_state = 99},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 99},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 99},
  [101] = {.lex_state = 99},
  [102] = {.lex_state = 101},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 103},
  [108] = {.lex_state = 99},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 99},
  [111] = {.lex_state = 214},
  [112] = {.lex_state = 99},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 99},
  [121] = {.lex_state = 103},
  [122] = {.lex_state = 101},
  [123] = {.lex_state = 99},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 99},
  [126] = {.lex_state = 99},
  [127] = {.lex_state = 101},
  [128] = {.lex_state = 103},
  [129] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_jinja2_shebang] = ACTIONS(1),
    [sym_jinja2_expression] = ACTIONS(3),
    [sym_jinja2_statement] = ACTIONS(3),
    [sym_jinja2_comment] = ACTIONS(3),
    [sym_include_directive] = ACTIONS(1),
    [sym_recurrence] = ACTIONS(1),
    [sym_graph_logical] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym_nametag] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [sym_assignment_operator] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_taskparameters] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_graph] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [aux_sym_multiline_string_token2] = ACTIONS(1),
    [aux_sym_multiline_string_token3] = ACTIONS(1),
    [aux_sym_multiline_string_token4] = ACTIONS(1),
    [aux_sym_multiline_string_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_workflow_configuration] = STATE(123),
    [sym_include_statement] = STATE(58),
    [sym_top_section] = STATE(58),
    [aux_sym_workflow_configuration_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_jinja2_shebang] = ACTIONS(9),
    [sym_jinja2_expression] = ACTIONS(3),
    [sym_jinja2_statement] = ACTIONS(3),
    [sym_jinja2_comment] = ACTIONS(3),
    [sym_include_directive] = ACTIONS(11),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      aux_sym_integer_token1,
    ACTIONS(19), 1,
      sym__line_return,
    ACTIONS(21), 1,
      aux_sym_datetime_token1,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(15), 2,
      sym_boolean,
      sym_quoted_string,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    STATE(98), 4,
      sym_integer,
      sym_datetime,
      sym_multiline_string,
      sym_unquoted_string,
  [35] = 8,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      anon_sym_LBRACK2,
    STATE(19), 1,
      sym_task_parameter,
    STATE(53), 1,
      sym_intercycle_annotation,
    STATE(77), 1,
      sym_task_output,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(29), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [67] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(41), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(45), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [96] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    STATE(10), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(40), 3,
      sym_sub_section_1,
      sym_graph_section,
      aux_sym_top_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [125] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(53), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(4), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(39), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [154] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(57), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(13), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(44), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [183] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(61), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(9), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(37), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [212] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(65), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(41), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [241] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(49), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    STATE(20), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(49), 3,
      sym_sub_section_1,
      sym_graph_section,
      aux_sym_top_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [270] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(73), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(14), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(46), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [299] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(49), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    STATE(20), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(51), 3,
      sym_sub_section_1,
      sym_graph_section,
      aux_sym_top_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [328] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(81), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(48), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [357] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(85), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(55), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [386] = 8,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    STATE(31), 1,
      sym_task_parameter,
    STATE(56), 1,
      sym_intercycle_annotation,
    STATE(84), 1,
      sym_task_output,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(87), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [417] = 7,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(49), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    STATE(12), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    STATE(43), 3,
      sym_sub_section_1,
      sym_graph_section,
      aux_sym_top_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [446] = 7,
    ACTIONS(101), 1,
      sym_nametag,
    ACTIONS(103), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(99), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(61), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    STATE(117), 2,
      sym_unquoted_graph_string,
      sym_multiline_graph_string,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [474] = 6,
    ACTIONS(110), 1,
      sym_nametag,
    ACTIONS(107), 2,
      sym_graph_logical,
      sym_graph_arrow,
    ACTIONS(113), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(18), 2,
      sym_unquoted_graph_string,
      aux_sym_multiline_graph_string_repeat1,
    STATE(52), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [500] = 6,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      anon_sym_LBRACK2,
    STATE(36), 1,
      sym_intercycle_annotation,
    STATE(76), 1,
      sym_task_output,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(115), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [526] = 5,
    ACTIONS(119), 1,
      sym_key,
    ACTIONS(122), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      sym_include_directive,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [549] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(124), 8,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [566] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(25), 1,
      aux_sym_multiline_string_repeat1,
    STATE(67), 1,
      sym__jinja2,
    ACTIONS(126), 8,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_multiline_string_token1,
      aux_sym_multiline_string_token2,
      aux_sym_multiline_string_token3,
      aux_sym_multiline_string_token4,
      aux_sym_multiline_string_token5,
  [589] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(23), 1,
      aux_sym_multiline_string_repeat1,
    STATE(67), 1,
      sym__jinja2,
    ACTIONS(130), 8,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_multiline_string_token1,
      aux_sym_multiline_string_token2,
      aux_sym_multiline_string_token3,
      aux_sym_multiline_string_token4,
      aux_sym_multiline_string_token5,
  [612] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(135), 8,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [629] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(23), 1,
      aux_sym_multiline_string_repeat1,
    STATE(67), 1,
      sym__jinja2,
    ACTIONS(126), 8,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_multiline_string_token1,
      aux_sym_multiline_string_token2,
      aux_sym_multiline_string_token3,
      aux_sym_multiline_string_token4,
      aux_sym_multiline_string_token5,
  [652] = 5,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(141), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      sym_include_directive,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [675] = 5,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(145), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(26), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      sym_include_directive,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [698] = 6,
    ACTIONS(149), 1,
      sym_nametag,
    ACTIONS(151), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(147), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(32), 2,
      sym_unquoted_graph_string,
      aux_sym_multiline_graph_string_repeat1,
    STATE(52), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [723] = 6,
    ACTIONS(149), 1,
      sym_nametag,
    ACTIONS(151), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(34), 2,
      sym_unquoted_graph_string,
      aux_sym_multiline_graph_string_repeat1,
    STATE(52), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [748] = 5,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(155), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(33), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      sym_include_directive,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [771] = 6,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    STATE(63), 1,
      sym_intercycle_annotation,
    STATE(82), 1,
      sym_task_output,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(157), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [796] = 6,
    ACTIONS(149), 1,
      sym_nametag,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(147), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(18), 2,
      sym_unquoted_graph_string,
      aux_sym_multiline_graph_string_repeat1,
    STATE(52), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [821] = 5,
    ACTIONS(39), 1,
      sym_key,
    ACTIONS(163), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_top_section_repeat1,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_include_directive,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [844] = 6,
    ACTIONS(149), 1,
      sym_nametag,
    ACTIONS(159), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(18), 2,
      sym_unquoted_graph_string,
      aux_sym_multiline_graph_string_repeat1,
    STATE(52), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [869] = 5,
    ACTIONS(167), 1,
      sym_recurrence,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(47), 2,
      sym_graph_setting,
      aux_sym_graph_section_repeat1,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      sym_include_directive,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [891] = 4,
    ACTIONS(33), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym_task_output,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(171), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [911] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(65), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [933] = 5,
    ACTIONS(167), 1,
      sym_recurrence,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(35), 2,
      sym_graph_setting,
      aux_sym_graph_section_repeat1,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      sym_include_directive,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [955] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(41), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [977] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    STATE(50), 3,
      sym_sub_section_1,
      sym_graph_section,
      aux_sym_top_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [999] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(179), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1021] = 5,
    ACTIONS(185), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1043] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    STATE(50), 3,
      sym_sub_section_1,
      sym_graph_section,
      aux_sym_top_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1065] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(81), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1087] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(190), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1109] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(85), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1131] = 5,
    ACTIONS(194), 1,
      sym_recurrence,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    STATE(47), 2,
      sym_graph_setting,
      aux_sym_graph_section_repeat1,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      sym_include_directive,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1153] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(201), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1175] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    STATE(50), 3,
      sym_sub_section_1,
      sym_graph_section,
      aux_sym_top_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1197] = 5,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    STATE(50), 3,
      sym_sub_section_1,
      sym_graph_section,
      aux_sym_top_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1219] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    STATE(50), 3,
      sym_sub_section_1,
      sym_graph_section,
      aux_sym_top_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1241] = 3,
    STATE(54), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(218), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1259] = 4,
    ACTIONS(33), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_task_output,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(115), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1279] = 5,
    ACTIONS(223), 1,
      sym_nametag,
    ACTIONS(220), 2,
      sym_graph_logical,
      sym_graph_arrow,
    ACTIONS(226), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(54), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1301] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      sym_include_directive,
    ACTIONS(230), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 2,
      sym_sub_section_2,
      aux_sym_sub_section_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1323] = 4,
    ACTIONS(91), 1,
      anon_sym_COLON,
    STATE(82), 1,
      sym_task_output,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(157), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1342] = 3,
    ACTIONS(234), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(232), 4,
      ts_builtin_sym_end,
      sym_include_directive,
      sym_key,
      anon_sym_LBRACK_LBRACK_LBRACK,
  [1359] = 5,
    ACTIONS(11), 1,
      sym_include_directive,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    STATE(59), 3,
      sym_include_statement,
      sym_top_section,
      aux_sym_workflow_configuration_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1380] = 5,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      sym_include_directive,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    STATE(59), 3,
      sym_include_statement,
      sym_top_section,
      aux_sym_workflow_configuration_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1401] = 5,
    ACTIONS(11), 1,
      sym_include_directive,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    STATE(59), 3,
      sym_include_statement,
      sym_top_section,
      aux_sym_workflow_configuration_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1422] = 5,
    ACTIONS(250), 1,
      sym_nametag,
    ACTIONS(252), 1,
      sym__line_return,
    ACTIONS(248), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(62), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1443] = 5,
    ACTIONS(257), 1,
      sym_nametag,
    ACTIONS(260), 1,
      sym__line_return,
    ACTIONS(254), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(62), 2,
      sym_graph_task,
      aux_sym_unquoted_graph_string_repeat1,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1464] = 4,
    ACTIONS(91), 1,
      anon_sym_COLON,
    STATE(81), 1,
      sym_task_output,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(262), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1483] = 3,
    ACTIONS(124), 2,
      anon_sym_COLON,
      anon_sym_LBRACK2,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(264), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1500] = 3,
    ACTIONS(135), 2,
      anon_sym_COLON,
      anon_sym_LBRACK2,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(266), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1517] = 3,
    ACTIONS(270), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(268), 4,
      ts_builtin_sym_end,
      sym_include_directive,
      sym_key,
      anon_sym_LBRACK_LBRACK_LBRACK,
  [1534] = 2,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(272), 9,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_multiline_string_token1,
      aux_sym_multiline_string_token2,
      aux_sym_multiline_string_token3,
      aux_sym_multiline_string_token4,
      aux_sym_multiline_string_token5,
  [1549] = 3,
    ACTIONS(276), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(274), 4,
      ts_builtin_sym_end,
      sym_include_directive,
      sym_key,
      anon_sym_LBRACK_LBRACK_LBRACK,
  [1566] = 5,
    ACTIONS(11), 1,
      sym_include_directive,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    STATE(60), 3,
      sym_include_statement,
      sym_top_section,
      aux_sym_workflow_configuration_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1587] = 3,
    ACTIONS(280), 1,
      anon_sym_QMARK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(278), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1604] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(282), 6,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_COLON,
  [1619] = 3,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      sym_include_directive,
      sym_recurrence,
      anon_sym_LBRACK_LBRACK,
  [1635] = 6,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(288), 1,
      sym_nametag,
    ACTIONS(290), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(292), 1,
      anon_sym_graph,
    STATE(95), 1,
      sym_task_parameter,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1657] = 3,
    ACTIONS(296), 1,
      anon_sym_QMARK,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(294), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1673] = 3,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(298), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1689] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(171), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1703] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(115), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1717] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(300), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1731] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(302), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1745] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__line_return,
    STATE(83), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(93), 1,
      sym__jinja2,
    ACTIONS(304), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_unquoted_string_token2,
  [1764] = 2,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(308), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1777] = 2,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(262), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1790] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym__line_return,
    STATE(83), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(93), 1,
      sym__jinja2,
    ACTIONS(310), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_unquoted_string_token2,
  [1809] = 2,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(157), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1822] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__line_return,
    STATE(80), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(93), 1,
      sym__jinja2,
    ACTIONS(304), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_unquoted_string_token2,
  [1841] = 2,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(317), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1854] = 4,
    ACTIONS(319), 1,
      sym_nametag,
    ACTIONS(321), 1,
      anon_sym_taskparameters,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1870] = 4,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(325), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(101), 1,
      sym_task_parameter,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1886] = 2,
    ACTIONS(327), 3,
      ts_builtin_sym_end,
      sym_include_directive,
      anon_sym_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1898] = 3,
    ACTIONS(329), 1,
      sym_nametag,
    ACTIONS(331), 1,
      anon_sym_GT,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1911] = 3,
    ACTIONS(333), 1,
      sym_nametag,
    ACTIONS(335), 1,
      anon_sym_GT,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1924] = 3,
    ACTIONS(337), 1,
      sym_nametag,
    ACTIONS(339), 1,
      anon_sym_RBRACK_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1937] = 2,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(341), 5,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym__line_return,
      aux_sym_unquoted_string_token2,
  [1948] = 3,
    ACTIONS(343), 1,
      sym__line_return,
    ACTIONS(345), 1,
      sym_assignment_operator,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1961] = 2,
    ACTIONS(347), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1971] = 2,
    ACTIONS(349), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1981] = 2,
    ACTIONS(351), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1991] = 2,
    ACTIONS(353), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2001] = 2,
    ACTIONS(355), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2011] = 2,
    ACTIONS(357), 1,
      sym_quoted_string,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2021] = 2,
    ACTIONS(359), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2031] = 2,
    ACTIONS(361), 1,
      anon_sym_RBRACK2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2041] = 2,
    ACTIONS(363), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2051] = 2,
    ACTIONS(365), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2061] = 2,
    ACTIONS(367), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2071] = 2,
    ACTIONS(369), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2081] = 2,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2091] = 2,
    ACTIONS(373), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2101] = 2,
    ACTIONS(375), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2111] = 2,
    ACTIONS(377), 1,
      anon_sym_GT,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2121] = 2,
    ACTIONS(379), 1,
      aux_sym_multiline_string_token6,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2131] = 2,
    ACTIONS(381), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2141] = 2,
    ACTIONS(383), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2151] = 2,
    ACTIONS(385), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2161] = 2,
    ACTIONS(387), 1,
      anon_sym_RBRACK_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2171] = 2,
    ACTIONS(389), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2181] = 2,
    ACTIONS(391), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2191] = 2,
    ACTIONS(393), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2201] = 2,
    ACTIONS(395), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2211] = 2,
    ACTIONS(397), 1,
      sym_nametag,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2221] = 2,
    ACTIONS(399), 1,
      sym_recurrence,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2231] = 2,
    ACTIONS(401), 1,
      sym_assignment_operator,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2241] = 2,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2251] = 2,
    ACTIONS(405), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2261] = 2,
    ACTIONS(407), 1,
      anon_sym_GT,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2271] = 2,
    ACTIONS(409), 1,
      sym_nametag,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2281] = 2,
    ACTIONS(411), 1,
      anon_sym_RBRACK2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2291] = 2,
    ACTIONS(413), 1,
      sym_recurrence,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2301] = 2,
    ACTIONS(415), 1,
      sym__line_return,
    ACTIONS(5), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 125,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 183,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 299,
  [SMALL_STATE(13)] = 328,
  [SMALL_STATE(14)] = 357,
  [SMALL_STATE(15)] = 386,
  [SMALL_STATE(16)] = 417,
  [SMALL_STATE(17)] = 446,
  [SMALL_STATE(18)] = 474,
  [SMALL_STATE(19)] = 500,
  [SMALL_STATE(20)] = 526,
  [SMALL_STATE(21)] = 549,
  [SMALL_STATE(22)] = 566,
  [SMALL_STATE(23)] = 589,
  [SMALL_STATE(24)] = 612,
  [SMALL_STATE(25)] = 629,
  [SMALL_STATE(26)] = 652,
  [SMALL_STATE(27)] = 675,
  [SMALL_STATE(28)] = 698,
  [SMALL_STATE(29)] = 723,
  [SMALL_STATE(30)] = 748,
  [SMALL_STATE(31)] = 771,
  [SMALL_STATE(32)] = 796,
  [SMALL_STATE(33)] = 821,
  [SMALL_STATE(34)] = 844,
  [SMALL_STATE(35)] = 869,
  [SMALL_STATE(36)] = 891,
  [SMALL_STATE(37)] = 911,
  [SMALL_STATE(38)] = 933,
  [SMALL_STATE(39)] = 955,
  [SMALL_STATE(40)] = 977,
  [SMALL_STATE(41)] = 999,
  [SMALL_STATE(42)] = 1021,
  [SMALL_STATE(43)] = 1043,
  [SMALL_STATE(44)] = 1065,
  [SMALL_STATE(45)] = 1087,
  [SMALL_STATE(46)] = 1109,
  [SMALL_STATE(47)] = 1131,
  [SMALL_STATE(48)] = 1153,
  [SMALL_STATE(49)] = 1175,
  [SMALL_STATE(50)] = 1197,
  [SMALL_STATE(51)] = 1219,
  [SMALL_STATE(52)] = 1241,
  [SMALL_STATE(53)] = 1259,
  [SMALL_STATE(54)] = 1279,
  [SMALL_STATE(55)] = 1301,
  [SMALL_STATE(56)] = 1323,
  [SMALL_STATE(57)] = 1342,
  [SMALL_STATE(58)] = 1359,
  [SMALL_STATE(59)] = 1380,
  [SMALL_STATE(60)] = 1401,
  [SMALL_STATE(61)] = 1422,
  [SMALL_STATE(62)] = 1443,
  [SMALL_STATE(63)] = 1464,
  [SMALL_STATE(64)] = 1483,
  [SMALL_STATE(65)] = 1500,
  [SMALL_STATE(66)] = 1517,
  [SMALL_STATE(67)] = 1534,
  [SMALL_STATE(68)] = 1549,
  [SMALL_STATE(69)] = 1566,
  [SMALL_STATE(70)] = 1587,
  [SMALL_STATE(71)] = 1604,
  [SMALL_STATE(72)] = 1619,
  [SMALL_STATE(73)] = 1635,
  [SMALL_STATE(74)] = 1657,
  [SMALL_STATE(75)] = 1673,
  [SMALL_STATE(76)] = 1689,
  [SMALL_STATE(77)] = 1703,
  [SMALL_STATE(78)] = 1717,
  [SMALL_STATE(79)] = 1731,
  [SMALL_STATE(80)] = 1745,
  [SMALL_STATE(81)] = 1764,
  [SMALL_STATE(82)] = 1777,
  [SMALL_STATE(83)] = 1790,
  [SMALL_STATE(84)] = 1809,
  [SMALL_STATE(85)] = 1822,
  [SMALL_STATE(86)] = 1841,
  [SMALL_STATE(87)] = 1854,
  [SMALL_STATE(88)] = 1870,
  [SMALL_STATE(89)] = 1886,
  [SMALL_STATE(90)] = 1898,
  [SMALL_STATE(91)] = 1911,
  [SMALL_STATE(92)] = 1924,
  [SMALL_STATE(93)] = 1937,
  [SMALL_STATE(94)] = 1948,
  [SMALL_STATE(95)] = 1961,
  [SMALL_STATE(96)] = 1971,
  [SMALL_STATE(97)] = 1981,
  [SMALL_STATE(98)] = 1991,
  [SMALL_STATE(99)] = 2001,
  [SMALL_STATE(100)] = 2011,
  [SMALL_STATE(101)] = 2021,
  [SMALL_STATE(102)] = 2031,
  [SMALL_STATE(103)] = 2041,
  [SMALL_STATE(104)] = 2051,
  [SMALL_STATE(105)] = 2061,
  [SMALL_STATE(106)] = 2071,
  [SMALL_STATE(107)] = 2081,
  [SMALL_STATE(108)] = 2091,
  [SMALL_STATE(109)] = 2101,
  [SMALL_STATE(110)] = 2111,
  [SMALL_STATE(111)] = 2121,
  [SMALL_STATE(112)] = 2131,
  [SMALL_STATE(113)] = 2141,
  [SMALL_STATE(114)] = 2151,
  [SMALL_STATE(115)] = 2161,
  [SMALL_STATE(116)] = 2171,
  [SMALL_STATE(117)] = 2181,
  [SMALL_STATE(118)] = 2191,
  [SMALL_STATE(119)] = 2201,
  [SMALL_STATE(120)] = 2211,
  [SMALL_STATE(121)] = 2221,
  [SMALL_STATE(122)] = 2231,
  [SMALL_STATE(123)] = 2241,
  [SMALL_STATE(124)] = 2251,
  [SMALL_STATE(125)] = 2261,
  [SMALL_STATE(126)] = 2271,
  [SMALL_STATE(127)] = 2281,
  [SMALL_STATE(128)] = 2291,
  [SMALL_STATE(129)] = 2301,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_configuration, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_task, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 5, 0, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 5, 0, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_section, 3, 0, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_section, 3, 0, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 4, 0, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 4, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 4, 0, 9),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 4, 0, 9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 3, 0, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 4, 0, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 4, 0, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_section, 4, 0, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_section, 4, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 5, 0, 11),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 5, 0, 11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_section, 5, 0, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_section, 5, 0, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 5, 0, 9),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 5, 0, 9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 6, 0, 11),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 6, 0, 11),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_task, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_section, 4, 0, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_section, 4, 0, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_graph_string_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_graph_string_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_graph_string_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_task, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_section_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_section_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_section_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_parameter, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_parameter, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_2, 4, 0, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_2, 4, 0, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_2, 3, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_2, 3, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_2, 4, 0, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_2, 4, 0, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_task, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_2, 5, 0, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_2, 5, 0, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_section, 5, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_section, 5, 0, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_task, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_section, 4, 0, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_section, 4, 0, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 5, 0, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 5, 0, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_section_1_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sub_section_1_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_section_1_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 6, 0, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 6, 0, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_graph_section_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_graph_section_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_graph_section_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 6, 0, 9),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 6, 0, 9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_section, 5, 0, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_section, 5, 0, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_section_repeat2, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_section_repeat2, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_section_repeat2, 2, 0, 0), SHIFT_REPEAT(73),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_section, 6, 0, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_section, 6, 0, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_graph_string, 1, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_graph_string_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_graph_string_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_graph_string_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_section_1, 7, 0, 11),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_section_1, 7, 0, 11),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_configuration, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_configuration_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_configuration_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_configuration_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_configuration, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_graph_string, 1, 0, 0),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_graph_string_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_graph_string_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_graph_string_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_task, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_parameter, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_parameter, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 5),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4, 0, 6),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4, 0, 6),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_output, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intercycle_annotation, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_setting, 4, 0, 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_setting, 4, 0, 6),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_output, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intercycle_annotation, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_output, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_task, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 2, 0, 8),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_task, 4, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_output, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_graph_string, 2, 0, 7),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2, 0, 7),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 10),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_graph_string, 3, 0, 12),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [403] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cylc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
