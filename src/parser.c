#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 1
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym_jinja2_expression = 1,
  sym_jinja2_statement = 2,
  sym_jinja2_comment = 3,
  sym_cyclepoints = 4,
  sym_graph_logical = 5,
  sym_graph_arrow = 6,
  sym_comment = 7,
  sym_nametag = 8,
  sym_key = 9,
  sym_boolean = 10,
  aux_sym_number_token1 = 11,
  sym__line_return = 12,
  aux_sym_datetime_token1 = 13,
  anon_sym_PERCENTinclude = 14,
  anon_sym_LBRACK = 15,
  anon_sym_taskparameters = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LBRACK_LBRACK = 18,
  anon_sym_RBRACK_RBRACK = 19,
  anon_sym_graph = 20,
  anon_sym_LBRACK_LBRACK_LBRACK = 21,
  anon_sym_RBRACK_RBRACK_RBRACK = 22,
  anon_sym_EQ = 23,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 24,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_COLON = 28,
  anon_sym_QMARK = 29,
  anon_sym_LBRACK2 = 30,
  anon_sym_RBRACK2 = 31,
  aux_sym_multiline_string_token1 = 32,
  aux_sym_multiline_string_token2 = 33,
  aux_sym_multiline_string_token3 = 34,
  aux_sym_multiline_string_token4 = 35,
  aux_sym_multiline_string_token5 = 36,
  aux_sym_multiline_string_token6 = 37,
  sym_quoted_string = 38,
  aux_sym_unquoted_string_token1 = 39,
  aux_sym_unquoted_string_token2 = 40,
  sym_configuration_file = 41,
  sym_number = 42,
  sym_datetime = 43,
  sym__jinja2 = 44,
  sym_include_statement = 45,
  sym_root_section = 46,
  sym_subsection_1 = 47,
  sym_graph_section = 48,
  sym_subsection_2 = 49,
  sym_setting = 50,
  sym_recurrence = 51,
  sym_unquoted_graphstring = 52,
  sym_multiline_graphstring = 53,
  sym_graph_task = 54,
  sym_task_parameter = 55,
  sym_task_output = 56,
  sym_intercycle_annotation = 57,
  sym_multiline_string = 58,
  sym_unquoted_string = 59,
  aux_sym_configuration_file_repeat1 = 60,
  aux_sym_root_section_repeat1 = 61,
  aux_sym_root_section_repeat2 = 62,
  aux_sym_subsection_1_repeat1 = 63,
  aux_sym_graph_section_repeat1 = 64,
  aux_sym_unquoted_graphstring_repeat1 = 65,
  aux_sym_multiline_graphstring_repeat1 = 66,
  aux_sym_multiline_string_repeat1 = 67,
  aux_sym_unquoted_string_repeat1 = 68,
  alias_sym_multiline_string_close = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_jinja2_expression] = "jinja2_expression",
  [sym_jinja2_statement] = "jinja2_statement",
  [sym_jinja2_comment] = "jinja2_comment",
  [sym_cyclepoints] = "cyclepoints",
  [sym_graph_logical] = "graph_logical",
  [sym_graph_arrow] = "graph_arrow",
  [sym_comment] = "comment",
  [sym_nametag] = "nametag",
  [sym_key] = "key",
  [sym_boolean] = "boolean",
  [aux_sym_number_token1] = "number_token1",
  [sym__line_return] = "_line_return",
  [aux_sym_datetime_token1] = "datetime_token1",
  [anon_sym_PERCENTinclude] = "%include",
  [anon_sym_LBRACK] = "[",
  [anon_sym_taskparameters] = "nametag",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_graph] = "nametag",
  [anon_sym_LBRACK_LBRACK_LBRACK] = "[[[",
  [anon_sym_RBRACK_RBRACK_RBRACK] = "]]]",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "multiline_string_open",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "multiline_string_open",
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
  [sym_configuration_file] = "configuration_file",
  [sym_number] = "number",
  [sym_datetime] = "datetime",
  [sym__jinja2] = "_jinja2",
  [sym_include_statement] = "include_statement",
  [sym_root_section] = "root_section",
  [sym_subsection_1] = "subsection_1",
  [sym_graph_section] = "graph_section",
  [sym_subsection_2] = "subsection_2",
  [sym_setting] = "setting",
  [sym_recurrence] = "recurrence",
  [sym_unquoted_graphstring] = "unquoted_graphstring",
  [sym_multiline_graphstring] = "multiline_graphstring",
  [sym_graph_task] = "graph_task",
  [sym_task_parameter] = "task_parameter",
  [sym_task_output] = "task_output",
  [sym_intercycle_annotation] = "intercycle_annotation",
  [sym_multiline_string] = "multiline_string",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_configuration_file_repeat1] = "configuration_file_repeat1",
  [aux_sym_root_section_repeat1] = "root_section_repeat1",
  [aux_sym_root_section_repeat2] = "root_section_repeat2",
  [aux_sym_subsection_1_repeat1] = "subsection_1_repeat1",
  [aux_sym_graph_section_repeat1] = "graph_section_repeat1",
  [aux_sym_unquoted_graphstring_repeat1] = "unquoted_graphstring_repeat1",
  [aux_sym_multiline_graphstring_repeat1] = "multiline_graphstring_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [alias_sym_multiline_string_close] = "multiline_string_close",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_jinja2_expression] = sym_jinja2_expression,
  [sym_jinja2_statement] = sym_jinja2_statement,
  [sym_jinja2_comment] = sym_jinja2_comment,
  [sym_cyclepoints] = sym_cyclepoints,
  [sym_graph_logical] = sym_graph_logical,
  [sym_graph_arrow] = sym_graph_arrow,
  [sym_comment] = sym_comment,
  [sym_nametag] = sym_nametag,
  [sym_key] = sym_key,
  [sym_boolean] = sym_boolean,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [sym__line_return] = sym__line_return,
  [aux_sym_datetime_token1] = aux_sym_datetime_token1,
  [anon_sym_PERCENTinclude] = anon_sym_PERCENTinclude,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_taskparameters] = sym_nametag,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_graph] = sym_nametag,
  [anon_sym_LBRACK_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
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
  [sym_configuration_file] = sym_configuration_file,
  [sym_number] = sym_number,
  [sym_datetime] = sym_datetime,
  [sym__jinja2] = sym__jinja2,
  [sym_include_statement] = sym_include_statement,
  [sym_root_section] = sym_root_section,
  [sym_subsection_1] = sym_subsection_1,
  [sym_graph_section] = sym_graph_section,
  [sym_subsection_2] = sym_subsection_2,
  [sym_setting] = sym_setting,
  [sym_recurrence] = sym_recurrence,
  [sym_unquoted_graphstring] = sym_unquoted_graphstring,
  [sym_multiline_graphstring] = sym_multiline_graphstring,
  [sym_graph_task] = sym_graph_task,
  [sym_task_parameter] = sym_task_parameter,
  [sym_task_output] = sym_task_output,
  [sym_intercycle_annotation] = sym_intercycle_annotation,
  [sym_multiline_string] = sym_multiline_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_configuration_file_repeat1] = aux_sym_configuration_file_repeat1,
  [aux_sym_root_section_repeat1] = aux_sym_root_section_repeat1,
  [aux_sym_root_section_repeat2] = aux_sym_root_section_repeat2,
  [aux_sym_subsection_1_repeat1] = aux_sym_subsection_1_repeat1,
  [aux_sym_graph_section_repeat1] = aux_sym_graph_section_repeat1,
  [aux_sym_unquoted_graphstring_repeat1] = aux_sym_unquoted_graphstring_repeat1,
  [aux_sym_multiline_graphstring_repeat1] = aux_sym_multiline_graphstring_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [alias_sym_multiline_string_close] = alias_sym_multiline_string_close,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_cyclepoints] = {
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
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line_return] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_datetime_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENTinclude] = {
    .visible = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = true,
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
  [sym_configuration_file] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym_root_section] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection_1] = {
    .visible = true,
    .named = true,
  },
  [sym_graph_section] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection_2] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_recurrence] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_graphstring] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_graphstring] = {
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
  [aux_sym_configuration_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_root_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_root_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subsection_1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graph_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_graphstring_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_graphstring_repeat1] = {
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
  [alias_sym_multiline_string_close] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_cyclepoints = 1,
  field_graph_string = 2,
  field_key = 3,
  field_name = 4,
  field_path = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_cyclepoints] = "cyclepoints",
  [field_graph_string] = "graph_string",
  [field_key] = "key",
  [field_name] = "name",
  [field_path] = "path",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [8] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_key, 0},
  [3] =
    {field_key, 0},
    {field_value, 2},
  [5] =
    {field_cyclepoints, 0},
    {field_graph_string, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [1] = alias_sym_multiline_string_close,
  },
  [6] = {
    [1] = aux_sym_multiline_string_token6,
  },
  [7] = {
    [1] = aux_sym_multiline_string_token6,
    [2] = alias_sym_multiline_string_close,
  },
  [9] = {
    [2] = alias_sym_multiline_string_close,
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
  [30] = 19,
  [31] = 31,
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
  [56] = 56,
  [57] = 57,
  [58] = 51,
  [59] = 59,
  [60] = 35,
  [61] = 53,
  [62] = 52,
  [63] = 63,
  [64] = 24,
  [65] = 21,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 66,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 68,
  [79] = 72,
  [80] = 80,
  [81] = 74,
  [82] = 75,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 87,
  [90] = 90,
  [91] = 91,
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
  [121] = 93,
  [122] = 109,
  [123] = 98,
  [124] = 115,
  [125] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(106);
      if (lookahead == '\r') SKIP(101);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(198);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(115);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 159,
        '\r', 7,
        '"', 24,
        '#', 122,
        '\'', 38,
        'F', 225,
        'T', 226,
        '{', 224,
        0x200b, 223,
        0x2060, 223,
        0xfeff, 223,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 160,
        '\r', 9,
        '#', 122,
        ':', 193,
        '<', 191,
        '=', 45,
        '?', 194,
        '[', 195,
        '{', 26,
        '&', 115,
        '|', 115,
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(115);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 161,
        '\r', 227,
        '#', 122,
        '{', 228,
        '\t', 227,
        0x0b, 227,
        '\f', 227,
        ' ', 227,
        0x200b, 227,
        0x2060, 227,
        0xfeff, 227,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'') ADVANCE(231);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '\r') SKIP(14);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(194);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(14);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 14:
      if (lookahead == '\r') SKIP(14);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(14);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 15:
      if (lookahead == '\r') ADVANCE(200);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(200);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 16:
      if (lookahead == '\r') SKIP(17);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == '{') ADVANCE(26);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 17:
      if (lookahead == '\r') SKIP(17);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == '{') ADVANCE(26);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 18:
      if (lookahead == '\r') SKIP(18);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(18);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 19:
      if (lookahead == '\r') SKIP(19);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(19);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(189);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '{') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(76);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '}') ADVANCE(215);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(100);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '}') ADVANCE(215);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == '1') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '3') ADVANCE(79);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(187);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(183);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '}') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 75:
      if (lookahead == '}') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == '}') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == '}') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == '}') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(42);
      END_STATE();
    case 81:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 82:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 83:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(217);
      END_STATE();
    case 101:
      if (eof) ADVANCE(106);
      if (lookahead == '\r') SKIP(101);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '[') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(115);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 102:
      if (eof) ADVANCE(106);
      if (lookahead == '\r') SKIP(103);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '[') ADVANCE(176);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 103:
      if (eof) ADVANCE(106);
      if (lookahead == '\r') SKIP(103);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '[') ADVANCE(176);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 104:
      if (eof) ADVANCE(106);
      if (lookahead == '\r') SKIP(105);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == ']') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(105);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(111);
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == '\r') SKIP(105);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(105);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_jinja2_expression);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_jinja2_statement);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_jinja2_comment);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_cyclepoints);
      ADVANCE_MAP(
        'a', 135,
        'm', 132,
        '!', 111,
        '$', 111,
        '(', 111,
        ')', 111,
        ',', 111,
        '/', 111,
        '^', 111,
      );
      if (lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_cyclepoints);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_cyclepoints);
      ADVANCE_MAP(
        'm', 132,
        'r', 142,
        '!', 111,
        '$', 111,
        '(', 111,
        ')', 111,
        ',', 111,
        '/', 111,
        '^', 111,
      );
      if (lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_cyclepoints);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_cyclepoints);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(111);
      if (lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_graph_logical);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_graph_arrow);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(121);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_key);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == '1') ADVANCE(153);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '3') ADVANCE(152);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(155);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0') ADVANCE(158);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0') ADVANCE(158);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'T') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line_return);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(223);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line_return);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '{') ADVANCE(26);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line_return);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '{') ADVANCE(26);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line_return);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '{') ADVANCE(26);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'Z') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'Z') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == ':') ADVANCE(92);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == 'Z') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == 'Z') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == 'Z') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == 'Z') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_PERCENTinclude);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PERCENTinclude);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_taskparameters);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '[') ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ']') ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_graph);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK_LBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_RBRACK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == '[') ADVANCE(182);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      if (lookahead == ']') ADVANCE(184);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\r') ADVANCE(200);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '{') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '{') ADVANCE(78);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_multiline_string_token2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_multiline_string_token2);
      if (lookahead == '\n') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_multiline_string_token3);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_multiline_string_token4);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_multiline_string_token5);
      if (lookahead == '\n') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\r') ADVANCE(207);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '{') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(207);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '%') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '}') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_multiline_string_token6);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '}') ADVANCE(215);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '\'') ADVANCE(190);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      ADVANCE_MAP(
        '\n', 159,
        '\r', 7,
        '#', 122,
        'F', 225,
        'T', 226,
        '{', 224,
        0x200b, 223,
        0x2060, 223,
        0xfeff, 223,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'') ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '{') ADVANCE(78);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      ADVANCE_MAP(
        '\r', 227,
        '{', 26,
        '\t', 227,
        0x0b, 227,
        '\f', 227,
        ' ', 227,
        0x200b, 227,
        0x2060, 227,
        0xfeff, 227,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(229);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '{') ADVANCE(31);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(231);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 102},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 102},
  [5] = {.lex_state = 102},
  [6] = {.lex_state = 102},
  [7] = {.lex_state = 102},
  [8] = {.lex_state = 102},
  [9] = {.lex_state = 102},
  [10] = {.lex_state = 102},
  [11] = {.lex_state = 102},
  [12] = {.lex_state = 102},
  [13] = {.lex_state = 102},
  [14] = {.lex_state = 102},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 102},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 102},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 102},
  [27] = {.lex_state = 102},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 102},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 102},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 104},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 104},
  [39] = {.lex_state = 102},
  [40] = {.lex_state = 102},
  [41] = {.lex_state = 102},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 102},
  [44] = {.lex_state = 102},
  [45] = {.lex_state = 102},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 104},
  [48] = {.lex_state = 102},
  [49] = {.lex_state = 102},
  [50] = {.lex_state = 102},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 102},
  [55] = {.lex_state = 102},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 102},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 102},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 102},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 104},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 102},
  [85] = {.lex_state = 102},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 102},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 104},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 102},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 102},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 207},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 104},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 102},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 104},
  [124] = {.lex_state = 104},
  [125] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_jinja2_expression] = ACTIONS(3),
    [sym_jinja2_statement] = ACTIONS(3),
    [sym_jinja2_comment] = ACTIONS(3),
    [sym_cyclepoints] = ACTIONS(1),
    [sym_graph_logical] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_nametag] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_PERCENTinclude] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_taskparameters] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_graph] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_configuration_file] = STATE(97),
    [sym_include_statement] = STATE(54),
    [sym_root_section] = STATE(54),
    [aux_sym_configuration_file_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_jinja2_expression] = ACTIONS(3),
    [sym_jinja2_statement] = ACTIONS(3),
    [sym_jinja2_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinclude] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(15), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      sym__line_return,
    ACTIONS(19), 1,
      aux_sym_datetime_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(13), 2,
      sym_boolean,
      sym_quoted_string,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    STATE(110), 4,
      sym_number,
      sym_datetime,
      sym_multiline_string,
      sym_unquoted_string,
  [35] = 8,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK2,
    STATE(19), 1,
      sym_task_parameter,
    STATE(35), 1,
      sym_intercycle_annotation,
    STATE(68), 1,
      sym_task_output,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(27), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [67] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(39), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(50), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [96] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(10), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(46), 3,
      sym_subsection_1,
      sym_graph_section,
      aux_sym_root_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [125] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(51), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(4), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(45), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [154] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(12), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(49), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [183] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(59), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(9), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(42), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [212] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(49), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [241] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(47), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(20), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(39), 3,
      sym_subsection_1,
      sym_graph_section,
      aux_sym_root_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [270] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(39), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(13), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(50), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [299] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(67), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(41), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [328] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(71), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(40), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [357] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(47), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(20), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(37), 3,
      sym_subsection_1,
      sym_graph_section,
      aux_sym_root_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [386] = 8,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(83), 1,
      anon_sym_LBRACK2,
    STATE(30), 1,
      sym_task_parameter,
    STATE(60), 1,
      sym_intercycle_annotation,
    STATE(78), 1,
      sym_task_output,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(77), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [417] = 7,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(47), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(14), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(44), 3,
      sym_subsection_1,
      sym_graph_section,
      aux_sym_root_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [446] = 7,
    ACTIONS(91), 1,
      sym_nametag,
    ACTIONS(93), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(58), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    STATE(105), 2,
      sym_unquoted_graphstring,
      sym_multiline_graphstring,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [474] = 6,
    ACTIONS(100), 1,
      sym_nametag,
    ACTIONS(97), 2,
      sym_graph_logical,
      sym_graph_arrow,
    ACTIONS(103), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(18), 2,
      sym_unquoted_graphstring,
      aux_sym_multiline_graphstring_repeat1,
    STATE(51), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [500] = 6,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK2,
    STATE(53), 1,
      sym_intercycle_annotation,
    STATE(72), 1,
      sym_task_output,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(105), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [526] = 5,
    ACTIONS(109), 1,
      sym_key,
    ACTIONS(112), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
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
    ACTIONS(114), 8,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [566] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(25), 1,
      aux_sym_multiline_string_repeat1,
    STATE(56), 1,
      sym__jinja2,
    ACTIONS(116), 8,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_multiline_string_token1,
      aux_sym_multiline_string_token2,
      aux_sym_multiline_string_token3,
      aux_sym_multiline_string_token4,
      aux_sym_multiline_string_token5,
  [589] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(23), 1,
      aux_sym_multiline_string_repeat1,
    STATE(56), 1,
      sym__jinja2,
    ACTIONS(120), 8,
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
    ACTIONS(125), 8,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [629] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(23), 1,
      aux_sym_multiline_string_repeat1,
    STATE(56), 1,
      sym__jinja2,
    ACTIONS(116), 8,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_multiline_string_token1,
      aux_sym_multiline_string_token2,
      aux_sym_multiline_string_token3,
      aux_sym_multiline_string_token4,
      aux_sym_multiline_string_token5,
  [652] = 5,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(131), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [675] = 5,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(135), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(29), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [698] = 6,
    ACTIONS(139), 1,
      sym_nametag,
    ACTIONS(141), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(137), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(32), 2,
      sym_unquoted_graphstring,
      aux_sym_multiline_graphstring_repeat1,
    STATE(51), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [723] = 5,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(145), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(20), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [746] = 6,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(83), 1,
      anon_sym_LBRACK2,
    STATE(61), 1,
      sym_intercycle_annotation,
    STATE(79), 1,
      sym_task_output,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(147), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [771] = 6,
    ACTIONS(139), 1,
      sym_nametag,
    ACTIONS(149), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(137), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(18), 2,
      sym_unquoted_graphstring,
      aux_sym_multiline_graphstring_repeat1,
    STATE(51), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [796] = 6,
    ACTIONS(139), 1,
      sym_nametag,
    ACTIONS(149), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(137), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(18), 2,
      sym_unquoted_graphstring,
      aux_sym_multiline_graphstring_repeat1,
    STATE(51), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [821] = 6,
    ACTIONS(139), 1,
      sym_nametag,
    ACTIONS(141), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(137), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(31), 2,
      sym_unquoted_graphstring,
      aux_sym_multiline_graphstring_repeat1,
    STATE(51), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [846] = 5,
    ACTIONS(37), 1,
      sym_key,
    ACTIONS(153), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(26), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [869] = 4,
    ACTIONS(31), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym_task_output,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(105), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [889] = 5,
    ACTIONS(157), 1,
      sym_cyclepoints,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(36), 2,
      sym_recurrence,
      aux_sym_graph_section_repeat1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [911] = 5,
    ACTIONS(47), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(43), 3,
      sym_subsection_1,
      sym_graph_section,
      aux_sym_root_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [933] = 5,
    ACTIONS(168), 1,
      sym_cyclepoints,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    STATE(47), 2,
      sym_recurrence,
      aux_sym_graph_section_repeat1,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [955] = 5,
    ACTIONS(47), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(43), 3,
      sym_subsection_1,
      sym_graph_section,
      aux_sym_root_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [977] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(178), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(48), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [999] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(182), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(48), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1021] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(48), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1043] = 5,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(43), 3,
      sym_subsection_1,
      sym_graph_section,
      aux_sym_root_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1065] = 5,
    ACTIONS(47), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(43), 3,
      sym_subsection_1,
      sym_graph_section,
      aux_sym_root_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1087] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(39), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(48), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1109] = 5,
    ACTIONS(47), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(43), 3,
      sym_subsection_1,
      sym_graph_section,
      aux_sym_root_section_repeat2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1131] = 5,
    ACTIONS(168), 1,
      sym_cyclepoints,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    STATE(36), 2,
      sym_recurrence,
      aux_sym_graph_section_repeat1,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1153] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(197), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(48), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1175] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(67), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(48), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1197] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(71), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(48), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1219] = 3,
    STATE(52), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(202), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1237] = 5,
    ACTIONS(207), 1,
      sym_nametag,
    ACTIONS(204), 2,
      sym_graph_logical,
      sym_graph_arrow,
    ACTIONS(210), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(52), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1259] = 4,
    ACTIONS(31), 1,
      anon_sym_COLON,
    STATE(75), 1,
      sym_task_output,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(212), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1279] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(55), 3,
      sym_include_statement,
      sym_root_section,
      aux_sym_configuration_file_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1300] = 5,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    STATE(55), 3,
      sym_include_statement,
      sym_root_section,
      aux_sym_configuration_file_repeat1,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1321] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(224), 9,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_multiline_string_token1,
      aux_sym_multiline_string_token2,
      aux_sym_multiline_string_token3,
      aux_sym_multiline_string_token4,
      aux_sym_multiline_string_token5,
  [1336] = 3,
    ACTIONS(228), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK_LBRACK,
  [1353] = 5,
    ACTIONS(232), 1,
      sym_nametag,
    ACTIONS(234), 1,
      sym__line_return,
    ACTIONS(230), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(62), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1374] = 3,
    ACTIONS(238), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK_LBRACK,
  [1391] = 4,
    ACTIONS(81), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym_task_output,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(147), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1410] = 4,
    ACTIONS(81), 1,
      anon_sym_COLON,
    STATE(82), 1,
      sym_task_output,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(240), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1429] = 5,
    ACTIONS(245), 1,
      sym_nametag,
    ACTIONS(248), 1,
      sym__line_return,
    ACTIONS(242), 2,
      sym_graph_logical,
      sym_graph_arrow,
    STATE(62), 2,
      sym_graph_task,
      aux_sym_unquoted_graphstring_repeat1,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1450] = 3,
    ACTIONS(252), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(250), 4,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK_LBRACK,
  [1467] = 3,
    ACTIONS(125), 2,
      anon_sym_COLON,
      anon_sym_LBRACK2,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(254), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1484] = 3,
    ACTIONS(114), 2,
      anon_sym_COLON,
      anon_sym_LBRACK2,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(256), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1501] = 3,
    ACTIONS(260), 1,
      anon_sym_QMARK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(258), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1518] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(262), 6,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_COLON,
  [1533] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(105), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1547] = 3,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(264), 4,
      ts_builtin_sym_end,
      sym_cyclepoints,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK_LBRACK,
  [1563] = 3,
    ACTIONS(270), 1,
      anon_sym_QMARK,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(268), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1579] = 3,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(272), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1595] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(212), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1609] = 6,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      sym_nametag,
    ACTIONS(276), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(278), 1,
      anon_sym_graph,
    STATE(91), 1,
      sym_task_parameter,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1631] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(280), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1645] = 2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(282), 5,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1659] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__line_return,
    STATE(80), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__jinja2,
    ACTIONS(284), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_unquoted_string_token2,
  [1678] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym__line_return,
    STATE(76), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__jinja2,
    ACTIONS(284), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_unquoted_string_token2,
  [1697] = 2,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(147), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1710] = 2,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(240), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1723] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__line_return,
    STATE(80), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__jinja2,
    ACTIONS(290), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      aux_sym_unquoted_string_token2,
  [1742] = 2,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(295), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1755] = 2,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
    ACTIONS(297), 4,
      sym_graph_logical,
      sym_graph_arrow,
      sym_nametag,
      sym__line_return,
  [1768] = 4,
    ACTIONS(299), 1,
      sym_nametag,
    ACTIONS(301), 1,
      anon_sym_taskparameters,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1784] = 4,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(305), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(102), 1,
      sym_task_parameter,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1800] = 2,
    ACTIONS(307), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1812] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(309), 5,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym__line_return,
      aux_sym_unquoted_string_token2,
  [1823] = 3,
    ACTIONS(311), 1,
      sym_nametag,
    ACTIONS(313), 1,
      anon_sym_GT,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1836] = 3,
    ACTIONS(315), 1,
      sym_nametag,
    ACTIONS(317), 1,
      anon_sym_RBRACK_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1849] = 3,
    ACTIONS(319), 1,
      sym_nametag,
    ACTIONS(321), 1,
      anon_sym_GT,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1862] = 3,
    ACTIONS(323), 1,
      sym__line_return,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1875] = 2,
    ACTIONS(327), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1885] = 2,
    ACTIONS(329), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1895] = 2,
    ACTIONS(331), 1,
      anon_sym_GT,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1905] = 2,
    ACTIONS(333), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1915] = 2,
    ACTIONS(335), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1925] = 2,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1935] = 2,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1945] = 2,
    ACTIONS(341), 1,
      anon_sym_RBRACK2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1955] = 2,
    ACTIONS(343), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1965] = 2,
    ACTIONS(345), 1,
      sym_quoted_string,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1975] = 2,
    ACTIONS(347), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1985] = 2,
    ACTIONS(349), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [1995] = 2,
    ACTIONS(351), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2005] = 2,
    ACTIONS(353), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2015] = 2,
    ACTIONS(355), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2025] = 2,
    ACTIONS(357), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2035] = 2,
    ACTIONS(359), 1,
      aux_sym_multiline_string_token6,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2045] = 2,
    ACTIONS(361), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2055] = 2,
    ACTIONS(363), 1,
      sym_nametag,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2065] = 2,
    ACTIONS(365), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2075] = 2,
    ACTIONS(367), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2085] = 2,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2095] = 2,
    ACTIONS(371), 1,
      anon_sym_RBRACK_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2105] = 2,
    ACTIONS(373), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2115] = 2,
    ACTIONS(375), 1,
      sym_cyclepoints,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2125] = 2,
    ACTIONS(377), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2135] = 2,
    ACTIONS(379), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2145] = 2,
    ACTIONS(381), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2155] = 2,
    ACTIONS(383), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2165] = 2,
    ACTIONS(385), 1,
      sym__line_return,
    ACTIONS(11), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2175] = 2,
    ACTIONS(387), 1,
      anon_sym_GT,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2185] = 2,
    ACTIONS(389), 1,
      sym_nametag,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2195] = 2,
    ACTIONS(391), 1,
      anon_sym_RBRACK2,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2205] = 2,
    ACTIONS(393), 1,
      sym_cyclepoints,
    ACTIONS(3), 4,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
      sym_comment,
  [2215] = 2,
    ACTIONS(395), 1,
      sym__line_return,
    ACTIONS(11), 4,
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
  [SMALL_STATE(30)] = 746,
  [SMALL_STATE(31)] = 771,
  [SMALL_STATE(32)] = 796,
  [SMALL_STATE(33)] = 821,
  [SMALL_STATE(34)] = 846,
  [SMALL_STATE(35)] = 869,
  [SMALL_STATE(36)] = 889,
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
  [SMALL_STATE(52)] = 1237,
  [SMALL_STATE(53)] = 1259,
  [SMALL_STATE(54)] = 1279,
  [SMALL_STATE(55)] = 1300,
  [SMALL_STATE(56)] = 1321,
  [SMALL_STATE(57)] = 1336,
  [SMALL_STATE(58)] = 1353,
  [SMALL_STATE(59)] = 1374,
  [SMALL_STATE(60)] = 1391,
  [SMALL_STATE(61)] = 1410,
  [SMALL_STATE(62)] = 1429,
  [SMALL_STATE(63)] = 1450,
  [SMALL_STATE(64)] = 1467,
  [SMALL_STATE(65)] = 1484,
  [SMALL_STATE(66)] = 1501,
  [SMALL_STATE(67)] = 1518,
  [SMALL_STATE(68)] = 1533,
  [SMALL_STATE(69)] = 1547,
  [SMALL_STATE(70)] = 1563,
  [SMALL_STATE(71)] = 1579,
  [SMALL_STATE(72)] = 1595,
  [SMALL_STATE(73)] = 1609,
  [SMALL_STATE(74)] = 1631,
  [SMALL_STATE(75)] = 1645,
  [SMALL_STATE(76)] = 1659,
  [SMALL_STATE(77)] = 1678,
  [SMALL_STATE(78)] = 1697,
  [SMALL_STATE(79)] = 1710,
  [SMALL_STATE(80)] = 1723,
  [SMALL_STATE(81)] = 1742,
  [SMALL_STATE(82)] = 1755,
  [SMALL_STATE(83)] = 1768,
  [SMALL_STATE(84)] = 1784,
  [SMALL_STATE(85)] = 1800,
  [SMALL_STATE(86)] = 1812,
  [SMALL_STATE(87)] = 1823,
  [SMALL_STATE(88)] = 1836,
  [SMALL_STATE(89)] = 1849,
  [SMALL_STATE(90)] = 1862,
  [SMALL_STATE(91)] = 1875,
  [SMALL_STATE(92)] = 1885,
  [SMALL_STATE(93)] = 1895,
  [SMALL_STATE(94)] = 1905,
  [SMALL_STATE(95)] = 1915,
  [SMALL_STATE(96)] = 1925,
  [SMALL_STATE(97)] = 1935,
  [SMALL_STATE(98)] = 1945,
  [SMALL_STATE(99)] = 1955,
  [SMALL_STATE(100)] = 1965,
  [SMALL_STATE(101)] = 1975,
  [SMALL_STATE(102)] = 1985,
  [SMALL_STATE(103)] = 1995,
  [SMALL_STATE(104)] = 2005,
  [SMALL_STATE(105)] = 2015,
  [SMALL_STATE(106)] = 2025,
  [SMALL_STATE(107)] = 2035,
  [SMALL_STATE(108)] = 2045,
  [SMALL_STATE(109)] = 2055,
  [SMALL_STATE(110)] = 2065,
  [SMALL_STATE(111)] = 2075,
  [SMALL_STATE(112)] = 2085,
  [SMALL_STATE(113)] = 2095,
  [SMALL_STATE(114)] = 2105,
  [SMALL_STATE(115)] = 2115,
  [SMALL_STATE(116)] = 2125,
  [SMALL_STATE(117)] = 2135,
  [SMALL_STATE(118)] = 2145,
  [SMALL_STATE(119)] = 2155,
  [SMALL_STATE(120)] = 2165,
  [SMALL_STATE(121)] = 2175,
  [SMALL_STATE(122)] = 2185,
  [SMALL_STATE(123)] = 2195,
  [SMALL_STATE(124)] = 2205,
  [SMALL_STATE(125)] = 2215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_task, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 5, 0, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 5, 0, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 4, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 4, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 6, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 6, 0, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 5, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 5, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_task, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 4, 0, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 4, 0, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_graphstring_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_graphstring_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_graphstring_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_task, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_parameter, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_parameter, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_2, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_2, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_2, 4, 0, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_2, 4, 0, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_2, 5, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_2, 5, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_task, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_2, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_2, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_graph_section_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_graph_section_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_graph_section_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 6, 0, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 6, 0, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_section, 4, 0, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_section, 4, 0, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 5, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 7, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 7, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 6, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 6, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_section_repeat2, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_section_repeat2, 2, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_section_repeat2, 2, 0, 0), SHIFT_REPEAT(73),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_section, 5, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_section, 5, 0, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_1_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_1_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_1_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_graphstring, 1, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_graphstring_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_graphstring_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_graphstring_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_task, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_file, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_file_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_graphstring, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_task, 3, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_graphstring_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_graphstring_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_graphstring_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4, 0, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4, 0, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_parameter, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_parameter, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_output, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intercycle_annotation, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recurrence, 4, 0, 8),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recurrence, 4, 0, 8),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_output, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intercycle_annotation, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_output, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_task, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 2, 0, 6),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_output, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_task, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_graphstring, 2, 0, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [339] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2, 0, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_graphstring, 3, 0, 9),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 7),
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
