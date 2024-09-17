#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_LBRACK_LBRACK = 3,
  anon_sym_RBRACK_RBRACK = 4,
  anon_sym_graph = 5,
  anon_sym_LBRACK_LBRACK_LBRACK = 6,
  anon_sym_RBRACK_RBRACK_RBRACK = 7,
  anon_sym_EQ = 8,
  anon_sym_LF = 9,
  sym_multiline_string = 10,
  sym_quoted_string = 11,
  sym_number = 12,
  anon_sym_POUND = 13,
  aux_sym_comment_token1 = 14,
  aux_sym_unquoted_string_token1 = 15,
  sym_nametag = 16,
  sym_key = 17,
  sym_cyclepoints = 18,
  sym_boolean = 19,
  anon_sym_PERCENTinclude = 20,
  sym_jinja2_expression = 21,
  sym_jinja2_statement = 22,
  sym_jinja2_comment = 23,
  sym_configuration_file = 24,
  sym_root_section = 25,
  sym_subsection_1 = 26,
  sym_graph_section = 27,
  sym_subsection_2 = 28,
  sym_setting = 29,
  sym_recurrence = 30,
  sym_comment = 31,
  sym_unquoted_string = 32,
  sym_include_statement = 33,
  aux_sym_configuration_file_repeat1 = 34,
  aux_sym_root_section_repeat1 = 35,
  aux_sym_root_section_repeat2 = 36,
  aux_sym_subsection_1_repeat1 = 37,
  aux_sym_graph_section_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_graph] = "graph",
  [anon_sym_LBRACK_LBRACK_LBRACK] = "[[[",
  [anon_sym_RBRACK_RBRACK_RBRACK] = "]]]",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [sym_multiline_string] = "multiline_string",
  [sym_quoted_string] = "quoted_string",
  [sym_number] = "number",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [sym_nametag] = "nametag",
  [sym_key] = "key",
  [sym_cyclepoints] = "cyclepoints",
  [sym_boolean] = "boolean",
  [anon_sym_PERCENTinclude] = "%include",
  [sym_jinja2_expression] = "jinja2_expression",
  [sym_jinja2_statement] = "jinja2_statement",
  [sym_jinja2_comment] = "jinja2_comment",
  [sym_configuration_file] = "configuration_file",
  [sym_root_section] = "root_section",
  [sym_subsection_1] = "subsection_1",
  [sym_graph_section] = "graph_section",
  [sym_subsection_2] = "subsection_2",
  [sym_setting] = "setting",
  [sym_recurrence] = "recurrence",
  [sym_comment] = "comment",
  [sym_unquoted_string] = "unquoted_string",
  [sym_include_statement] = "include_statement",
  [aux_sym_configuration_file_repeat1] = "configuration_file_repeat1",
  [aux_sym_root_section_repeat1] = "root_section_repeat1",
  [aux_sym_root_section_repeat2] = "root_section_repeat2",
  [aux_sym_subsection_1_repeat1] = "subsection_1_repeat1",
  [aux_sym_graph_section_repeat1] = "graph_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_graph] = anon_sym_graph,
  [anon_sym_LBRACK_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [sym_multiline_string] = sym_multiline_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_number] = sym_number,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [sym_nametag] = sym_nametag,
  [sym_key] = sym_key,
  [sym_cyclepoints] = sym_cyclepoints,
  [sym_boolean] = sym_boolean,
  [anon_sym_PERCENTinclude] = anon_sym_PERCENTinclude,
  [sym_jinja2_expression] = sym_jinja2_expression,
  [sym_jinja2_statement] = sym_jinja2_statement,
  [sym_jinja2_comment] = sym_jinja2_comment,
  [sym_configuration_file] = sym_configuration_file,
  [sym_root_section] = sym_root_section,
  [sym_subsection_1] = sym_subsection_1,
  [sym_graph_section] = sym_graph_section,
  [sym_subsection_2] = sym_subsection_2,
  [sym_setting] = sym_setting,
  [sym_recurrence] = sym_recurrence,
  [sym_comment] = sym_comment,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_include_statement] = sym_include_statement,
  [aux_sym_configuration_file_repeat1] = aux_sym_configuration_file_repeat1,
  [aux_sym_root_section_repeat1] = aux_sym_root_section_repeat1,
  [aux_sym_root_section_repeat2] = aux_sym_root_section_repeat2,
  [aux_sym_subsection_1_repeat1] = aux_sym_subsection_1_repeat1,
  [aux_sym_graph_section_repeat1] = aux_sym_graph_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
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
    .named = false,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_nametag] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_cyclepoints] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTinclude] = {
    .visible = true,
    .named = false,
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
  [sym_configuration_file] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
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
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
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
  [6] =
    {field_cyclepoints, 0},
    {field_graph_string, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
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
  [29] = 25,
  [30] = 30,
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
  [45] = 39,
  [46] = 46,
  [47] = 47,
};

static TSCharacterRange sym_cyclepoints_character_set_1[] = {
  {'!', '!'}, {'$', '$'}, {'(', ')'}, {'+', '+'}, {'-', '-'}, {'/', '9'}, {'A', 'Z'}, {'^', '_'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      ADVANCE_MAP(
        '"', 1,
        '#', 71,
        '%', 109,
        '\'', 13,
        '=', 63,
        '@', 122,
        'F', 100,
        'T', 115,
        '[', 46,
        ']', 51,
        'g', 117,
        '{', 9,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(116);
      if (lookahead == '{') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '{') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '{') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(31);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == ']') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == ']') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(135);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(134);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(133);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 34:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 35:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 40:
      if (eof) ADVANCE(45);
      ADVANCE_MAP(
        '\n', 64,
        '"', 1,
        '#', 71,
        '%', 26,
        '\'', 13,
        'F', 123,
        'T', 124,
        '[', 47,
        '{', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 41:
      if (eof) ADVANCE(45);
      ADVANCE_MAP(
        '\n', 64,
        '"', 1,
        '#', 71,
        '%', 26,
        '\'', 13,
        'F', 123,
        'T', 124,
        '[', 48,
        '{', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 42:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '{') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (set_contains(sym_cyclepoints_character_set_1, 9, lookahead)) ADVANCE(128);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 43:
      if (eof) ADVANCE(45);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '{') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '{') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (set_contains(sym_cyclepoints_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '[') ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ']') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_graph);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_graph);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead == '{') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '{') ADVANCE(10);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_multiline_string);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == 's') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(12);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(33);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (set_contains(sym_cyclepoints_character_set_1, 9, lookahead)) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        'a', 110,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        'a', 113,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        'e', 129,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        'h', 58,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        'l', 118,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        'p', 107,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        'r', 119,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        'r', 101,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        's', 105,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_nametag);
      ADVANCE_MAP(
        'u', 105,
        '%', 122,
        '@', 122,
        '!', 127,
        '$', 127,
        '(', 127,
        ')', 127,
        '/', 127,
        '^', 127,
      );
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_nametag);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_key);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_cyclepoints);
      if (set_contains(sym_cyclepoints_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_cyclepoints);
      if (set_contains(sym_cyclepoints_character_set_1, 9, lookahead)) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(99);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PERCENTinclude);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PERCENTinclude);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PERCENTinclude);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(99);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_jinja2_expression);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_jinja2_statement);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_jinja2_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 44},
  [21] = {.lex_state = 44},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 44},
  [28] = {.lex_state = 44},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 44},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 44},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_graph] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_multiline_string] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_nametag] = ACTIONS(1),
    [sym_cyclepoints] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [anon_sym_PERCENTinclude] = ACTIONS(1),
    [sym_jinja2_expression] = ACTIONS(5),
    [sym_jinja2_statement] = ACTIONS(5),
    [sym_jinja2_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_configuration_file] = STATE(46),
    [sym_root_section] = STATE(32),
    [sym_comment] = STATE(1),
    [sym_include_statement] = STATE(32),
    [aux_sym_configuration_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_PERCENTinclude] = ACTIONS(11),
    [sym_jinja2_expression] = ACTIONS(5),
    [sym_jinja2_statement] = ACTIONS(5),
    [sym_jinja2_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      aux_sym_unquoted_string_token1,
    STATE(2), 1,
      sym_comment,
    STATE(24), 1,
      sym_unquoted_string,
    ACTIONS(23), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(15), 5,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK_LBRACK_LBRACK,
      sym_key,
      anon_sym_PERCENTinclude,
    ACTIONS(17), 5,
      anon_sym_LF,
      sym_multiline_string,
      sym_quoted_string,
      sym_number,
      sym_boolean,
  [35] = 8,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      aux_sym_unquoted_string_token1,
    STATE(3), 1,
      sym_comment,
    STATE(24), 1,
      sym_unquoted_string,
    ACTIONS(23), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(15), 4,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
      sym_key,
      anon_sym_PERCENTinclude,
    ACTIONS(17), 5,
      anon_sym_LF,
      sym_multiline_string,
      sym_quoted_string,
      sym_number,
      sym_boolean,
  [69] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(31), 1,
      sym_key,
    STATE(4), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_root_section_repeat1,
    STATE(16), 1,
      aux_sym_root_section_repeat2,
    STATE(23), 1,
      sym_setting,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(31), 2,
      sym_subsection_1,
      sym_graph_section,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [107] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(39), 1,
      sym_key,
    STATE(5), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_root_section_repeat1,
    STATE(19), 1,
      aux_sym_subsection_1_repeat1,
    STATE(23), 1,
      sym_setting,
    STATE(30), 1,
      sym_subsection_2,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(35), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [145] = 8,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_unquoted_string_token1,
    STATE(6), 1,
      sym_comment,
    STATE(28), 1,
      sym_unquoted_string,
    ACTIONS(23), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(45), 3,
      anon_sym_LF,
      sym_multiline_string,
      sym_quoted_string,
    ACTIONS(43), 4,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
      sym_cyclepoints,
      anon_sym_PERCENTinclude,
  [177] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(31), 1,
      sym_key,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      aux_sym_root_section_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_root_section_repeat2,
    STATE(23), 1,
      sym_setting,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(31), 2,
      sym_subsection_1,
      sym_graph_section,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [215] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(39), 1,
      sym_key,
    STATE(5), 1,
      aux_sym_root_section_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_subsection_1_repeat1,
    STATE(23), 1,
      sym_setting,
    STATE(30), 1,
      sym_subsection_2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [253] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_key,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_root_section_repeat1,
    STATE(23), 1,
      sym_setting,
    ACTIONS(59), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      anon_sym_PERCENTinclude,
  [283] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      sym_key,
    STATE(23), 1,
      sym_setting,
    ACTIONS(63), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(10), 2,
      sym_comment,
      aux_sym_root_section_repeat1,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      anon_sym_PERCENTinclude,
  [311] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_key,
    STATE(10), 1,
      aux_sym_root_section_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(23), 1,
      sym_setting,
    ACTIONS(70), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      anon_sym_PERCENTinclude,
  [341] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 1,
      sym_key,
    STATE(23), 1,
      sym_setting,
    STATE(12), 2,
      sym_comment,
      aux_sym_root_section_repeat1,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
      anon_sym_PERCENTinclude,
  [368] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(13), 2,
      sym_comment,
      aux_sym_root_section_repeat2,
    STATE(31), 2,
      sym_subsection_1,
      sym_graph_section,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [395] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(13), 1,
      aux_sym_root_section_repeat2,
    STATE(14), 1,
      sym_comment,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(31), 2,
      sym_subsection_1,
      sym_graph_section,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [424] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 1,
      sym_cyclepoints,
    STATE(15), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_graph_section_repeat1,
    STATE(27), 1,
      sym_recurrence,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
      anon_sym_PERCENTinclude,
  [453] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym_root_section_repeat2,
    STATE(16), 1,
      sym_comment,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    STATE(31), 2,
      sym_subsection_1,
      sym_graph_section,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [482] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_subsection_1_repeat1,
    STATE(30), 1,
      sym_subsection_2,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(35), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [511] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(96), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    STATE(30), 1,
      sym_subsection_2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(94), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(18), 2,
      sym_comment,
      aux_sym_subsection_1_repeat1,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [538] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    STATE(18), 1,
      aux_sym_subsection_1_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(30), 1,
      sym_subsection_2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
    ACTIONS(101), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [567] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      sym_cyclepoints,
    STATE(27), 1,
      sym_recurrence,
    STATE(20), 2,
      sym_comment,
      aux_sym_graph_section_repeat1,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
      anon_sym_PERCENTinclude,
  [594] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      sym_cyclepoints,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      aux_sym_graph_section_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(27), 1,
      sym_recurrence,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
      anon_sym_PERCENTinclude,
  [623] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_PERCENTinclude,
    STATE(22), 2,
      sym_comment,
      aux_sym_configuration_file_repeat1,
    STATE(32), 2,
      sym_root_section,
      sym_include_statement,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [649] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      sym_key,
      anon_sym_PERCENTinclude,
  [671] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      sym_key,
      anon_sym_PERCENTinclude,
  [693] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      sym_key,
      anon_sym_PERCENTinclude,
  [715] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      aux_sym_configuration_file_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(32), 2,
      sym_root_section,
      sym_include_statement,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [743] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
      sym_cyclepoints,
      anon_sym_PERCENTinclude,
  [764] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
      sym_cyclepoints,
      anon_sym_PERCENTinclude,
  [785] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
      sym_cyclepoints,
      anon_sym_PERCENTinclude,
  [806] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      anon_sym_PERCENTinclude,
  [827] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
      anon_sym_PERCENTinclude,
  [847] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PERCENTinclude,
  [864] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PERCENTinclude,
  [881] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      anon_sym_graph,
    ACTIONS(158), 1,
      sym_nametag,
    STATE(34), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [899] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      anon_sym_RBRACK_RBRACK_RBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [914] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [929] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      sym_quoted_string,
    STATE(37), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      anon_sym_EQ,
    STATE(38), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [959] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_EQ,
    STATE(39), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [974] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      sym_nametag,
    STATE(40), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [989] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      sym_nametag,
    STATE(41), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [1004] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [1019] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(23), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [1034] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [1049] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(180), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [1064] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_comment,
    ACTIONS(5), 3,
      sym_jinja2_expression,
      sym_jinja2_statement,
      sym_jinja2_comment,
  [1079] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 215,
  [SMALL_STATE(9)] = 253,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 341,
  [SMALL_STATE(13)] = 368,
  [SMALL_STATE(14)] = 395,
  [SMALL_STATE(15)] = 424,
  [SMALL_STATE(16)] = 453,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 511,
  [SMALL_STATE(19)] = 538,
  [SMALL_STATE(20)] = 567,
  [SMALL_STATE(21)] = 594,
  [SMALL_STATE(22)] = 623,
  [SMALL_STATE(23)] = 649,
  [SMALL_STATE(24)] = 671,
  [SMALL_STATE(25)] = 693,
  [SMALL_STATE(26)] = 715,
  [SMALL_STATE(27)] = 743,
  [SMALL_STATE(28)] = 764,
  [SMALL_STATE(29)] = 785,
  [SMALL_STATE(30)] = 806,
  [SMALL_STATE(31)] = 827,
  [SMALL_STATE(32)] = 847,
  [SMALL_STATE(33)] = 864,
  [SMALL_STATE(34)] = 881,
  [SMALL_STATE(35)] = 899,
  [SMALL_STATE(36)] = 914,
  [SMALL_STATE(37)] = 929,
  [SMALL_STATE(38)] = 944,
  [SMALL_STATE(39)] = 959,
  [SMALL_STATE(40)] = 974,
  [SMALL_STATE(41)] = 989,
  [SMALL_STATE(42)] = 1004,
  [SMALL_STATE(43)] = 1019,
  [SMALL_STATE(44)] = 1034,
  [SMALL_STATE(45)] = 1049,
  [SMALL_STATE(46)] = 1064,
  [SMALL_STATE(47)] = 1079,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 4, 0, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 4, 0, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 4, 0, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 4, 0, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recurrence, 2, 0, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recurrence, 2, 0, 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 3, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 3, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 3, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 3, 0, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_2, 3, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_2, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_2, 4, 0, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_2, 4, 0, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_section_repeat2, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_section_repeat2, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_section_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_section, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_section, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 5, 0, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 5, 0, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_1_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_1_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_1_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 5, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 5, 0, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_graph_section_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_graph_section_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_graph_section_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_section, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_section, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_file_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_section_repeat1, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_section_repeat1, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_file, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_graph_section_repeat1, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_graph_section_repeat1, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recurrence, 3, 0, 6),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recurrence, 3, 0, 6),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_1_repeat1, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_1_repeat1, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_section_repeat2, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_section_repeat2, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_file_repeat1, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
