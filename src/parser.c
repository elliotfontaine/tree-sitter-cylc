#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_LBRACK_LBRACK = 3,
  anon_sym_RBRACK_RBRACK = 4,
  anon_sym_LBRACK_LBRACK_LBRACK = 5,
  anon_sym_RBRACK_RBRACK_RBRACK = 6,
  anon_sym_EQ = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_quoted_string_token1 = 9,
  aux_sym_quoted_string_token2 = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_quoted_string_token3 = 12,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 13,
  aux_sym_multiline_string_token1 = 14,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 15,
  aux_sym_multiline_string_token2 = 16,
  sym_string = 17,
  sym_number = 18,
  sym_comment = 19,
  sym_configuration_file = 20,
  sym_root_section = 21,
  sym_subsection_1 = 22,
  sym_subsection_2 = 23,
  sym_setting = 24,
  sym_quoted_string = 25,
  sym_multiline_string = 26,
  aux_sym_configuration_file_repeat1 = 27,
  aux_sym_root_section_repeat1 = 28,
  aux_sym_root_section_repeat2 = 29,
  aux_sym_subsection_1_repeat1 = 30,
  aux_sym_quoted_string_repeat1 = 31,
  aux_sym_quoted_string_repeat2 = 32,
  aux_sym_multiline_string_repeat1 = 33,
  aux_sym_multiline_string_repeat2 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK_LBRACK_LBRACK] = "[[[",
  [anon_sym_RBRACK_RBRACK_RBRACK] = "]]]",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [aux_sym_quoted_string_token2] = "quoted_string_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_string_token3] = "quoted_string_token3",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_multiline_string_token2] = "multiline_string_token2",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_configuration_file] = "configuration_file",
  [sym_root_section] = "root_section",
  [sym_subsection_1] = "subsection_1",
  [sym_subsection_2] = "subsection_2",
  [sym_setting] = "setting",
  [sym_quoted_string] = "quoted_string",
  [sym_multiline_string] = "multiline_string",
  [aux_sym_configuration_file_repeat1] = "configuration_file_repeat1",
  [aux_sym_root_section_repeat1] = "root_section_repeat1",
  [aux_sym_root_section_repeat2] = "root_section_repeat2",
  [aux_sym_subsection_1_repeat1] = "subsection_1_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_quoted_string_repeat2] = "quoted_string_repeat2",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym_multiline_string_repeat2] = "multiline_string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [aux_sym_quoted_string_token2] = aux_sym_quoted_string_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_string_token3] = aux_sym_quoted_string_token3,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_multiline_string_token2] = aux_sym_multiline_string_token2,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_configuration_file] = sym_configuration_file,
  [sym_root_section] = sym_root_section,
  [sym_subsection_1] = sym_subsection_1,
  [sym_subsection_2] = sym_subsection_2,
  [sym_setting] = sym_setting,
  [sym_quoted_string] = sym_quoted_string,
  [sym_multiline_string] = sym_multiline_string,
  [aux_sym_configuration_file_repeat1] = aux_sym_configuration_file_repeat1,
  [aux_sym_root_section_repeat1] = aux_sym_root_section_repeat1,
  [aux_sym_root_section_repeat2] = aux_sym_root_section_repeat2,
  [aux_sym_subsection_1_repeat1] = aux_sym_subsection_1_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_quoted_string_repeat2] = aux_sym_quoted_string_repeat2,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
  [aux_sym_multiline_string_repeat2] = aux_sym_multiline_string_repeat2,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_subsection_2] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
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
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 0},
    {field_value, 2},
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
  [29] = 29,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == ']') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == ']') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == ']') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '[') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ']') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '#') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_quoted_string_token3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_quoted_string_token3);
      if (lookahead == '#') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_multiline_string_token2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_string);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_quoted_string_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_configuration_file] = STATE(39),
    [sym_root_section] = STATE(34),
    [aux_sym_configuration_file_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(11), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(3), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(11), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
  [25] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(7), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(12), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
  [50] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(29), 2,
      sym_string,
      sym_number,
    STATE(19), 2,
      sym_quoted_string,
      sym_multiline_string,
  [74] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(7), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(15), 2,
      sym_subsection_1,
      aux_sym_root_section_repeat2,
  [98] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(35), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    STATE(5), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
    STATE(24), 2,
      sym_subsection_1,
      aux_sym_root_section_repeat2,
  [122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(43), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(7), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
  [141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(50), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(9), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
  [160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(54), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(7), 2,
      sym_setting,
      aux_sym_root_section_repeat1,
  [179] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(58), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(10), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
  [197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(10), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
  [215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK_LBRACK_LBRACK,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    STATE(10), 2,
      sym_subsection_2,
      aux_sym_subsection_1_repeat1,
  [233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      sym_string,
  [246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      sym_string,
  [259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    STATE(16), 2,
      sym_subsection_1,
      aux_sym_root_section_repeat2,
  [276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(16), 2,
      sym_subsection_1,
      aux_sym_root_section_repeat2,
  [293] = 5,
    ACTIONS(88), 1,
      aux_sym_quoted_string_token3,
    ACTIONS(90), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(92), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_multiline_string_repeat2,
    ACTIONS(86), 2,
      aux_sym_quoted_string_token2,
      aux_sym_multiline_string_token2,
  [310] = 5,
    ACTIONS(90), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_quoted_string_token1,
    STATE(22), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(96), 2,
      aux_sym_quoted_string_token2,
      aux_sym_multiline_string_token1,
  [327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      sym_string,
  [340] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_quoted_string_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(20), 1,
      aux_sym_multiline_string_repeat2,
    ACTIONS(102), 2,
      aux_sym_quoted_string_token2,
      aux_sym_multiline_string_token2,
  [357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      sym_string,
  [370] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(114), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(118), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(25), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(116), 2,
      aux_sym_quoted_string_token2,
      aux_sym_multiline_string_token1,
  [387] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(122), 1,
      aux_sym_quoted_string_token3,
    STATE(20), 1,
      aux_sym_multiline_string_repeat2,
    ACTIONS(120), 2,
      aux_sym_quoted_string_token2,
      aux_sym_multiline_string_token2,
  [404] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(16), 2,
      sym_subsection_1,
      aux_sym_root_section_repeat2,
  [421] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(130), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(25), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(127), 2,
      aux_sym_quoted_string_token2,
      aux_sym_multiline_string_token1,
  [438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_LBRACK,
      sym_string,
  [451] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(140), 1,
      aux_sym_quoted_string_token2,
    STATE(30), 1,
      aux_sym_quoted_string_repeat1,
  [467] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      aux_sym_quoted_string_token2,
    ACTIONS(144), 1,
      aux_sym_quoted_string_token3,
    STATE(31), 1,
      aux_sym_quoted_string_repeat2,
  [483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(29), 2,
      sym_root_section,
      aux_sym_configuration_file_repeat1,
  [497] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(155), 1,
      aux_sym_quoted_string_token2,
    STATE(32), 1,
      aux_sym_quoted_string_repeat1,
  [513] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_quoted_string_token2,
    ACTIONS(159), 1,
      aux_sym_quoted_string_token3,
    STATE(33), 1,
      aux_sym_quoted_string_repeat2,
  [529] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(166), 1,
      aux_sym_quoted_string_token2,
    STATE(32), 1,
      aux_sym_quoted_string_repeat1,
  [545] = 5,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_quoted_string_token2,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      aux_sym_quoted_string_token3,
    STATE(33), 1,
      aux_sym_quoted_string_repeat2,
  [561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_root_section,
      aux_sym_configuration_file_repeat1,
  [575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_string,
  [582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_string,
  [589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_string,
  [596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
  [603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_RBRACK_RBRACK_RBRACK,
  [617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_EQ,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_RBRACK_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 276,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 310,
  [SMALL_STATE(19)] = 327,
  [SMALL_STATE(20)] = 340,
  [SMALL_STATE(21)] = 357,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 387,
  [SMALL_STATE(24)] = 404,
  [SMALL_STATE(25)] = 421,
  [SMALL_STATE(26)] = 438,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 467,
  [SMALL_STATE(29)] = 483,
  [SMALL_STATE(30)] = 497,
  [SMALL_STATE(31)] = 513,
  [SMALL_STATE(32)] = 529,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 561,
  [SMALL_STATE(35)] = 575,
  [SMALL_STATE(36)] = 582,
  [SMALL_STATE(37)] = 589,
  [SMALL_STATE(38)] = 596,
  [SMALL_STATE(39)] = 603,
  [SMALL_STATE(40)] = 610,
  [SMALL_STATE(41)] = 617,
  [SMALL_STATE(42)] = 624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 3, 0, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 3, 0, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 4, 0, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 4, 0, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 4, 0, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 4, 0, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 3, 0, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 3, 0, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_section_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_2, 3, 0, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_2, 3, 0, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_2, 4, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_2, 4, 0, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_1_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_1_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_1_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_1, 5, 0, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_1, 5, 0, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_section, 5, 0, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_section, 5, 0, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_section_repeat2, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_section_repeat2, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_section_repeat2, 2, 0, 0), SHIFT_REPEAT(37),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat2, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_file_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat2, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_file, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
