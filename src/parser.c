#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 237
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASHstoptext = 1,
  anon_sym_BSLASHstopcomponent = 2,
  anon_sym_BSLASHstarttext = 3,
  anon_sym_BSLASHstartcomponent = 4,
  sym_text = 5,
  anon_sym_LF = 6,
  anon_sym_CR = 7,
  anon_sym_CR_LF = 8,
  aux_sym_comment_token1 = 9,
  anon_sym_POUND = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_PERCENT = 12,
  anon_sym_AMP = 13,
  anon_sym_CARET = 14,
  anon_sym__ = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_PIPE = 18,
  anon_sym_TILDE = 19,
  anon_sym_BSLASH = 20,
  anon_sym_BSLASHbgroup = 21,
  anon_sym_BSLASHegroup = 22,
  sym_command_group_start = 23,
  sym_command_group_stop = 24,
  sym_math_text = 25,
  anon_sym_BSLASHstartMPinclusions = 26,
  anon_sym_BSLASHstartuseMPgraphic = 27,
  anon_sym_BSLASHstartreusableMPgraphic = 28,
  anon_sym_BSLASHstartMPcode = 29,
  anon_sym_BSLASHstartMPpage = 30,
  anon_sym_BSLASHstartstaticMPfigure = 31,
  anon_sym_BSLASHstopMPinclusions = 32,
  anon_sym_BSLASHstopuseMPgraphic = 33,
  anon_sym_BSLASHstopreusableMPgraphic = 34,
  anon_sym_BSLASHstopMPcode = 35,
  anon_sym_BSLASHstopMPpage = 36,
  anon_sym_BSLASHstopstaticMPfigure = 37,
  aux_sym_metapost_body_token1 = 38,
  anon_sym_BSLASHstarttikzpicture = 39,
  anon_sym_BSLASHstoptikzpicture = 40,
  anon_sym_BSLASHstarttyping = 41,
  anon_sym_BSLASHstartLUA = 42,
  anon_sym_BSLASHstartMP = 43,
  anon_sym_BSLASHstartPARSEDXML = 44,
  anon_sym_BSLASHstartTEX = 45,
  anon_sym_BSLASHstartXML = 46,
  anon_sym_BSLASHstartCSS = 47,
  anon_sym_BSLASHstoptyping = 48,
  anon_sym_BSLASHstopLUA = 49,
  anon_sym_BSLASHstopMP = 50,
  anon_sym_BSLASHstopPARSEDXML = 51,
  anon_sym_BSLASHstopTEX = 52,
  anon_sym_BSLASHstopXML = 53,
  anon_sym_BSLASHstopCSS = 54,
  anon_sym_BSLASHstartHTML = 55,
  anon_sym_BSLASHstopHTML = 56,
  sym_command_name = 57,
  sym_command_block_start = 58,
  sym_command_block_stop = 59,
  anon_sym_COMMA = 60,
  aux_sym_keyword_token1 = 61,
  anon_sym_EQ = 62,
  anon_sym_title = 63,
  aux_sym_title_text_token1 = 64,
  sym_command_stop = 65,
  sym_paragraph_stop = 66,
  sym__eol = 67,
  sym_preamble_stop = 68,
  sym_document = 69,
  sym_main_stop = 70,
  sym_main_start = 71,
  sym_preamble = 72,
  sym_main = 73,
  sym_postamble = 74,
  sym_preamble_content = 75,
  sym__end_of_line_or_paragraph = 76,
  sym_paragraph = 77,
  sym__paragraph_content = 78,
  sym__end_of_line = 79,
  sym_comment = 80,
  sym_escapechar = 81,
  sym_escaped = 82,
  sym_brace_group_start = 83,
  sym_brace_group_stop = 84,
  sym__group_content = 85,
  sym_brace_group = 86,
  sym_command_group = 87,
  sym_math_group = 88,
  sym__math_content = 89,
  sym_inline_math = 90,
  sym_metapost_start = 91,
  sym_metapost_stop = 92,
  sym_metapost_body = 93,
  sym_metapost_inclusion = 94,
  sym_tikz_start = 95,
  sym_tikz_stop = 96,
  sym_tikz_body = 97,
  sym_tikz_inclusion = 98,
  sym_typing_start = 99,
  sym_typing_stop = 100,
  sym_typing_body = 101,
  sym_typing_inclusion = 102,
  sym_typing_html_start = 103,
  sym_typing_html_stop = 104,
  sym_typing_html_body = 105,
  sym_typing_html_inclusion = 106,
  sym_option_block = 107,
  sym_keyword = 108,
  sym_settings_block = 109,
  sym_setting = 110,
  sym_title_setting = 111,
  sym_title_value = 112,
  sym__title_content = 113,
  sym_title_brace_group = 114,
  sym_title_text = 115,
  sym_key = 116,
  sym_value = 117,
  sym__value_content = 118,
  sym_value_text = 119,
  sym_value_brace_group = 120,
  sym_command = 121,
  aux_sym_preamble_repeat1 = 122,
  aux_sym_main_repeat1 = 123,
  aux_sym_paragraph_repeat1 = 124,
  aux_sym_brace_group_repeat1 = 125,
  aux_sym_math_group_repeat1 = 126,
  aux_sym_option_block_repeat1 = 127,
  aux_sym_settings_block_repeat1 = 128,
  aux_sym_title_value_repeat1 = 129,
  aux_sym_value_repeat1 = 130,
  aux_sym_command_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHstoptext] = "\\stoptext",
  [anon_sym_BSLASHstopcomponent] = "\\stopcomponent",
  [anon_sym_BSLASHstarttext] = "\\starttext",
  [anon_sym_BSLASHstartcomponent] = "\\startcomponent",
  [sym_text] = "text",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_BSLASHbgroup] = "\\bgroup",
  [anon_sym_BSLASHegroup] = "\\egroup",
  [sym_command_group_start] = "command_group_start",
  [sym_command_group_stop] = "command_group_stop",
  [sym_math_text] = "math_text",
  [anon_sym_BSLASHstartMPinclusions] = "\\startMPinclusions",
  [anon_sym_BSLASHstartuseMPgraphic] = "\\startuseMPgraphic",
  [anon_sym_BSLASHstartreusableMPgraphic] = "\\startreusableMPgraphic",
  [anon_sym_BSLASHstartMPcode] = "\\startMPcode",
  [anon_sym_BSLASHstartMPpage] = "\\startMPpage",
  [anon_sym_BSLASHstartstaticMPfigure] = "\\startstaticMPfigure",
  [anon_sym_BSLASHstopMPinclusions] = "\\stopMPinclusions",
  [anon_sym_BSLASHstopuseMPgraphic] = "\\stopuseMPgraphic",
  [anon_sym_BSLASHstopreusableMPgraphic] = "\\stopreusableMPgraphic",
  [anon_sym_BSLASHstopMPcode] = "\\stopMPcode",
  [anon_sym_BSLASHstopMPpage] = "\\stopMPpage",
  [anon_sym_BSLASHstopstaticMPfigure] = "\\stopstaticMPfigure",
  [aux_sym_metapost_body_token1] = "metapost_body_token1",
  [anon_sym_BSLASHstarttikzpicture] = "\\starttikzpicture",
  [anon_sym_BSLASHstoptikzpicture] = "\\stoptikzpicture",
  [anon_sym_BSLASHstarttyping] = "\\starttyping",
  [anon_sym_BSLASHstartLUA] = "\\startLUA",
  [anon_sym_BSLASHstartMP] = "\\startMP",
  [anon_sym_BSLASHstartPARSEDXML] = "\\startPARSEDXML",
  [anon_sym_BSLASHstartTEX] = "\\startTEX",
  [anon_sym_BSLASHstartXML] = "\\startXML",
  [anon_sym_BSLASHstartCSS] = "\\startCSS",
  [anon_sym_BSLASHstoptyping] = "\\stoptyping",
  [anon_sym_BSLASHstopLUA] = "\\stopLUA",
  [anon_sym_BSLASHstopMP] = "\\stopMP",
  [anon_sym_BSLASHstopPARSEDXML] = "\\stopPARSEDXML",
  [anon_sym_BSLASHstopTEX] = "\\stopTEX",
  [anon_sym_BSLASHstopXML] = "\\stopXML",
  [anon_sym_BSLASHstopCSS] = "\\stopCSS",
  [anon_sym_BSLASHstartHTML] = "\\startHTML",
  [anon_sym_BSLASHstopHTML] = "\\stopHTML",
  [sym_command_name] = "command_name",
  [sym_command_block_start] = "command_block_start",
  [sym_command_block_stop] = "command_block_stop",
  [anon_sym_COMMA] = ",",
  [aux_sym_keyword_token1] = "keyword_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_title] = "title",
  [aux_sym_title_text_token1] = "title_text_token1",
  [sym_command_stop] = "command_stop",
  [sym_paragraph_stop] = "paragraph_stop",
  [sym__eol] = "_eol",
  [sym_preamble_stop] = "preamble_stop",
  [sym_document] = "document",
  [sym_main_stop] = "main_stop",
  [sym_main_start] = "main_start",
  [sym_preamble] = "preamble",
  [sym_main] = "main",
  [sym_postamble] = "postamble",
  [sym_preamble_content] = "preamble_content",
  [sym__end_of_line_or_paragraph] = "_end_of_line_or_paragraph",
  [sym_paragraph] = "paragraph",
  [sym__paragraph_content] = "_paragraph_content",
  [sym__end_of_line] = "_end_of_line",
  [sym_comment] = "comment",
  [sym_escapechar] = "escapechar",
  [sym_escaped] = "escaped",
  [sym_brace_group_start] = "brace_group_start",
  [sym_brace_group_stop] = "brace_group_stop",
  [sym__group_content] = "_group_content",
  [sym_brace_group] = "brace_group",
  [sym_command_group] = "command_group",
  [sym_math_group] = "math_group",
  [sym__math_content] = "_math_content",
  [sym_inline_math] = "inline_math",
  [sym_metapost_start] = "metapost_start",
  [sym_metapost_stop] = "metapost_stop",
  [sym_metapost_body] = "metapost_body",
  [sym_metapost_inclusion] = "metapost_inclusion",
  [sym_tikz_start] = "tikz_start",
  [sym_tikz_stop] = "tikz_stop",
  [sym_tikz_body] = "tikz_body",
  [sym_tikz_inclusion] = "tikz_inclusion",
  [sym_typing_start] = "typing_start",
  [sym_typing_stop] = "typing_stop",
  [sym_typing_body] = "typing_body",
  [sym_typing_inclusion] = "typing_inclusion",
  [sym_typing_html_start] = "typing_html_start",
  [sym_typing_html_stop] = "typing_html_stop",
  [sym_typing_html_body] = "typing_html_body",
  [sym_typing_html_inclusion] = "typing_html_inclusion",
  [sym_option_block] = "option_block",
  [sym_keyword] = "keyword",
  [sym_settings_block] = "settings_block",
  [sym_setting] = "setting",
  [sym_title_setting] = "title_setting",
  [sym_title_value] = "title_value",
  [sym__title_content] = "_title_content",
  [sym_title_brace_group] = "title_brace_group",
  [sym_title_text] = "title_text",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym__value_content] = "_value_content",
  [sym_value_text] = "value_text",
  [sym_value_brace_group] = "value_brace_group",
  [sym_command] = "command",
  [aux_sym_preamble_repeat1] = "preamble_repeat1",
  [aux_sym_main_repeat1] = "main_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_brace_group_repeat1] = "brace_group_repeat1",
  [aux_sym_math_group_repeat1] = "math_group_repeat1",
  [aux_sym_option_block_repeat1] = "option_block_repeat1",
  [aux_sym_settings_block_repeat1] = "settings_block_repeat1",
  [aux_sym_title_value_repeat1] = "title_value_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHstoptext] = anon_sym_BSLASHstoptext,
  [anon_sym_BSLASHstopcomponent] = anon_sym_BSLASHstopcomponent,
  [anon_sym_BSLASHstarttext] = anon_sym_BSLASHstarttext,
  [anon_sym_BSLASHstartcomponent] = anon_sym_BSLASHstartcomponent,
  [sym_text] = sym_text,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_BSLASHbgroup] = anon_sym_BSLASHbgroup,
  [anon_sym_BSLASHegroup] = anon_sym_BSLASHegroup,
  [sym_command_group_start] = sym_command_group_start,
  [sym_command_group_stop] = sym_command_group_stop,
  [sym_math_text] = sym_math_text,
  [anon_sym_BSLASHstartMPinclusions] = anon_sym_BSLASHstartMPinclusions,
  [anon_sym_BSLASHstartuseMPgraphic] = anon_sym_BSLASHstartuseMPgraphic,
  [anon_sym_BSLASHstartreusableMPgraphic] = anon_sym_BSLASHstartreusableMPgraphic,
  [anon_sym_BSLASHstartMPcode] = anon_sym_BSLASHstartMPcode,
  [anon_sym_BSLASHstartMPpage] = anon_sym_BSLASHstartMPpage,
  [anon_sym_BSLASHstartstaticMPfigure] = anon_sym_BSLASHstartstaticMPfigure,
  [anon_sym_BSLASHstopMPinclusions] = anon_sym_BSLASHstopMPinclusions,
  [anon_sym_BSLASHstopuseMPgraphic] = anon_sym_BSLASHstopuseMPgraphic,
  [anon_sym_BSLASHstopreusableMPgraphic] = anon_sym_BSLASHstopreusableMPgraphic,
  [anon_sym_BSLASHstopMPcode] = anon_sym_BSLASHstopMPcode,
  [anon_sym_BSLASHstopMPpage] = anon_sym_BSLASHstopMPpage,
  [anon_sym_BSLASHstopstaticMPfigure] = anon_sym_BSLASHstopstaticMPfigure,
  [aux_sym_metapost_body_token1] = aux_sym_metapost_body_token1,
  [anon_sym_BSLASHstarttikzpicture] = anon_sym_BSLASHstarttikzpicture,
  [anon_sym_BSLASHstoptikzpicture] = anon_sym_BSLASHstoptikzpicture,
  [anon_sym_BSLASHstarttyping] = anon_sym_BSLASHstarttyping,
  [anon_sym_BSLASHstartLUA] = anon_sym_BSLASHstartLUA,
  [anon_sym_BSLASHstartMP] = anon_sym_BSLASHstartMP,
  [anon_sym_BSLASHstartPARSEDXML] = anon_sym_BSLASHstartPARSEDXML,
  [anon_sym_BSLASHstartTEX] = anon_sym_BSLASHstartTEX,
  [anon_sym_BSLASHstartXML] = anon_sym_BSLASHstartXML,
  [anon_sym_BSLASHstartCSS] = anon_sym_BSLASHstartCSS,
  [anon_sym_BSLASHstoptyping] = anon_sym_BSLASHstoptyping,
  [anon_sym_BSLASHstopLUA] = anon_sym_BSLASHstopLUA,
  [anon_sym_BSLASHstopMP] = anon_sym_BSLASHstopMP,
  [anon_sym_BSLASHstopPARSEDXML] = anon_sym_BSLASHstopPARSEDXML,
  [anon_sym_BSLASHstopTEX] = anon_sym_BSLASHstopTEX,
  [anon_sym_BSLASHstopXML] = anon_sym_BSLASHstopXML,
  [anon_sym_BSLASHstopCSS] = anon_sym_BSLASHstopCSS,
  [anon_sym_BSLASHstartHTML] = anon_sym_BSLASHstartHTML,
  [anon_sym_BSLASHstopHTML] = anon_sym_BSLASHstopHTML,
  [sym_command_name] = sym_command_name,
  [sym_command_block_start] = sym_command_block_start,
  [sym_command_block_stop] = sym_command_block_stop,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_title] = anon_sym_title,
  [aux_sym_title_text_token1] = aux_sym_title_text_token1,
  [sym_command_stop] = sym_command_stop,
  [sym_paragraph_stop] = sym_paragraph_stop,
  [sym__eol] = sym__eol,
  [sym_preamble_stop] = sym_preamble_stop,
  [sym_document] = sym_document,
  [sym_main_stop] = sym_main_stop,
  [sym_main_start] = sym_main_start,
  [sym_preamble] = sym_preamble,
  [sym_main] = sym_main,
  [sym_postamble] = sym_postamble,
  [sym_preamble_content] = sym_preamble_content,
  [sym__end_of_line_or_paragraph] = sym__end_of_line_or_paragraph,
  [sym_paragraph] = sym_paragraph,
  [sym__paragraph_content] = sym__paragraph_content,
  [sym__end_of_line] = sym__end_of_line,
  [sym_comment] = sym_comment,
  [sym_escapechar] = sym_escapechar,
  [sym_escaped] = sym_escaped,
  [sym_brace_group_start] = sym_brace_group_start,
  [sym_brace_group_stop] = sym_brace_group_stop,
  [sym__group_content] = sym__group_content,
  [sym_brace_group] = sym_brace_group,
  [sym_command_group] = sym_command_group,
  [sym_math_group] = sym_math_group,
  [sym__math_content] = sym__math_content,
  [sym_inline_math] = sym_inline_math,
  [sym_metapost_start] = sym_metapost_start,
  [sym_metapost_stop] = sym_metapost_stop,
  [sym_metapost_body] = sym_metapost_body,
  [sym_metapost_inclusion] = sym_metapost_inclusion,
  [sym_tikz_start] = sym_tikz_start,
  [sym_tikz_stop] = sym_tikz_stop,
  [sym_tikz_body] = sym_tikz_body,
  [sym_tikz_inclusion] = sym_tikz_inclusion,
  [sym_typing_start] = sym_typing_start,
  [sym_typing_stop] = sym_typing_stop,
  [sym_typing_body] = sym_typing_body,
  [sym_typing_inclusion] = sym_typing_inclusion,
  [sym_typing_html_start] = sym_typing_html_start,
  [sym_typing_html_stop] = sym_typing_html_stop,
  [sym_typing_html_body] = sym_typing_html_body,
  [sym_typing_html_inclusion] = sym_typing_html_inclusion,
  [sym_option_block] = sym_option_block,
  [sym_keyword] = sym_keyword,
  [sym_settings_block] = sym_settings_block,
  [sym_setting] = sym_setting,
  [sym_title_setting] = sym_title_setting,
  [sym_title_value] = sym_title_value,
  [sym__title_content] = sym__title_content,
  [sym_title_brace_group] = sym_title_brace_group,
  [sym_title_text] = sym_title_text,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym__value_content] = sym__value_content,
  [sym_value_text] = sym_value_text,
  [sym_value_brace_group] = sym_value_brace_group,
  [sym_command] = sym_command,
  [aux_sym_preamble_repeat1] = aux_sym_preamble_repeat1,
  [aux_sym_main_repeat1] = aux_sym_main_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_brace_group_repeat1] = aux_sym_brace_group_repeat1,
  [aux_sym_math_group_repeat1] = aux_sym_math_group_repeat1,
  [aux_sym_option_block_repeat1] = aux_sym_option_block_repeat1,
  [aux_sym_settings_block_repeat1] = aux_sym_settings_block_repeat1,
  [aux_sym_title_value_repeat1] = aux_sym_title_value_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHstoptext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopcomponent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstarttext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartcomponent] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHbgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHegroup] = {
    .visible = true,
    .named = false,
  },
  [sym_command_group_start] = {
    .visible = true,
    .named = true,
  },
  [sym_command_group_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_math_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASHstartMPinclusions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartuseMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartreusableMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartMPcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartMPpage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartstaticMPfigure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMPinclusions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopuseMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopreusableMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMPcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMPpage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopstaticMPfigure] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_metapost_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHstarttikzpicture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstoptikzpicture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstarttyping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartLUA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartPARSEDXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartTEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartCSS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstoptyping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopLUA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopPARSEDXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopTEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopCSS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartHTML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopHTML] = {
    .visible = true,
    .named = false,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_command_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_command_block_stop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_title_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_command_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_stop] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_preamble_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_main_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_main_start] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [sym_main] = {
    .visible = true,
    .named = true,
  },
  [sym_postamble] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble_content] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_line_or_paragraph] = {
    .visible = false,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym__paragraph_content] = {
    .visible = false,
    .named = true,
  },
  [sym__end_of_line] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_escapechar] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_group_start] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_group_stop] = {
    .visible = true,
    .named = true,
  },
  [sym__group_content] = {
    .visible = false,
    .named = true,
  },
  [sym_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_command_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym__math_content] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_start] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_body] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_body] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_start] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_body] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_start] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_body] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_option_block] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_block] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_title_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_title_value] = {
    .visible = true,
    .named = true,
  },
  [sym__title_content] = {
    .visible = false,
    .named = true,
  },
  [sym_title_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_title_text] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__value_content] = {
    .visible = false,
    .named = true,
  },
  [sym_value_text] = {
    .visible = true,
    .named = true,
  },
  [sym_value_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_preamble_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_main_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_brace_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(137);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(155);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '=') ADVANCE(344);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '^') ADVANCE(156);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '~') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(347);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '=') ADVANCE(344);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(343);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(343);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead == '^') ADVANCE(156);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '~') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(200);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'X') ADVANCE(22);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(204);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(207);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(202);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(201);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(205);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'U') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'X') ADVANCE(203);
      END_STATE();
    case 41:
      if (lookahead == 'X') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(343);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(343);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 134:
      if (lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'z') ADVANCE(108);
      END_STATE();
    case 136:
      if (eof) ADVANCE(137);
      if (lookahead == '\n') SKIP(136)
      if (lookahead == '$') ADVANCE(153);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(151);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(151);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 's') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 's') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 's') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 's') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 's') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'p') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(227);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(193);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == 'M') ADVANCE(223);
      if (lookahead == 'P') ADVANCE(208);
      if (lookahead == 'T') ADVANCE(212);
      if (lookahead == 'X') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 't') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 't') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'y') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(347);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1, .external_lex_state = 2},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 136},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 136},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 136},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 136},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 136, .external_lex_state = 3},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 136, .external_lex_state = 3},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 136, .external_lex_state = 3},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2, .external_lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 3, .external_lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3, .external_lex_state = 3},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 2, .external_lex_state = 4},
  [50] = {.lex_state = 3, .external_lex_state = 3},
  [51] = {.lex_state = 3, .external_lex_state = 3},
  [52] = {.lex_state = 3, .external_lex_state = 3},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 10, .external_lex_state = 4},
  [55] = {.lex_state = 3, .external_lex_state = 3},
  [56] = {.lex_state = 3, .external_lex_state = 3},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 3, .external_lex_state = 3},
  [59] = {.lex_state = 3, .external_lex_state = 3},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 3, .external_lex_state = 3},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 3, .external_lex_state = 3},
  [66] = {.lex_state = 3, .external_lex_state = 3},
  [67] = {.lex_state = 3, .external_lex_state = 3},
  [68] = {.lex_state = 3, .external_lex_state = 3},
  [69] = {.lex_state = 2, .external_lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 3, .external_lex_state = 3},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 3, .external_lex_state = 3},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 3, .external_lex_state = 3},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 136, .external_lex_state = 4},
  [81] = {.lex_state = 10, .external_lex_state = 4},
  [82] = {.lex_state = 10, .external_lex_state = 4},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 136, .external_lex_state = 4},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 136, .external_lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 136},
  [90] = {.lex_state = 136, .external_lex_state = 3},
  [91] = {.lex_state = 136},
  [92] = {.lex_state = 136},
  [93] = {.lex_state = 136},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 6, .external_lex_state = 5},
  [112] = {.lex_state = 6, .external_lex_state = 5},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 6, .external_lex_state = 5},
  [117] = {.lex_state = 6, .external_lex_state = 5},
  [118] = {.lex_state = 6, .external_lex_state = 5},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 6, .external_lex_state = 5},
  [124] = {.lex_state = 6, .external_lex_state = 5},
  [125] = {.lex_state = 6, .external_lex_state = 5},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 6, .external_lex_state = 5},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 42},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 42},
  [145] = {.lex_state = 43},
  [146] = {.lex_state = 4, .external_lex_state = 2},
  [147] = {.lex_state = 43},
  [148] = {.lex_state = 42},
  [149] = {.lex_state = 43},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 44},
  [159] = {.lex_state = 6, .external_lex_state = 5},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 6, .external_lex_state = 5},
  [162] = {.lex_state = 6, .external_lex_state = 5},
  [163] = {.lex_state = 6, .external_lex_state = 5},
  [164] = {.lex_state = 6, .external_lex_state = 5},
  [165] = {.lex_state = 6, .external_lex_state = 5},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 6, .external_lex_state = 5},
  [168] = {.lex_state = 6, .external_lex_state = 5},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 1, .external_lex_state = 2},
  [172] = {.lex_state = 44},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 6, .external_lex_state = 5},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 1, .external_lex_state = 2},
  [177] = {.lex_state = 6, .external_lex_state = 5},
  [178] = {.lex_state = 6, .external_lex_state = 5},
  [179] = {.lex_state = 6, .external_lex_state = 5},
  [180] = {.lex_state = 43},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 44},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 42},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 45},
  [197] = {.lex_state = 1, .external_lex_state = 2},
  [198] = {.lex_state = 45},
  [199] = {.lex_state = 42},
  [200] = {.lex_state = 42},
  [201] = {.lex_state = 188},
  [202] = {.lex_state = 188},
  [203] = {.lex_state = 188},
  [204] = {.lex_state = 188},
  [205] = {.lex_state = 42},
  [206] = {.lex_state = 188},
  [207] = {.lex_state = 42},
  [208] = {.lex_state = 188},
  [209] = {.lex_state = 45},
  [210] = {.lex_state = 188},
  [211] = {.lex_state = 42},
  [212] = {.lex_state = 188},
  [213] = {.lex_state = 188},
  [214] = {.lex_state = 188},
  [215] = {.lex_state = 188},
  [216] = {.lex_state = 188},
  [217] = {.lex_state = 42},
  [218] = {.lex_state = 42},
  [219] = {.lex_state = 42},
  [220] = {.lex_state = 188},
  [221] = {.lex_state = 188},
  [222] = {.lex_state = 188},
  [223] = {.lex_state = 188},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 42},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 42},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
};

enum {
  ts_external_token_command_stop = 0,
  ts_external_token_paragraph_stop = 1,
  ts_external_token__eol = 2,
  ts_external_token_preamble_stop = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_command_stop] = sym_command_stop,
  [ts_external_token_paragraph_stop] = sym_paragraph_stop,
  [ts_external_token__eol] = sym__eol,
  [ts_external_token_preamble_stop] = sym_preamble_stop,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_command_stop] = true,
    [ts_external_token_paragraph_stop] = true,
    [ts_external_token__eol] = true,
    [ts_external_token_preamble_stop] = true,
  },
  [2] = {
    [ts_external_token_preamble_stop] = true,
  },
  [3] = {
    [ts_external_token_paragraph_stop] = true,
  },
  [4] = {
    [ts_external_token_paragraph_stop] = true,
    [ts_external_token__eol] = true,
  },
  [5] = {
    [ts_external_token_command_stop] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASHstoptext] = ACTIONS(1),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASHbgroup] = ACTIONS(1),
    [anon_sym_BSLASHegroup] = ACTIONS(1),
    [sym_command_group_start] = ACTIONS(1),
    [sym_command_group_stop] = ACTIONS(1),
    [anon_sym_BSLASHstartMPinclusions] = ACTIONS(1),
    [anon_sym_BSLASHstartuseMPgraphic] = ACTIONS(1),
    [anon_sym_BSLASHstartreusableMPgraphic] = ACTIONS(1),
    [anon_sym_BSLASHstartMPcode] = ACTIONS(1),
    [anon_sym_BSLASHstartMPpage] = ACTIONS(1),
    [anon_sym_BSLASHstartstaticMPfigure] = ACTIONS(1),
    [anon_sym_BSLASHstarttikzpicture] = ACTIONS(1),
    [anon_sym_BSLASHstarttyping] = ACTIONS(1),
    [anon_sym_BSLASHstartLUA] = ACTIONS(1),
    [anon_sym_BSLASHstartMP] = ACTIONS(1),
    [anon_sym_BSLASHstartPARSEDXML] = ACTIONS(1),
    [anon_sym_BSLASHstartTEX] = ACTIONS(1),
    [anon_sym_BSLASHstartXML] = ACTIONS(1),
    [anon_sym_BSLASHstartCSS] = ACTIONS(1),
    [anon_sym_BSLASHstartHTML] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [sym_command_block_start] = ACTIONS(1),
    [sym_command_block_stop] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [sym_command_stop] = ACTIONS(1),
    [sym_paragraph_stop] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym_preamble_stop] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(232),
    [sym_preamble] = STATE(191),
    [sym_preamble_content] = STATE(176),
    [sym_comment] = STATE(192),
    [aux_sym_preamble_repeat1] = STATE(176),
    [sym_text] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [sym_preamble_stop] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_command_group_start,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(29), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(92), 1,
      sym_main_stop,
    STATE(193), 1,
      sym_comment,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(214), 1,
      sym_typing_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(216), 1,
      sym_metapost_start,
    ACTIONS(9), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(3), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(15), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(42), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [92] = 22,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(36), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(48), 1,
      sym_command_group_start,
    ACTIONS(54), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(60), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(63), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(193), 1,
      sym_comment,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(214), 1,
      sym_typing_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(216), 1,
      sym_metapost_start,
    ACTIONS(31), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(42), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(3), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(15), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(51), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(57), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(42), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [181] = 22,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(36), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(48), 1,
      sym_command_group_start,
    ACTIONS(54), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(60), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(193), 1,
      sym_comment,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(214), 1,
      sym_typing_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(216), 1,
      sym_metapost_start,
    ACTIONS(42), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(4), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(19), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(51), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(57), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(42), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [269] = 22,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(68), 1,
      sym_text,
    ACTIONS(70), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      sym_command_group_start,
    ACTIONS(78), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(37), 1,
      sym_command_group,
    STATE(73), 1,
      sym_brace_group_stop,
    STATE(195), 1,
      sym_comment,
    STATE(201), 1,
      sym_typing_html_start,
    STATE(202), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_tikz_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(14), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(25), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [357] = 22,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(68), 1,
      sym_text,
    ACTIONS(70), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      sym_command_group_start,
    ACTIONS(78), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(37), 1,
      sym_command_group,
    STATE(57), 1,
      sym_brace_group_stop,
    STATE(195), 1,
      sym_comment,
    STATE(201), 1,
      sym_typing_html_start,
    STATE(202), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_tikz_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(80), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(12), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(25), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [445] = 22,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_command_group_start,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(29), 1,
      sym_command_name,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(193), 1,
      sym_comment,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(214), 1,
      sym_typing_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(216), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(4), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(19), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(42), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [533] = 22,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(68), 1,
      sym_text,
    ACTIONS(70), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      sym_command_group_start,
    ACTIONS(78), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(31), 1,
      sym_brace_group_stop,
    STATE(37), 1,
      sym_command_group,
    STATE(195), 1,
      sym_comment,
    STATE(201), 1,
      sym_typing_html_start,
    STATE(202), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_tikz_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(84), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(10), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(25), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [621] = 22,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(68), 1,
      sym_text,
    ACTIONS(70), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      sym_command_group_start,
    ACTIONS(78), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(37), 1,
      sym_command_group,
    STATE(59), 1,
      sym_brace_group_stop,
    STATE(195), 1,
      sym_comment,
    STATE(201), 1,
      sym_typing_html_start,
    STATE(202), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_tikz_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(5), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(25), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [709] = 22,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(68), 1,
      sym_text,
    ACTIONS(70), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      sym_command_group_start,
    ACTIONS(78), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(33), 1,
      sym_brace_group_stop,
    STATE(37), 1,
      sym_command_group,
    STATE(195), 1,
      sym_comment,
    STATE(201), 1,
      sym_typing_html_start,
    STATE(202), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_tikz_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(84), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(14), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(25), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [797] = 22,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_command_group_start,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(29), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(193), 1,
      sym_comment,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(214), 1,
      sym_typing_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(216), 1,
      sym_metapost_start,
    STATE(229), 1,
      sym_postamble,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(7), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(19), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(42), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [885] = 22,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(68), 1,
      sym_text,
    ACTIONS(70), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      sym_command_group_start,
    ACTIONS(78), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(37), 1,
      sym_command_group,
    STATE(63), 1,
      sym_brace_group_stop,
    STATE(195), 1,
      sym_comment,
    STATE(201), 1,
      sym_typing_html_start,
    STATE(202), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_tikz_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(80), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(14), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(25), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [973] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_command_group_start,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(29), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(193), 1,
      sym_comment,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(214), 1,
      sym_typing_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(216), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(2), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(15), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(42), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1058] = 21,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(89), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_BSLASH,
    ACTIONS(103), 1,
      sym_command_group_start,
    ACTIONS(109), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(115), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(118), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(37), 1,
      sym_command_group,
    STATE(195), 1,
      sym_comment,
    STATE(201), 1,
      sym_typing_html_start,
    STATE(202), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_tikz_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(95), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(14), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(106), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(112), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(25), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1143] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_command_group_start,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(29), 1,
      sym_command_name,
    ACTIONS(121), 1,
      sym_paragraph_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(193), 1,
      sym_comment,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(214), 1,
      sym_typing_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(216), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(21), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(42), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1227] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(123), 1,
      sym_text,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      sym_command_group_start,
    ACTIONS(131), 1,
      sym_command_group_stop,
    ACTIONS(133), 1,
      sym_command_name,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(54), 1,
      sym_command_group,
    STATE(194), 1,
      sym_comment,
    STATE(206), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(212), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(23), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(41), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1311] = 21,
    ACTIONS(89), 1,
      aux_sym_comment_token1,
    ACTIONS(98), 1,
      sym_command_group_stop,
    ACTIONS(109), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(115), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(135), 1,
      sym_text,
    ACTIONS(138), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      anon_sym_BSLASH,
    ACTIONS(144), 1,
      sym_command_group_start,
    ACTIONS(147), 1,
      sym_command_name,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(54), 1,
      sym_command_group,
    STATE(194), 1,
      sym_comment,
    STATE(206), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(212), 1,
      sym_metapost_start,
    ACTIONS(95), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(17), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(106), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(112), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(41), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1395] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(123), 1,
      sym_text,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      sym_command_group_start,
    ACTIONS(133), 1,
      sym_command_name,
    ACTIONS(150), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(54), 1,
      sym_command_group,
    STATE(194), 1,
      sym_comment,
    STATE(206), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(212), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(22), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(41), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1479] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_command_group_start,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(29), 1,
      sym_command_name,
    ACTIONS(152), 1,
      sym_paragraph_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(193), 1,
      sym_comment,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(214), 1,
      sym_typing_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(216), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(21), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(42), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1563] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(123), 1,
      sym_text,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      sym_command_group_start,
    ACTIONS(133), 1,
      sym_command_name,
    ACTIONS(154), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(54), 1,
      sym_command_group,
    STATE(194), 1,
      sym_comment,
    STATE(206), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(212), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(24), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(41), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1647] = 21,
    ACTIONS(156), 1,
      sym_text,
    ACTIONS(159), 1,
      aux_sym_comment_token1,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(168), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      sym_command_group_start,
    ACTIONS(177), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(183), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(186), 1,
      sym_command_name,
    ACTIONS(189), 1,
      sym_paragraph_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(193), 1,
      sym_comment,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(214), 1,
      sym_typing_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(216), 1,
      sym_metapost_start,
    ACTIONS(165), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(21), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(174), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(180), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(42), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1731] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(123), 1,
      sym_text,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      sym_command_group_start,
    ACTIONS(133), 1,
      sym_command_name,
    ACTIONS(191), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(54), 1,
      sym_command_group,
    STATE(194), 1,
      sym_comment,
    STATE(206), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(212), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(17), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(41), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1815] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(123), 1,
      sym_text,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      sym_command_group_start,
    ACTIONS(133), 1,
      sym_command_name,
    ACTIONS(193), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(54), 1,
      sym_command_group,
    STATE(194), 1,
      sym_comment,
    STATE(206), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(212), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(17), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(41), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1899] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(123), 1,
      sym_text,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      sym_command_group_start,
    ACTIONS(133), 1,
      sym_command_name,
    ACTIONS(195), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(54), 1,
      sym_command_group,
    STATE(194), 1,
      sym_comment,
    STATE(206), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(212), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(17), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(41), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1983] = 3,
    STATE(87), 1,
      sym__end_of_line,
    ACTIONS(199), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(197), 25,
      sym_text,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2019] = 1,
    ACTIONS(201), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2050] = 1,
    ACTIONS(203), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2081] = 1,
    ACTIONS(205), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2112] = 1,
    ACTIONS(207), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2143] = 1,
    ACTIONS(209), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2174] = 1,
    ACTIONS(211), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2205] = 1,
    ACTIONS(213), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2236] = 1,
    ACTIONS(215), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2267] = 1,
    ACTIONS(217), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2298] = 1,
    ACTIONS(219), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2329] = 1,
    ACTIONS(221), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2360] = 4,
    ACTIONS(223), 1,
      sym_text,
    STATE(87), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(225), 2,
      sym_paragraph_stop,
      sym__eol,
    ACTIONS(197), 24,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2397] = 1,
    ACTIONS(227), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2428] = 1,
    ACTIONS(229), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2459] = 1,
    ACTIONS(231), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2490] = 3,
    STATE(88), 1,
      sym__end_of_line,
    ACTIONS(233), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(197), 24,
      sym_text,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2525] = 4,
    ACTIONS(239), 1,
      sym_paragraph_stop,
    STATE(90), 1,
      sym__end_of_line,
    ACTIONS(237), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(235), 23,
      sym_text,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2562] = 1,
    ACTIONS(241), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2593] = 1,
    ACTIONS(243), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2624] = 2,
    ACTIONS(245), 1,
      sym_paragraph_stop,
    ACTIONS(205), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2656] = 1,
    ACTIONS(227), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2686] = 1,
    ACTIONS(209), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2716] = 1,
    ACTIONS(213), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2746] = 2,
    ACTIONS(247), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(249), 24,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2778] = 2,
    ACTIONS(251), 1,
      sym_paragraph_stop,
    ACTIONS(209), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2810] = 2,
    ACTIONS(253), 1,
      sym_paragraph_stop,
    ACTIONS(213), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2842] = 2,
    ACTIONS(255), 1,
      sym_paragraph_stop,
    ACTIONS(201), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2874] = 1,
    ACTIONS(203), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2904] = 4,
    ACTIONS(223), 1,
      sym_text,
    STATE(88), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(257), 2,
      sym_paragraph_stop,
      sym__eol,
    ACTIONS(197), 23,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2940] = 2,
    ACTIONS(259), 1,
      sym_paragraph_stop,
    ACTIONS(229), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2972] = 2,
    ACTIONS(261), 1,
      sym_paragraph_stop,
    ACTIONS(221), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3004] = 1,
    ACTIONS(211), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3034] = 2,
    ACTIONS(263), 1,
      sym_paragraph_stop,
    ACTIONS(241), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3066] = 2,
    ACTIONS(265), 1,
      sym_paragraph_stop,
    ACTIONS(211), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3098] = 1,
    ACTIONS(241), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3128] = 1,
    ACTIONS(229), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3158] = 2,
    ACTIONS(267), 1,
      sym_paragraph_stop,
    ACTIONS(217), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3190] = 1,
    ACTIONS(215), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3220] = 1,
    ACTIONS(219), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3250] = 2,
    ACTIONS(269), 1,
      sym_paragraph_stop,
    ACTIONS(243), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3282] = 2,
    ACTIONS(271), 1,
      sym_paragraph_stop,
    ACTIONS(231), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3314] = 2,
    ACTIONS(273), 1,
      sym_paragraph_stop,
    ACTIONS(227), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3346] = 2,
    ACTIONS(275), 1,
      sym_paragraph_stop,
    ACTIONS(219), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3378] = 2,
    ACTIONS(277), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(279), 24,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3410] = 1,
    ACTIONS(207), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3440] = 2,
    ACTIONS(281), 1,
      sym_paragraph_stop,
    ACTIONS(203), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3472] = 1,
    ACTIONS(231), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3502] = 2,
    ACTIONS(283), 1,
      sym_paragraph_stop,
    ACTIONS(215), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3534] = 1,
    ACTIONS(205), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3564] = 2,
    ACTIONS(285), 1,
      sym_paragraph_stop,
    ACTIONS(207), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3596] = 1,
    ACTIONS(243), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3626] = 1,
    ACTIONS(217), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3656] = 1,
    ACTIONS(221), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3686] = 1,
    ACTIONS(201), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3716] = 4,
    ACTIONS(287), 1,
      sym__eol,
    STATE(90), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(239), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(235), 22,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3751] = 2,
    ACTIONS(247), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(249), 23,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3782] = 2,
    ACTIONS(277), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(279), 23,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3813] = 2,
    ACTIONS(289), 1,
      sym_text,
    ACTIONS(291), 24,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3843] = 2,
    ACTIONS(277), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(279), 22,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3873] = 2,
    ACTIONS(295), 1,
      sym_text,
    ACTIONS(293), 24,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3903] = 2,
    ACTIONS(247), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(249), 22,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3933] = 2,
    ACTIONS(297), 1,
      sym_text,
    ACTIONS(299), 24,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3963] = 2,
    ACTIONS(297), 1,
      sym_text,
    ACTIONS(299), 23,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [3992] = 2,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(293), 22,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [4021] = 2,
    ACTIONS(301), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(303), 22,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [4050] = 2,
    ACTIONS(305), 1,
      sym_text,
    ACTIONS(307), 22,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [4078] = 2,
    ACTIONS(309), 1,
      sym_text,
    ACTIONS(311), 22,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [4106] = 2,
    ACTIONS(313), 1,
      sym_text,
    ACTIONS(315), 22,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [4134] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    STATE(190), 1,
      sym_title_value,
    ACTIONS(325), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(317), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(98), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4172] = 8,
    ACTIONS(332), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym_command_name,
    ACTIONS(346), 1,
      aux_sym_title_text_token1,
    ACTIONS(329), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(338), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(95), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4208] = 8,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      sym_command_name,
    ACTIONS(366), 1,
      aux_sym_title_text_token1,
    ACTIONS(349), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(358), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(96), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4244] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      aux_sym_title_text_token1,
    ACTIONS(373), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(369), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(95), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4279] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(379), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(377), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(96), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4314] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      aux_sym_title_text_token1,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(95), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4348] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      aux_sym_title_text_token1,
    STATE(186), 1,
      sym_value,
    ACTIONS(383), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(97), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4382] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(96), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4416] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    ACTIONS(387), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(101), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4450] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      aux_sym_title_text_token1,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    ACTIONS(391), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(99), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4484] = 2,
    STATE(48), 1,
      sym_escapechar,
    ACTIONS(395), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [4501] = 2,
    STATE(51), 1,
      sym_escapechar,
    ACTIONS(397), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [4518] = 9,
    ACTIONS(401), 1,
      sym_command_block_stop,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      aux_sym_keyword_token1,
    ACTIONS(407), 1,
      anon_sym_title,
    STATE(150), 1,
      sym_keyword,
    STATE(235), 1,
      sym__end_of_line,
    STATE(236), 1,
      sym_key,
    STATE(151), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(399), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4549] = 2,
    STATE(119), 1,
      sym_escapechar,
    ACTIONS(409), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [4566] = 2,
    STATE(169), 1,
      sym_escapechar,
    ACTIONS(411), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [4583] = 2,
    STATE(32), 1,
      sym_escapechar,
    ACTIONS(413), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [4600] = 1,
    ACTIONS(415), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4614] = 5,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      sym_command_block_start,
    ACTIONS(423), 1,
      sym_command_stop,
    ACTIONS(417), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(118), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4636] = 5,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      sym_command_block_start,
    ACTIONS(427), 1,
      sym_command_stop,
    ACTIONS(425), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(125), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4658] = 6,
    ACTIONS(429), 1,
      aux_sym_comment_token1,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    ACTIONS(437), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      sym_math_text,
    ACTIONS(432), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4682] = 1,
    ACTIONS(209), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4696] = 1,
    ACTIONS(443), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4710] = 5,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      sym_command_block_start,
    ACTIONS(447), 1,
      sym_command_stop,
    ACTIONS(445), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(127), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4732] = 5,
    ACTIONS(452), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      sym_command_block_start,
    ACTIONS(458), 1,
      sym_command_stop,
    ACTIONS(449), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(117), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4754] = 5,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      sym_command_block_start,
    ACTIONS(462), 1,
      sym_command_stop,
    ACTIONS(460), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(117), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4776] = 1,
    ACTIONS(213), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4790] = 1,
    ACTIONS(464), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4804] = 1,
    ACTIONS(229), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4818] = 1,
    ACTIONS(466), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4832] = 5,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      sym_command_block_start,
    ACTIONS(468), 1,
      sym_command_stop,
    ACTIONS(460), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(117), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4854] = 5,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      sym_command_block_start,
    ACTIONS(472), 1,
      sym_command_stop,
    ACTIONS(470), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(123), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4876] = 5,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      sym_command_block_start,
    ACTIONS(474), 1,
      sym_command_stop,
    ACTIONS(460), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(117), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4898] = 1,
    ACTIONS(476), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4912] = 5,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      sym_command_block_start,
    ACTIONS(478), 1,
      sym_command_stop,
    ACTIONS(460), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(117), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4934] = 1,
    ACTIONS(207), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4948] = 1,
    ACTIONS(480), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4962] = 1,
    ACTIONS(482), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4976] = 7,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(486), 1,
      sym_command_block_stop,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    STATE(172), 1,
      sym__end_of_line,
    STATE(236), 1,
      sym_key,
    STATE(182), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(484), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5001] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      sym_math_text,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5024] = 7,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    ACTIONS(502), 1,
      sym_command_block_stop,
    STATE(158), 1,
      sym__end_of_line,
    STATE(236), 1,
      sym_key,
    STATE(182), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(500), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5049] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    ACTIONS(506), 1,
      sym_math_text,
    STATE(132), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5072] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      sym_math_text,
    ACTIONS(508), 1,
      anon_sym_DOLLAR,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5095] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      sym_math_text,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5118] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      sym_math_text,
    ACTIONS(512), 1,
      anon_sym_DOLLAR,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5141] = 5,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(514), 1,
      sym_math_text,
    STATE(136), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5161] = 6,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    STATE(185), 1,
      sym__end_of_line,
    STATE(236), 1,
      sym_key,
    STATE(182), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(516), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5183] = 5,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(518), 1,
      sym_math_text,
    STATE(137), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5203] = 5,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(520), 1,
      sym_math_text,
    STATE(135), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5223] = 2,
    STATE(36), 1,
      sym_typing_stop,
    ACTIONS(522), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5236] = 2,
    STATE(56), 1,
      sym_typing_stop,
    ACTIONS(524), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5249] = 2,
    STATE(78), 1,
      sym_typing_stop,
    ACTIONS(526), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5262] = 2,
    STATE(46), 1,
      sym_metapost_stop,
    ACTIONS(528), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5274] = 4,
    ACTIONS(534), 1,
      sym_preamble_stop,
    STATE(197), 1,
      sym__end_of_line,
    ACTIONS(530), 2,
      sym_text,
      aux_sym_comment_token1,
    ACTIONS(532), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5290] = 2,
    STATE(67), 1,
      sym_metapost_stop,
    ACTIONS(536), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5302] = 1,
    ACTIONS(538), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5312] = 2,
    STATE(38), 1,
      sym_metapost_stop,
    ACTIONS(540), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5324] = 5,
    ACTIONS(544), 1,
      sym_command_block_stop,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_option_block_repeat1,
    STATE(226), 1,
      sym__end_of_line,
    ACTIONS(542), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5342] = 5,
    ACTIONS(550), 1,
      sym_command_block_stop,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_settings_block_repeat1,
    STATE(228), 1,
      sym__end_of_line,
    ACTIONS(548), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5360] = 5,
    ACTIONS(556), 1,
      sym_command_block_stop,
    ACTIONS(558), 1,
      aux_sym_keyword_token1,
    STATE(188), 1,
      sym_keyword,
    STATE(198), 1,
      sym__end_of_line,
    ACTIONS(554), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5378] = 5,
    ACTIONS(556), 1,
      sym_command_block_stop,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_option_block_repeat1,
    STATE(225), 1,
      sym__end_of_line,
    ACTIONS(560), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5396] = 5,
    ACTIONS(558), 1,
      aux_sym_keyword_token1,
    ACTIONS(566), 1,
      sym_command_block_stop,
    STATE(188), 1,
      sym_keyword,
    STATE(196), 1,
      sym__end_of_line,
    ACTIONS(564), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5414] = 5,
    ACTIONS(502), 1,
      sym_command_block_stop,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_settings_block_repeat1,
    STATE(230), 1,
      sym__end_of_line,
    ACTIONS(568), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5432] = 1,
    ACTIONS(443), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5441] = 1,
    ACTIONS(572), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5450] = 5,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    ACTIONS(574), 1,
      sym_command_block_stop,
    STATE(236), 1,
      sym_key,
    STATE(187), 2,
      sym_setting,
      sym_title_setting,
  [5467] = 2,
    ACTIONS(578), 1,
      sym_command_stop,
    ACTIONS(576), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5478] = 3,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(580), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5491] = 2,
    ACTIONS(587), 1,
      sym_command_stop,
    ACTIONS(585), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5502] = 2,
    ACTIONS(578), 1,
      sym_command_stop,
    ACTIONS(576), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5513] = 2,
    ACTIONS(591), 1,
      sym_command_stop,
    ACTIONS(589), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5524] = 2,
    ACTIONS(595), 1,
      sym_command_stop,
    ACTIONS(593), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5535] = 2,
    ACTIONS(597), 1,
      sym_command_stop,
    ACTIONS(443), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5546] = 1,
    ACTIONS(209), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5555] = 2,
    ACTIONS(601), 1,
      sym_command_stop,
    ACTIONS(599), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5566] = 2,
    ACTIONS(591), 1,
      sym_command_stop,
    ACTIONS(589), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5577] = 1,
    ACTIONS(213), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5586] = 3,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(603), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5599] = 5,
    ACTIONS(608), 1,
      sym_text,
    ACTIONS(611), 1,
      aux_sym_comment_token1,
    ACTIONS(614), 1,
      sym_preamble_stop,
    STATE(192), 1,
      sym_comment,
    STATE(171), 2,
      sym_preamble_content,
      aux_sym_preamble_repeat1,
  [5616] = 5,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    ACTIONS(616), 1,
      sym_command_block_stop,
    STATE(236), 1,
      sym_key,
    STATE(187), 2,
      sym_setting,
      sym_title_setting,
  [5633] = 2,
    ACTIONS(620), 1,
      anon_sym_EQ,
    ACTIONS(618), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5644] = 2,
    ACTIONS(624), 1,
      sym_command_stop,
    ACTIONS(622), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5655] = 1,
    ACTIONS(626), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5664] = 5,
    ACTIONS(3), 1,
      sym_text,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(628), 1,
      sym_preamble_stop,
    STATE(192), 1,
      sym_comment,
    STATE(171), 2,
      sym_preamble_content,
      aux_sym_preamble_repeat1,
  [5681] = 2,
    ACTIONS(632), 1,
      sym_command_stop,
    ACTIONS(630), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5692] = 2,
    ACTIONS(636), 1,
      sym_command_stop,
    ACTIONS(634), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5703] = 2,
    ACTIONS(640), 1,
      sym_command_stop,
    ACTIONS(638), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5714] = 1,
    ACTIONS(642), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5723] = 4,
    ACTIONS(558), 1,
      aux_sym_keyword_token1,
    STATE(188), 1,
      sym_keyword,
    STATE(209), 1,
      sym__end_of_line,
    ACTIONS(644), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5738] = 1,
    ACTIONS(603), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5746] = 3,
    ACTIONS(648), 1,
      sym_command_block_stop,
    STATE(224), 1,
      sym__end_of_line,
    ACTIONS(646), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5758] = 1,
    ACTIONS(650), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5766] = 4,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    STATE(236), 1,
      sym_key,
    STATE(187), 2,
      sym_setting,
      sym_title_setting,
  [5780] = 1,
    ACTIONS(652), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5788] = 1,
    ACTIONS(654), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5796] = 1,
    ACTIONS(580), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5804] = 1,
    ACTIONS(618), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5812] = 1,
    ACTIONS(656), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5820] = 3,
    STATE(11), 1,
      sym_main,
    STATE(13), 1,
      sym_main_start,
    ACTIONS(658), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
  [5831] = 2,
    STATE(197), 1,
      sym__end_of_line,
    ACTIONS(532), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5840] = 2,
    STATE(90), 1,
      sym__end_of_line,
    ACTIONS(237), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5849] = 2,
    STATE(88), 1,
      sym__end_of_line,
    ACTIONS(233), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5858] = 2,
    STATE(87), 1,
      sym__end_of_line,
    ACTIONS(199), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5867] = 3,
    ACTIONS(660), 1,
      sym_command_block_stop,
    ACTIONS(662), 1,
      aux_sym_keyword_token1,
    STATE(184), 1,
      sym_keyword,
  [5877] = 2,
    ACTIONS(666), 1,
      aux_sym_comment_token1,
    ACTIONS(664), 2,
      sym_preamble_stop,
      sym_text,
  [5885] = 3,
    ACTIONS(662), 1,
      aux_sym_keyword_token1,
    ACTIONS(668), 1,
      sym_command_block_stop,
    STATE(184), 1,
      sym_keyword,
  [5895] = 2,
    ACTIONS(670), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(76), 1,
      sym_tikz_stop,
  [5902] = 2,
    ACTIONS(672), 1,
      anon_sym_BSLASHstopHTML,
    STATE(28), 1,
      sym_typing_html_stop,
  [5909] = 2,
    ACTIONS(674), 1,
      aux_sym_metapost_body_token1,
    STATE(200), 1,
      sym_typing_html_body,
  [5916] = 2,
    ACTIONS(676), 1,
      aux_sym_metapost_body_token1,
    STATE(142), 1,
      sym_typing_body,
  [5923] = 2,
    ACTIONS(678), 1,
      aux_sym_metapost_body_token1,
    STATE(219), 1,
      sym_tikz_body,
  [5930] = 2,
    ACTIONS(680), 1,
      aux_sym_metapost_body_token1,
    STATE(149), 1,
      sym_metapost_body,
  [5937] = 2,
    ACTIONS(682), 1,
      anon_sym_BSLASHstopHTML,
    STATE(45), 1,
      sym_typing_html_stop,
  [5944] = 2,
    ACTIONS(674), 1,
      aux_sym_metapost_body_token1,
    STATE(211), 1,
      sym_typing_html_body,
  [5951] = 2,
    ACTIONS(684), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(65), 1,
      sym_tikz_stop,
  [5958] = 2,
    ACTIONS(676), 1,
      aux_sym_metapost_body_token1,
    STATE(144), 1,
      sym_typing_body,
  [5965] = 2,
    ACTIONS(662), 1,
      aux_sym_keyword_token1,
    STATE(184), 1,
      sym_keyword,
  [5972] = 2,
    ACTIONS(678), 1,
      aux_sym_metapost_body_token1,
    STATE(199), 1,
      sym_tikz_body,
  [5979] = 2,
    ACTIONS(686), 1,
      anon_sym_BSLASHstopHTML,
    STATE(74), 1,
      sym_typing_html_stop,
  [5986] = 2,
    ACTIONS(680), 1,
      aux_sym_metapost_body_token1,
    STATE(145), 1,
      sym_metapost_body,
  [5993] = 2,
    ACTIONS(674), 1,
      aux_sym_metapost_body_token1,
    STATE(205), 1,
      sym_typing_html_body,
  [6000] = 2,
    ACTIONS(676), 1,
      aux_sym_metapost_body_token1,
    STATE(143), 1,
      sym_typing_body,
  [6007] = 2,
    ACTIONS(678), 1,
      aux_sym_metapost_body_token1,
    STATE(207), 1,
      sym_tikz_body,
  [6014] = 2,
    ACTIONS(680), 1,
      aux_sym_metapost_body_token1,
    STATE(147), 1,
      sym_metapost_body,
  [6021] = 1,
    ACTIONS(688), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
  [6026] = 1,
    ACTIONS(690), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
  [6031] = 2,
    ACTIONS(692), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(44), 1,
      sym_tikz_stop,
  [6038] = 1,
    ACTIONS(694), 1,
      aux_sym_metapost_body_token1,
  [6042] = 1,
    ACTIONS(696), 1,
      aux_sym_metapost_body_token1,
  [6046] = 1,
    ACTIONS(698), 1,
      aux_sym_metapost_body_token1,
  [6050] = 1,
    ACTIONS(700), 1,
      aux_sym_metapost_body_token1,
  [6054] = 1,
    ACTIONS(702), 1,
      sym_command_block_stop,
  [6058] = 1,
    ACTIONS(668), 1,
      sym_command_block_stop,
  [6062] = 1,
    ACTIONS(704), 1,
      sym_command_block_stop,
  [6066] = 1,
    ACTIONS(706), 1,
      anon_sym_EQ,
  [6070] = 1,
    ACTIONS(708), 1,
      sym_command_block_stop,
  [6074] = 1,
    ACTIONS(710), 1,
      ts_builtin_sym_end,
  [6078] = 1,
    ACTIONS(574), 1,
      sym_command_block_stop,
  [6082] = 1,
    ACTIONS(712), 1,
      anon_sym_BSLASHstoptikzpicture,
  [6086] = 1,
    ACTIONS(714), 1,
      ts_builtin_sym_end,
  [6090] = 1,
    ACTIONS(716), 1,
      anon_sym_BSLASHstopHTML,
  [6094] = 1,
    ACTIONS(718), 1,
      anon_sym_EQ,
  [6098] = 1,
    ACTIONS(720), 1,
      sym_command_block_stop,
  [6102] = 1,
    ACTIONS(722), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 181,
  [SMALL_STATE(5)] = 269,
  [SMALL_STATE(6)] = 357,
  [SMALL_STATE(7)] = 445,
  [SMALL_STATE(8)] = 533,
  [SMALL_STATE(9)] = 621,
  [SMALL_STATE(10)] = 709,
  [SMALL_STATE(11)] = 797,
  [SMALL_STATE(12)] = 885,
  [SMALL_STATE(13)] = 973,
  [SMALL_STATE(14)] = 1058,
  [SMALL_STATE(15)] = 1143,
  [SMALL_STATE(16)] = 1227,
  [SMALL_STATE(17)] = 1311,
  [SMALL_STATE(18)] = 1395,
  [SMALL_STATE(19)] = 1479,
  [SMALL_STATE(20)] = 1563,
  [SMALL_STATE(21)] = 1647,
  [SMALL_STATE(22)] = 1731,
  [SMALL_STATE(23)] = 1815,
  [SMALL_STATE(24)] = 1899,
  [SMALL_STATE(25)] = 1983,
  [SMALL_STATE(26)] = 2019,
  [SMALL_STATE(27)] = 2050,
  [SMALL_STATE(28)] = 2081,
  [SMALL_STATE(29)] = 2112,
  [SMALL_STATE(30)] = 2143,
  [SMALL_STATE(31)] = 2174,
  [SMALL_STATE(32)] = 2205,
  [SMALL_STATE(33)] = 2236,
  [SMALL_STATE(34)] = 2267,
  [SMALL_STATE(35)] = 2298,
  [SMALL_STATE(36)] = 2329,
  [SMALL_STATE(37)] = 2360,
  [SMALL_STATE(38)] = 2397,
  [SMALL_STATE(39)] = 2428,
  [SMALL_STATE(40)] = 2459,
  [SMALL_STATE(41)] = 2490,
  [SMALL_STATE(42)] = 2525,
  [SMALL_STATE(43)] = 2562,
  [SMALL_STATE(44)] = 2593,
  [SMALL_STATE(45)] = 2624,
  [SMALL_STATE(46)] = 2656,
  [SMALL_STATE(47)] = 2686,
  [SMALL_STATE(48)] = 2716,
  [SMALL_STATE(49)] = 2746,
  [SMALL_STATE(50)] = 2778,
  [SMALL_STATE(51)] = 2810,
  [SMALL_STATE(52)] = 2842,
  [SMALL_STATE(53)] = 2874,
  [SMALL_STATE(54)] = 2904,
  [SMALL_STATE(55)] = 2940,
  [SMALL_STATE(56)] = 2972,
  [SMALL_STATE(57)] = 3004,
  [SMALL_STATE(58)] = 3034,
  [SMALL_STATE(59)] = 3066,
  [SMALL_STATE(60)] = 3098,
  [SMALL_STATE(61)] = 3128,
  [SMALL_STATE(62)] = 3158,
  [SMALL_STATE(63)] = 3190,
  [SMALL_STATE(64)] = 3220,
  [SMALL_STATE(65)] = 3250,
  [SMALL_STATE(66)] = 3282,
  [SMALL_STATE(67)] = 3314,
  [SMALL_STATE(68)] = 3346,
  [SMALL_STATE(69)] = 3378,
  [SMALL_STATE(70)] = 3410,
  [SMALL_STATE(71)] = 3440,
  [SMALL_STATE(72)] = 3472,
  [SMALL_STATE(73)] = 3502,
  [SMALL_STATE(74)] = 3534,
  [SMALL_STATE(75)] = 3564,
  [SMALL_STATE(76)] = 3596,
  [SMALL_STATE(77)] = 3626,
  [SMALL_STATE(78)] = 3656,
  [SMALL_STATE(79)] = 3686,
  [SMALL_STATE(80)] = 3716,
  [SMALL_STATE(81)] = 3751,
  [SMALL_STATE(82)] = 3782,
  [SMALL_STATE(83)] = 3813,
  [SMALL_STATE(84)] = 3843,
  [SMALL_STATE(85)] = 3873,
  [SMALL_STATE(86)] = 3903,
  [SMALL_STATE(87)] = 3933,
  [SMALL_STATE(88)] = 3963,
  [SMALL_STATE(89)] = 3992,
  [SMALL_STATE(90)] = 4021,
  [SMALL_STATE(91)] = 4050,
  [SMALL_STATE(92)] = 4078,
  [SMALL_STATE(93)] = 4106,
  [SMALL_STATE(94)] = 4134,
  [SMALL_STATE(95)] = 4172,
  [SMALL_STATE(96)] = 4208,
  [SMALL_STATE(97)] = 4244,
  [SMALL_STATE(98)] = 4279,
  [SMALL_STATE(99)] = 4314,
  [SMALL_STATE(100)] = 4348,
  [SMALL_STATE(101)] = 4382,
  [SMALL_STATE(102)] = 4416,
  [SMALL_STATE(103)] = 4450,
  [SMALL_STATE(104)] = 4484,
  [SMALL_STATE(105)] = 4501,
  [SMALL_STATE(106)] = 4518,
  [SMALL_STATE(107)] = 4549,
  [SMALL_STATE(108)] = 4566,
  [SMALL_STATE(109)] = 4583,
  [SMALL_STATE(110)] = 4600,
  [SMALL_STATE(111)] = 4614,
  [SMALL_STATE(112)] = 4636,
  [SMALL_STATE(113)] = 4658,
  [SMALL_STATE(114)] = 4682,
  [SMALL_STATE(115)] = 4696,
  [SMALL_STATE(116)] = 4710,
  [SMALL_STATE(117)] = 4732,
  [SMALL_STATE(118)] = 4754,
  [SMALL_STATE(119)] = 4776,
  [SMALL_STATE(120)] = 4790,
  [SMALL_STATE(121)] = 4804,
  [SMALL_STATE(122)] = 4818,
  [SMALL_STATE(123)] = 4832,
  [SMALL_STATE(124)] = 4854,
  [SMALL_STATE(125)] = 4876,
  [SMALL_STATE(126)] = 4898,
  [SMALL_STATE(127)] = 4912,
  [SMALL_STATE(128)] = 4934,
  [SMALL_STATE(129)] = 4948,
  [SMALL_STATE(130)] = 4962,
  [SMALL_STATE(131)] = 4976,
  [SMALL_STATE(132)] = 5001,
  [SMALL_STATE(133)] = 5024,
  [SMALL_STATE(134)] = 5049,
  [SMALL_STATE(135)] = 5072,
  [SMALL_STATE(136)] = 5095,
  [SMALL_STATE(137)] = 5118,
  [SMALL_STATE(138)] = 5141,
  [SMALL_STATE(139)] = 5161,
  [SMALL_STATE(140)] = 5183,
  [SMALL_STATE(141)] = 5203,
  [SMALL_STATE(142)] = 5223,
  [SMALL_STATE(143)] = 5236,
  [SMALL_STATE(144)] = 5249,
  [SMALL_STATE(145)] = 5262,
  [SMALL_STATE(146)] = 5274,
  [SMALL_STATE(147)] = 5290,
  [SMALL_STATE(148)] = 5302,
  [SMALL_STATE(149)] = 5312,
  [SMALL_STATE(150)] = 5324,
  [SMALL_STATE(151)] = 5342,
  [SMALL_STATE(152)] = 5360,
  [SMALL_STATE(153)] = 5378,
  [SMALL_STATE(154)] = 5396,
  [SMALL_STATE(155)] = 5414,
  [SMALL_STATE(156)] = 5432,
  [SMALL_STATE(157)] = 5441,
  [SMALL_STATE(158)] = 5450,
  [SMALL_STATE(159)] = 5467,
  [SMALL_STATE(160)] = 5478,
  [SMALL_STATE(161)] = 5491,
  [SMALL_STATE(162)] = 5502,
  [SMALL_STATE(163)] = 5513,
  [SMALL_STATE(164)] = 5524,
  [SMALL_STATE(165)] = 5535,
  [SMALL_STATE(166)] = 5546,
  [SMALL_STATE(167)] = 5555,
  [SMALL_STATE(168)] = 5566,
  [SMALL_STATE(169)] = 5577,
  [SMALL_STATE(170)] = 5586,
  [SMALL_STATE(171)] = 5599,
  [SMALL_STATE(172)] = 5616,
  [SMALL_STATE(173)] = 5633,
  [SMALL_STATE(174)] = 5644,
  [SMALL_STATE(175)] = 5655,
  [SMALL_STATE(176)] = 5664,
  [SMALL_STATE(177)] = 5681,
  [SMALL_STATE(178)] = 5692,
  [SMALL_STATE(179)] = 5703,
  [SMALL_STATE(180)] = 5714,
  [SMALL_STATE(181)] = 5723,
  [SMALL_STATE(182)] = 5738,
  [SMALL_STATE(183)] = 5746,
  [SMALL_STATE(184)] = 5758,
  [SMALL_STATE(185)] = 5766,
  [SMALL_STATE(186)] = 5780,
  [SMALL_STATE(187)] = 5788,
  [SMALL_STATE(188)] = 5796,
  [SMALL_STATE(189)] = 5804,
  [SMALL_STATE(190)] = 5812,
  [SMALL_STATE(191)] = 5820,
  [SMALL_STATE(192)] = 5831,
  [SMALL_STATE(193)] = 5840,
  [SMALL_STATE(194)] = 5849,
  [SMALL_STATE(195)] = 5858,
  [SMALL_STATE(196)] = 5867,
  [SMALL_STATE(197)] = 5877,
  [SMALL_STATE(198)] = 5885,
  [SMALL_STATE(199)] = 5895,
  [SMALL_STATE(200)] = 5902,
  [SMALL_STATE(201)] = 5909,
  [SMALL_STATE(202)] = 5916,
  [SMALL_STATE(203)] = 5923,
  [SMALL_STATE(204)] = 5930,
  [SMALL_STATE(205)] = 5937,
  [SMALL_STATE(206)] = 5944,
  [SMALL_STATE(207)] = 5951,
  [SMALL_STATE(208)] = 5958,
  [SMALL_STATE(209)] = 5965,
  [SMALL_STATE(210)] = 5972,
  [SMALL_STATE(211)] = 5979,
  [SMALL_STATE(212)] = 5986,
  [SMALL_STATE(213)] = 5993,
  [SMALL_STATE(214)] = 6000,
  [SMALL_STATE(215)] = 6007,
  [SMALL_STATE(216)] = 6014,
  [SMALL_STATE(217)] = 6021,
  [SMALL_STATE(218)] = 6026,
  [SMALL_STATE(219)] = 6031,
  [SMALL_STATE(220)] = 6038,
  [SMALL_STATE(221)] = 6042,
  [SMALL_STATE(222)] = 6046,
  [SMALL_STATE(223)] = 6050,
  [SMALL_STATE(224)] = 6054,
  [SMALL_STATE(225)] = 6058,
  [SMALL_STATE(226)] = 6062,
  [SMALL_STATE(227)] = 6066,
  [SMALL_STATE(228)] = 6070,
  [SMALL_STATE(229)] = 6074,
  [SMALL_STATE(230)] = 6078,
  [SMALL_STATE(231)] = 6082,
  [SMALL_STATE(232)] = 6086,
  [SMALL_STATE(233)] = 6090,
  [SMALL_STATE(234)] = 6094,
  [SMALL_STATE(235)] = 6098,
  [SMALL_STATE(236)] = 6102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(42),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(115),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(138),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(83),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(105),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(223),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(221),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(222),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(220),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(111),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postamble, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(25),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(115),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(141),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(83),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(109),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(16),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(223),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(221),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(222),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(220),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(112),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(41),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(140),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(104),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(18),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(124),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(42),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(115),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(138),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(83),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(105),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(20),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(223),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(221),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(222),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(220),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(111),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_start, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(95),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(115),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(103),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(107),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(116),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(120),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(96),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(115),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(102),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(107),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(116),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(110),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(156),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(134),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(108),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(113),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(117),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(165),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(106),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble_content, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble_content, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(181),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(139),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2), SHIFT_REPEAT(146),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_preamble_repeat1, 2), SHIFT_REPEAT(115),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble_content, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble_content, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [714] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_context_external_scanner_create(void);
void tree_sitter_context_external_scanner_destroy(void *);
bool tree_sitter_context_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_context_external_scanner_serialize(void *, char *);
void tree_sitter_context_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_context(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_context_external_scanner_create,
      tree_sitter_context_external_scanner_destroy,
      tree_sitter_context_external_scanner_scan,
      tree_sitter_context_external_scanner_serialize,
      tree_sitter_context_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
