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
#define STATE_COUNT 234
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_preamble_token1 = 1,
  aux_sym_postamble_token1 = 2,
  anon_sym_BSLASHstarttext = 3,
  anon_sym_BSLASHstartcomponent = 4,
  anon_sym_BSLASHstoptext = 5,
  anon_sym_BSLASHstopcomponent = 6,
  sym_text = 7,
  anon_sym_LF = 8,
  anon_sym_CR = 9,
  anon_sym_CR_LF = 10,
  aux_sym_comment_token1 = 11,
  anon_sym_POUND = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_PERCENT = 14,
  anon_sym_AMP = 15,
  anon_sym_CARET = 16,
  anon_sym__ = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_PIPE = 20,
  anon_sym_TILDE = 21,
  anon_sym_BSLASH = 22,
  anon_sym_BSLASHbgroup = 23,
  anon_sym_BSLASHegroup = 24,
  sym_command_group_start = 25,
  sym_command_group_stop = 26,
  sym_math_text = 27,
  anon_sym_BSLASHstartMPinclusions = 28,
  anon_sym_BSLASHstartuseMPgraphic = 29,
  anon_sym_BSLASHstartreusableMPgraphic = 30,
  anon_sym_BSLASHstartMPcode = 31,
  anon_sym_BSLASHstartMPpage = 32,
  anon_sym_BSLASHstartstaticMPfigure = 33,
  anon_sym_BSLASHstopMPinclusions = 34,
  anon_sym_BSLASHstopuseMPgraphic = 35,
  anon_sym_BSLASHstopreusableMPgraphic = 36,
  anon_sym_BSLASHstopMPcode = 37,
  anon_sym_BSLASHstopMPpage = 38,
  anon_sym_BSLASHstopstaticMPfigure = 39,
  anon_sym_BSLASHstarttikzpicture = 40,
  anon_sym_BSLASHstoptikzpicture = 41,
  anon_sym_BSLASHstarttyping = 42,
  anon_sym_BSLASHstartLUA = 43,
  anon_sym_BSLASHstartMP = 44,
  anon_sym_BSLASHstartPARSEDXML = 45,
  anon_sym_BSLASHstartTEX = 46,
  anon_sym_BSLASHstartXML = 47,
  anon_sym_BSLASHstartCSS = 48,
  anon_sym_BSLASHstoptyping = 49,
  anon_sym_BSLASHstopLUA = 50,
  anon_sym_BSLASHstopMP = 51,
  anon_sym_BSLASHstopPARSEDXML = 52,
  anon_sym_BSLASHstopTEX = 53,
  anon_sym_BSLASHstopXML = 54,
  anon_sym_BSLASHstopCSS = 55,
  anon_sym_BSLASHstartHTML = 56,
  anon_sym_BSLASHstopHTML = 57,
  sym_command_name = 58,
  sym_command_block_start = 59,
  sym_command_block_stop = 60,
  anon_sym_COMMA = 61,
  aux_sym_keyword_token1 = 62,
  anon_sym_EQ = 63,
  anon_sym_title = 64,
  aux_sym_title_text_token1 = 65,
  sym_command_stop = 66,
  sym_paragraph_stop = 67,
  sym__eol = 68,
  sym_preamble_stop = 69,
  sym_document = 70,
  sym_preamble = 71,
  sym_main = 72,
  sym_postamble = 73,
  sym_main_start = 74,
  sym_main_stop = 75,
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
  aux_sym_main_repeat1 = 122,
  aux_sym_postamble_repeat1 = 123,
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
  [aux_sym_preamble_token1] = "preamble_token1",
  [aux_sym_postamble_token1] = "postamble_token1",
  [anon_sym_BSLASHstarttext] = "\\starttext",
  [anon_sym_BSLASHstartcomponent] = "\\startcomponent",
  [anon_sym_BSLASHstoptext] = "\\stoptext",
  [anon_sym_BSLASHstopcomponent] = "\\stopcomponent",
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
  [sym_preamble] = "preamble",
  [sym_main] = "main",
  [sym_postamble] = "postamble",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
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
  [aux_sym_main_repeat1] = "main_repeat1",
  [aux_sym_postamble_repeat1] = "postamble_repeat1",
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
  [aux_sym_preamble_token1] = aux_sym_preamble_token1,
  [aux_sym_postamble_token1] = aux_sym_postamble_token1,
  [anon_sym_BSLASHstarttext] = anon_sym_BSLASHstarttext,
  [anon_sym_BSLASHstartcomponent] = anon_sym_BSLASHstartcomponent,
  [anon_sym_BSLASHstoptext] = anon_sym_BSLASHstoptext,
  [anon_sym_BSLASHstopcomponent] = anon_sym_BSLASHstopcomponent,
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
  [sym_preamble] = sym_preamble,
  [sym_main] = sym_main,
  [sym_postamble] = sym_postamble,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
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
  [aux_sym_main_repeat1] = aux_sym_main_repeat1,
  [aux_sym_postamble_repeat1] = aux_sym_postamble_repeat1,
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
  [aux_sym_preamble_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postamble_token1] = {
    .visible = false,
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
  [anon_sym_BSLASHstoptext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopcomponent] = {
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
  [sym_main_start] = {
    .visible = true,
    .named = true,
  },
  [sym_main_stop] = {
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
  [aux_sym_main_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postamble_repeat1] = {
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
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '&') ADVANCE(154);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '=') ADVANCE(359);
      if (lookahead == '[') ADVANCE(351);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == ']') ADVANCE(352);
      if (lookahead == '^') ADVANCE(155);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(157);
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
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(145);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(145);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(145);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '[') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '%') ADVANCE(147);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead == ']') ADVANCE(352);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(362);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '=') ADVANCE(359);
      if (lookahead == ']') ADVANCE(352);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(358);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == ']') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(358);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '&') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead == '^') ADVANCE(155);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '~') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(199);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'L') ADVANCE(40);
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'P') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == 'X') ADVANCE(23);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(203);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(206);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(201);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(200);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(204);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'U') ADVANCE(15);
      END_STATE();
    case 41:
      if (lookahead == 'X') ADVANCE(202);
      END_STATE();
    case 42:
      if (lookahead == 'X') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(352);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(358);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(358);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(122);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == 'z') ADVANCE(100);
      END_STATE();
    case 123:
      if (eof) ADVANCE(125);
      if (lookahead == '\n') SKIP(123)
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead == '&' ||
          ('[' <= lookahead && lookahead <= '_') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 124:
      if (eof) ADVANCE(125);
      if (lookahead == '\n') SKIP(124)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_preamble_token1);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '$') ADVANCE(152);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead == '&' ||
          lookahead == '[' ||
          (']' <= lookahead && lookahead <= '_') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_preamble_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_preamble_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_preamble_token1);
      if (lookahead == '\n' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '[' ||
          (']' <= lookahead && lookahead <= '_') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_preamble_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_postamble_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_postamble_token1);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead == '&' ||
          ('[' <= lookahead && lookahead <= '_') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_postamble_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_postamble_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_postamble_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(149);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(149);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(130);
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
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 's') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 's') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 's') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 's') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 's') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 's') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(227);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(192);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == 'M') ADVANCE(223);
      if (lookahead == 'P') ADVANCE(207);
      if (lookahead == 'T') ADVANCE(212);
      if (lookahead == 'X') ADVANCE(217);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == 'u') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == 'M') ADVANCE(223);
      if (lookahead == 'P') ADVANCE(207);
      if (lookahead == 'T') ADVANCE(212);
      if (lookahead == 'X') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(296);
      if (lookahead == 't') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(296);
      if (lookahead == 't') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'y') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'y') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(358);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(362);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 126},
  [2] = {.lex_state = 123},
  [3] = {.lex_state = 123},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 123},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 11, .external_lex_state = 2},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 11, .external_lex_state = 2},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 4, .external_lex_state = 2},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2, .external_lex_state = 3},
  [43] = {.lex_state = 10, .external_lex_state = 3},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 4, .external_lex_state = 2},
  [49] = {.lex_state = 2, .external_lex_state = 3},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 2, .external_lex_state = 3},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 4, .external_lex_state = 2},
  [54] = {.lex_state = 4, .external_lex_state = 2},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 123},
  [63] = {.lex_state = 4, .external_lex_state = 2},
  [64] = {.lex_state = 4, .external_lex_state = 2},
  [65] = {.lex_state = 4, .external_lex_state = 2},
  [66] = {.lex_state = 4, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 2},
  [68] = {.lex_state = 4, .external_lex_state = 2},
  [69] = {.lex_state = 4, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 4, .external_lex_state = 2},
  [75] = {.lex_state = 4, .external_lex_state = 2},
  [76] = {.lex_state = 4, .external_lex_state = 2},
  [77] = {.lex_state = 4, .external_lex_state = 2},
  [78] = {.lex_state = 4, .external_lex_state = 2},
  [79] = {.lex_state = 10, .external_lex_state = 3},
  [80] = {.lex_state = 11, .external_lex_state = 3},
  [81] = {.lex_state = 10, .external_lex_state = 3},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 11, .external_lex_state = 3},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 11, .external_lex_state = 3},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 11, .external_lex_state = 2},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 6, .external_lex_state = 4},
  [109] = {.lex_state = 6, .external_lex_state = 4},
  [110] = {.lex_state = 6, .external_lex_state = 4},
  [111] = {.lex_state = 6, .external_lex_state = 4},
  [112] = {.lex_state = 6, .external_lex_state = 4},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 6, .external_lex_state = 4},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 6, .external_lex_state = 4},
  [123] = {.lex_state = 6, .external_lex_state = 4},
  [124] = {.lex_state = 6, .external_lex_state = 4},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 43},
  [139] = {.lex_state = 43},
  [140] = {.lex_state = 43},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 43},
  [146] = {.lex_state = 44},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 44},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 6, .external_lex_state = 4},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 6, .external_lex_state = 4},
  [155] = {.lex_state = 6, .external_lex_state = 4},
  [156] = {.lex_state = 45},
  [157] = {.lex_state = 6, .external_lex_state = 4},
  [158] = {.lex_state = 6, .external_lex_state = 4},
  [159] = {.lex_state = 44},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 6, .external_lex_state = 4},
  [164] = {.lex_state = 6, .external_lex_state = 4},
  [165] = {.lex_state = 6, .external_lex_state = 4},
  [166] = {.lex_state = 45},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 6, .external_lex_state = 4},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 6, .external_lex_state = 4},
  [171] = {.lex_state = 6, .external_lex_state = 4},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 45},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 124},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 124},
  [189] = {.lex_state = 46},
  [190] = {.lex_state = 46},
  [191] = {.lex_state = 124},
  [192] = {.lex_state = 124},
  [193] = {.lex_state = 124},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 128},
  [196] = {.lex_state = 128},
  [197] = {.lex_state = 128},
  [198] = {.lex_state = 46},
  [199] = {.lex_state = 128},
  [200] = {.lex_state = 124},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 128},
  [203] = {.lex_state = 43},
  [204] = {.lex_state = 128},
  [205] = {.lex_state = 128},
  [206] = {.lex_state = 43},
  [207] = {.lex_state = 43},
  [208] = {.lex_state = 43},
  [209] = {.lex_state = 124},
  [210] = {.lex_state = 128},
  [211] = {.lex_state = 128},
  [212] = {.lex_state = 128},
  [213] = {.lex_state = 128},
  [214] = {.lex_state = 128},
  [215] = {.lex_state = 0, .external_lex_state = 5},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 43},
  [220] = {.lex_state = 43},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 128},
  [223] = {.lex_state = 128},
  [224] = {.lex_state = 128},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 128},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
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
    [ts_external_token_paragraph_stop] = true,
  },
  [3] = {
    [ts_external_token_paragraph_stop] = true,
    [ts_external_token__eol] = true,
  },
  [4] = {
    [ts_external_token_command_stop] = true,
  },
  [5] = {
    [ts_external_token_preamble_stop] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASHstarttext] = ACTIONS(1),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(1),
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
    [sym_document] = STATE(221),
    [sym_preamble] = STATE(4),
    [sym_main] = STATE(188),
    [sym_main_start] = STATE(12),
    [sym_paragraph] = STATE(2),
    [sym__paragraph_content] = STATE(20),
    [sym_comment] = STATE(186),
    [sym_escaped] = STATE(26),
    [sym_brace_group_start] = STATE(8),
    [sym_brace_group] = STATE(26),
    [sym_command_group] = STATE(80),
    [sym_inline_math] = STATE(26),
    [sym_metapost_start] = STATE(199),
    [sym_metapost_inclusion] = STATE(26),
    [sym_tikz_start] = STATE(214),
    [sym_tikz_inclusion] = STATE(26),
    [sym_typing_start] = STATE(213),
    [sym_typing_inclusion] = STATE(26),
    [sym_typing_html_start] = STATE(212),
    [sym_typing_html_inclusion] = STATE(26),
    [sym_command] = STATE(26),
    [aux_sym_main_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(20),
    [aux_sym_preamble_token1] = ACTIONS(3),
    [anon_sym_BSLASHstarttext] = ACTIONS(5),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_BSLASHbgroup] = ACTIONS(13),
    [sym_command_group_start] = ACTIONS(17),
    [anon_sym_BSLASHstartMPinclusions] = ACTIONS(19),
    [anon_sym_BSLASHstartuseMPgraphic] = ACTIONS(19),
    [anon_sym_BSLASHstartreusableMPgraphic] = ACTIONS(19),
    [anon_sym_BSLASHstartMPcode] = ACTIONS(19),
    [anon_sym_BSLASHstartMPpage] = ACTIONS(19),
    [anon_sym_BSLASHstartstaticMPfigure] = ACTIONS(19),
    [anon_sym_BSLASHstarttikzpicture] = ACTIONS(21),
    [anon_sym_BSLASHstarttyping] = ACTIONS(23),
    [anon_sym_BSLASHstartLUA] = ACTIONS(23),
    [anon_sym_BSLASHstartMP] = ACTIONS(23),
    [anon_sym_BSLASHstartPARSEDXML] = ACTIONS(23),
    [anon_sym_BSLASHstartTEX] = ACTIONS(23),
    [anon_sym_BSLASHstartXML] = ACTIONS(23),
    [anon_sym_BSLASHstartCSS] = ACTIONS(23),
    [anon_sym_BSLASHstartHTML] = ACTIONS(25),
    [sym_command_name] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(7), 1,
      sym_text,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      sym_command_group_start,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(27), 1,
      sym_command_name,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_postamble_token1,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(186), 1,
      sym_comment,
    STATE(193), 1,
      sym_main_stop,
    STATE(199), 1,
      sym_metapost_start,
    STATE(212), 1,
      sym_typing_html_start,
    STATE(213), 1,
      sym_typing_start,
    STATE(214), 1,
      sym_tikz_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(5), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(20), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(26), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [98] = 25,
    ACTIONS(7), 1,
      sym_text,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      sym_command_group_start,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(27), 1,
      sym_command_name,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_postamble_token1,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(186), 1,
      sym_comment,
    STATE(199), 1,
      sym_metapost_start,
    STATE(209), 1,
      sym_main_stop,
    STATE(212), 1,
      sym_typing_html_start,
    STATE(213), 1,
      sym_typing_start,
    STATE(214), 1,
      sym_tikz_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(5), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(20), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(26), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [196] = 24,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      sym_command_group_start,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(27), 1,
      sym_command_name,
    ACTIONS(39), 1,
      sym_text,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(12), 1,
      sym_main_start,
    STATE(80), 1,
      sym_command_group,
    STATE(185), 1,
      sym_main,
    STATE(186), 1,
      sym_comment,
    STATE(199), 1,
      sym_metapost_start,
    STATE(212), 1,
      sym_typing_html_start,
    STATE(213), 1,
      sym_typing_start,
    STATE(214), 1,
      sym_tikz_start,
    ACTIONS(5), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(2), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(20), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(26), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [291] = 23,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(48), 1,
      aux_sym_comment_token1,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      sym_command_group_start,
    ACTIONS(66), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(72), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(75), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(186), 1,
      sym_comment,
    STATE(199), 1,
      sym_metapost_start,
    STATE(212), 1,
      sym_typing_html_start,
    STATE(213), 1,
      sym_typing_start,
    STATE(214), 1,
      sym_tikz_start,
    ACTIONS(54), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(5), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(20), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(43), 3,
      aux_sym_postamble_token1,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(63), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(69), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(26), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [384] = 22,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(86), 1,
      sym_command_group_start,
    ACTIONS(88), 1,
      sym_command_name,
    STATE(10), 1,
      sym_brace_group_start,
    STATE(37), 1,
      sym_brace_group_stop,
    STATE(42), 1,
      sym_command_group,
    STATE(187), 1,
      sym_comment,
    STATE(202), 1,
      sym_typing_html_start,
    STATE(205), 1,
      sym_metapost_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(82), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(13), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(23), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [472] = 22,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(86), 1,
      sym_command_group_start,
    ACTIONS(88), 1,
      sym_command_name,
    STATE(10), 1,
      sym_brace_group_start,
    STATE(42), 1,
      sym_command_group,
    STATE(60), 1,
      sym_brace_group_stop,
    STATE(187), 1,
      sym_comment,
    STATE(202), 1,
      sym_typing_html_start,
    STATE(205), 1,
      sym_metapost_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(13), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(23), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [560] = 22,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(86), 1,
      sym_command_group_start,
    ACTIONS(88), 1,
      sym_command_name,
    STATE(10), 1,
      sym_brace_group_start,
    STATE(42), 1,
      sym_command_group,
    STATE(54), 1,
      sym_brace_group_stop,
    STATE(187), 1,
      sym_comment,
    STATE(202), 1,
      sym_typing_html_start,
    STATE(205), 1,
      sym_metapost_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(92), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(11), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(23), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [648] = 22,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(86), 1,
      sym_command_group_start,
    ACTIONS(88), 1,
      sym_command_name,
    STATE(10), 1,
      sym_brace_group_start,
    STATE(42), 1,
      sym_command_group,
    STATE(72), 1,
      sym_brace_group_stop,
    STATE(187), 1,
      sym_comment,
    STATE(202), 1,
      sym_typing_html_start,
    STATE(205), 1,
      sym_metapost_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(7), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(23), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [736] = 22,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(86), 1,
      sym_command_group_start,
    ACTIONS(88), 1,
      sym_command_name,
    STATE(10), 1,
      sym_brace_group_start,
    STATE(40), 1,
      sym_brace_group_stop,
    STATE(42), 1,
      sym_command_group,
    STATE(187), 1,
      sym_comment,
    STATE(202), 1,
      sym_typing_html_start,
    STATE(205), 1,
      sym_metapost_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(82), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(6), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(23), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [824] = 22,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(86), 1,
      sym_command_group_start,
    ACTIONS(88), 1,
      sym_command_name,
    STATE(10), 1,
      sym_brace_group_start,
    STATE(42), 1,
      sym_command_group,
    STATE(78), 1,
      sym_brace_group_stop,
    STATE(187), 1,
      sym_comment,
    STATE(202), 1,
      sym_typing_html_start,
    STATE(205), 1,
      sym_metapost_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(92), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(13), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(23), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [912] = 21,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      sym_command_group_start,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(27), 1,
      sym_command_name,
    ACTIONS(39), 1,
      sym_text,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(186), 1,
      sym_comment,
    STATE(199), 1,
      sym_metapost_start,
    STATE(212), 1,
      sym_typing_html_start,
    STATE(213), 1,
      sym_typing_start,
    STATE(214), 1,
      sym_tikz_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(3), 2,
      sym_paragraph,
      aux_sym_main_repeat1,
    STATE(20), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(26), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [997] = 21,
    ACTIONS(94), 1,
      sym_text,
    ACTIONS(97), 1,
      aux_sym_comment_token1,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    ACTIONS(108), 1,
      anon_sym_BSLASH,
    ACTIONS(111), 1,
      sym_command_group_start,
    ACTIONS(117), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(123), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(126), 1,
      sym_command_name,
    STATE(10), 1,
      sym_brace_group_start,
    STATE(42), 1,
      sym_command_group,
    STATE(187), 1,
      sym_comment,
    STATE(202), 1,
      sym_typing_html_start,
    STATE(205), 1,
      sym_metapost_start,
    STATE(210), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_start,
    ACTIONS(103), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(106), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(13), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(114), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(120), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(23), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1082] = 21,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(129), 1,
      sym_text,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      sym_command_group_start,
    ACTIONS(137), 1,
      sym_command_group_stop,
    ACTIONS(139), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(43), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(195), 1,
      sym_typing_start,
    STATE(196), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(18), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(34), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1166] = 21,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(129), 1,
      sym_text,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      sym_command_group_start,
    ACTIONS(139), 1,
      sym_command_name,
    ACTIONS(141), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(43), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(195), 1,
      sym_typing_start,
    STATE(196), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(19), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(34), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1250] = 21,
    ACTIONS(143), 1,
      sym_text,
    ACTIONS(146), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(155), 1,
      anon_sym_BSLASH,
    ACTIONS(158), 1,
      sym_command_group_start,
    ACTIONS(164), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(170), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(173), 1,
      sym_command_name,
    ACTIONS(176), 1,
      sym_paragraph_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(186), 1,
      sym_comment,
    STATE(199), 1,
      sym_metapost_start,
    STATE(212), 1,
      sym_typing_html_start,
    STATE(213), 1,
      sym_typing_start,
    STATE(214), 1,
      sym_tikz_start,
    ACTIONS(152), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(16), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(161), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(167), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(26), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1334] = 21,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(129), 1,
      sym_text,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      sym_command_group_start,
    ACTIONS(139), 1,
      sym_command_name,
    ACTIONS(178), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(43), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(195), 1,
      sym_typing_start,
    STATE(196), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(14), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(34), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1418] = 21,
    ACTIONS(97), 1,
      aux_sym_comment_token1,
    ACTIONS(106), 1,
      sym_command_group_stop,
    ACTIONS(117), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(123), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(180), 1,
      sym_text,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_BSLASH,
    ACTIONS(189), 1,
      sym_command_group_start,
    ACTIONS(192), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(43), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(195), 1,
      sym_typing_start,
    STATE(196), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(103), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(18), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(114), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(120), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(34), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1502] = 21,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(129), 1,
      sym_text,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      sym_command_group_start,
    ACTIONS(139), 1,
      sym_command_name,
    ACTIONS(195), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(43), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(195), 1,
      sym_typing_start,
    STATE(196), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(18), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(34), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1586] = 21,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      sym_command_group_start,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(27), 1,
      sym_command_name,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(197), 1,
      sym_paragraph_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(186), 1,
      sym_comment,
    STATE(199), 1,
      sym_metapost_start,
    STATE(212), 1,
      sym_typing_html_start,
    STATE(213), 1,
      sym_typing_start,
    STATE(214), 1,
      sym_tikz_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(16), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(26), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1670] = 21,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(129), 1,
      sym_text,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      sym_command_group_start,
    ACTIONS(139), 1,
      sym_command_name,
    ACTIONS(199), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(43), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(195), 1,
      sym_typing_start,
    STATE(196), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(22), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(34), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1754] = 21,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(25), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(129), 1,
      sym_text,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      sym_command_group_start,
    ACTIONS(139), 1,
      sym_command_name,
    ACTIONS(201), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(43), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(195), 1,
      sym_typing_start,
    STATE(196), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(13), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(18), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(19), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(23), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(34), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1838] = 3,
    STATE(84), 1,
      sym__end_of_line,
    ACTIONS(205), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(203), 25,
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
  [1874] = 1,
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
  [1905] = 1,
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
  [1936] = 4,
    ACTIONS(215), 1,
      sym_paragraph_stop,
    STATE(87), 1,
      sym__end_of_line,
    ACTIONS(213), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(211), 23,
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
  [1973] = 1,
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
  [2004] = 1,
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
  [2035] = 1,
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
  [2066] = 1,
    ACTIONS(223), 28,
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
  [2097] = 1,
    ACTIONS(225), 28,
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
  [2128] = 1,
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
  [2159] = 1,
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
  [2190] = 3,
    STATE(88), 1,
      sym__end_of_line,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(203), 24,
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
  [2225] = 1,
    ACTIONS(233), 28,
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
  [2256] = 1,
    ACTIONS(235), 28,
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
  [2287] = 1,
    ACTIONS(237), 28,
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
  [2318] = 1,
    ACTIONS(239), 28,
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
  [2349] = 1,
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
  [2380] = 1,
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
  [2411] = 1,
    ACTIONS(245), 28,
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
  [2442] = 4,
    ACTIONS(247), 1,
      sym_text,
    STATE(84), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(249), 2,
      sym_paragraph_stop,
      sym__eol,
    ACTIONS(203), 24,
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
  [2479] = 4,
    ACTIONS(247), 1,
      sym_text,
    STATE(88), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(251), 2,
      sym_paragraph_stop,
      sym__eol,
    ACTIONS(203), 23,
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
  [2515] = 1,
    ACTIONS(245), 27,
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
  [2545] = 1,
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
  [2575] = 1,
    ACTIONS(223), 27,
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
  [2605] = 1,
    ACTIONS(225), 27,
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
  [2635] = 2,
    ACTIONS(253), 1,
      sym_paragraph_stop,
    ACTIONS(245), 26,
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
  [2667] = 2,
    ACTIONS(255), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(257), 24,
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
  [2699] = 1,
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
  [2729] = 2,
    ACTIONS(259), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(261), 24,
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
  [2761] = 1,
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
  [2791] = 2,
    ACTIONS(263), 1,
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
  [2823] = 2,
    ACTIONS(265), 1,
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
  [2855] = 1,
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
  [2885] = 1,
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
  [2915] = 1,
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
  [2945] = 1,
    ACTIONS(233), 27,
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
  [2975] = 1,
    ACTIONS(235), 27,
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
  [3005] = 1,
    ACTIONS(237), 27,
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
  [3035] = 1,
    ACTIONS(239), 27,
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
  [3065] = 2,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 26,
      aux_sym_postamble_token1,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [3097] = 2,
    ACTIONS(271), 1,
      sym_paragraph_stop,
    ACTIONS(223), 26,
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
  [3129] = 2,
    ACTIONS(273), 1,
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
  [3161] = 2,
    ACTIONS(275), 1,
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
  [3193] = 2,
    ACTIONS(277), 1,
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
  [3225] = 2,
    ACTIONS(279), 1,
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
  [3257] = 2,
    ACTIONS(281), 1,
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
  [3289] = 2,
    ACTIONS(283), 1,
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
  [3321] = 2,
    ACTIONS(285), 1,
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
  [3353] = 1,
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
  [3383] = 1,
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
  [3413] = 1,
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
  [3443] = 2,
    ACTIONS(287), 1,
      sym_paragraph_stop,
    ACTIONS(233), 26,
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
  [3475] = 2,
    ACTIONS(289), 1,
      sym_paragraph_stop,
    ACTIONS(235), 26,
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
  [3507] = 2,
    ACTIONS(291), 1,
      sym_paragraph_stop,
    ACTIONS(225), 26,
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
  [3539] = 2,
    ACTIONS(293), 1,
      sym_paragraph_stop,
    ACTIONS(239), 26,
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
  [3571] = 2,
    ACTIONS(295), 1,
      sym_paragraph_stop,
    ACTIONS(237), 26,
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
  [3603] = 2,
    ACTIONS(255), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(257), 23,
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
  [3634] = 4,
    ACTIONS(297), 1,
      sym__eol,
    STATE(87), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(215), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(211), 22,
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
  [3669] = 2,
    ACTIONS(259), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(261), 23,
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
  [3700] = 2,
    ACTIONS(301), 1,
      sym_text,
    ACTIONS(299), 24,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
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
  [3730] = 2,
    ACTIONS(255), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(257), 22,
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
  [3760] = 2,
    ACTIONS(303), 1,
      sym_text,
    ACTIONS(305), 24,
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
  [3790] = 2,
    ACTIONS(259), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(261), 22,
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
  [3820] = 2,
    ACTIONS(307), 1,
      sym_text,
    ACTIONS(309), 24,
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
  [3850] = 2,
    ACTIONS(311), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(313), 22,
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
  [3879] = 2,
    ACTIONS(303), 1,
      sym_text,
    ACTIONS(305), 23,
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
  [3908] = 2,
    ACTIONS(315), 1,
      sym_text,
    ACTIONS(317), 22,
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
  [3936] = 8,
    ACTIONS(322), 1,
      aux_sym_comment_token1,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_BSLASH,
    ACTIONS(333), 1,
      sym_command_name,
    ACTIONS(336), 1,
      aux_sym_title_text_token1,
    ACTIONS(319), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(328), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(90), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3972] = 8,
    ACTIONS(342), 1,
      aux_sym_comment_token1,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    ACTIONS(350), 1,
      anon_sym_BSLASH,
    ACTIONS(353), 1,
      sym_command_name,
    ACTIONS(356), 1,
      aux_sym_title_text_token1,
    ACTIONS(339), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(348), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(91), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4008] = 9,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      sym_command_name,
    ACTIONS(369), 1,
      aux_sym_title_text_token1,
    STATE(180), 1,
      sym_title_value,
    ACTIONS(367), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(359), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(93), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4046] = 8,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      sym_command_name,
    ACTIONS(369), 1,
      aux_sym_title_text_token1,
    ACTIONS(373), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(91), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4081] = 8,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      sym_command_name,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      aux_sym_title_text_token1,
    ACTIONS(379), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(375), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(90), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4116] = 8,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      sym_command_name,
    ACTIONS(369), 1,
      aux_sym_title_text_token1,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(91), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4150] = 8,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      sym_command_name,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      aux_sym_title_text_token1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(385), 3,
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
  [4184] = 8,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      sym_command_name,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      aux_sym_title_text_token1,
    STATE(181), 1,
      sym_value,
    ACTIONS(389), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(94), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4218] = 8,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      sym_command_name,
    ACTIONS(369), 1,
      aux_sym_title_text_token1,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    ACTIONS(391), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(95), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4252] = 8,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      sym_command_name,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      aux_sym_title_text_token1,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(90), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4286] = 2,
    STATE(70), 1,
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
  [4303] = 2,
    STATE(32), 1,
      sym_escapechar,
    ACTIONS(399), 11,
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
  [4320] = 2,
    STATE(45), 1,
      sym_escapechar,
    ACTIONS(401), 11,
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
  [4337] = 2,
    STATE(169), 1,
      sym_escapechar,
    ACTIONS(403), 11,
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
  [4354] = 2,
    STATE(114), 1,
      sym_escapechar,
    ACTIONS(405), 11,
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
  [4371] = 9,
    ACTIONS(409), 1,
      sym_command_block_stop,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      aux_sym_keyword_token1,
    ACTIONS(415), 1,
      anon_sym_title,
    STATE(149), 1,
      sym_keyword,
    STATE(228), 1,
      sym__end_of_line,
    STATE(230), 1,
      sym_key,
    STATE(141), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(407), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4402] = 1,
    ACTIONS(225), 11,
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
  [4416] = 1,
    ACTIONS(417), 11,
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
  [4430] = 5,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      sym_command_block_start,
    ACTIONS(425), 1,
      sym_command_stop,
    ACTIONS(419), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4452] = 5,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      sym_command_block_start,
    ACTIONS(429), 1,
      sym_command_stop,
    ACTIONS(427), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(110), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4474] = 5,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      sym_command_block_start,
    ACTIONS(431), 1,
      sym_command_stop,
    ACTIONS(419), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4496] = 5,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      sym_command_block_start,
    ACTIONS(433), 1,
      sym_command_stop,
    ACTIONS(419), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4518] = 5,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      sym_command_block_start,
    ACTIONS(437), 1,
      sym_command_stop,
    ACTIONS(435), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(111), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4540] = 6,
    ACTIONS(439), 1,
      aux_sym_comment_token1,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(447), 1,
      anon_sym_BSLASH,
    ACTIONS(450), 1,
      sym_math_text,
    ACTIONS(442), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4564] = 1,
    ACTIONS(227), 11,
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
  [4578] = 1,
    ACTIONS(239), 11,
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
  [4592] = 1,
    ACTIONS(453), 11,
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
  [4606] = 1,
    ACTIONS(245), 11,
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
  [4620] = 5,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      sym_command_block_start,
    ACTIONS(457), 1,
      sym_command_stop,
    ACTIONS(455), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(123), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4642] = 1,
    ACTIONS(459), 11,
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
  [4656] = 1,
    ACTIONS(461), 11,
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
  [4670] = 1,
    ACTIONS(463), 11,
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
  [4684] = 5,
    ACTIONS(468), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      sym_command_block_start,
    ACTIONS(474), 1,
      sym_command_stop,
    ACTIONS(465), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4706] = 5,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      sym_command_block_start,
    ACTIONS(476), 1,
      sym_command_stop,
    ACTIONS(419), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4728] = 5,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      sym_command_block_start,
    ACTIONS(480), 1,
      sym_command_stop,
    ACTIONS(478), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(108), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4750] = 1,
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
  [4764] = 1,
    ACTIONS(484), 11,
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
  [4778] = 6,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(488), 1,
      anon_sym_DOLLAR,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      sym_math_text,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4801] = 6,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      sym_math_text,
    ACTIONS(496), 1,
      anon_sym_DOLLAR,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4824] = 6,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(500), 1,
      sym_math_text,
    STATE(133), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4847] = 7,
    ACTIONS(415), 1,
      anon_sym_title,
    ACTIONS(504), 1,
      sym_command_block_stop,
    ACTIONS(506), 1,
      aux_sym_keyword_token1,
    STATE(156), 1,
      sym__end_of_line,
    STATE(230), 1,
      sym_key,
    STATE(182), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(502), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4872] = 6,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      sym_math_text,
    ACTIONS(508), 1,
      anon_sym_DOLLAR,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4895] = 7,
    ACTIONS(415), 1,
      anon_sym_title,
    ACTIONS(506), 1,
      aux_sym_keyword_token1,
    ACTIONS(512), 1,
      sym_command_block_stop,
    STATE(166), 1,
      sym__end_of_line,
    STATE(230), 1,
      sym_key,
    STATE(182), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(510), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4920] = 6,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      sym_math_text,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4943] = 5,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(516), 1,
      sym_math_text,
    STATE(131), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4963] = 6,
    ACTIONS(415), 1,
      anon_sym_title,
    ACTIONS(506), 1,
      aux_sym_keyword_token1,
    STATE(179), 1,
      sym__end_of_line,
    STATE(230), 1,
      sym_key,
    STATE(182), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(518), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4985] = 5,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(520), 1,
      sym_math_text,
    STATE(128), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5005] = 5,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(522), 1,
      sym_math_text,
    STATE(127), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5025] = 2,
    STATE(52), 1,
      sym_typing_stop,
    ACTIONS(524), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5038] = 2,
    STATE(28), 1,
      sym_typing_stop,
    ACTIONS(526), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5051] = 2,
    STATE(66), 1,
      sym_typing_stop,
    ACTIONS(528), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5064] = 5,
    ACTIONS(532), 1,
      sym_command_block_stop,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_settings_block_repeat1,
    STATE(232), 1,
      sym__end_of_line,
    ACTIONS(530), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5082] = 5,
    ACTIONS(538), 1,
      sym_command_block_stop,
    ACTIONS(540), 1,
      aux_sym_keyword_token1,
    STATE(176), 1,
      sym_keyword,
    STATE(190), 1,
      sym__end_of_line,
    ACTIONS(536), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5100] = 5,
    ACTIONS(540), 1,
      aux_sym_keyword_token1,
    ACTIONS(544), 1,
      sym_command_block_stop,
    STATE(176), 1,
      sym_keyword,
    STATE(189), 1,
      sym__end_of_line,
    ACTIONS(542), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5118] = 5,
    ACTIONS(544), 1,
      sym_command_block_stop,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_option_block_repeat1,
    STATE(226), 1,
      sym__end_of_line,
    ACTIONS(546), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5136] = 1,
    ACTIONS(550), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5146] = 2,
    STATE(35), 1,
      sym_metapost_stop,
    ACTIONS(552), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5158] = 2,
    STATE(74), 1,
      sym_metapost_stop,
    ACTIONS(554), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5170] = 2,
    STATE(58), 1,
      sym_metapost_stop,
    ACTIONS(556), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5182] = 5,
    ACTIONS(560), 1,
      sym_command_block_stop,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_option_block_repeat1,
    STATE(225), 1,
      sym__end_of_line,
    ACTIONS(558), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5200] = 5,
    ACTIONS(512), 1,
      sym_command_block_stop,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_settings_block_repeat1,
    STATE(218), 1,
      sym__end_of_line,
    ACTIONS(564), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5218] = 2,
    ACTIONS(570), 1,
      sym_command_stop,
    ACTIONS(568), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5229] = 1,
    ACTIONS(225), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5238] = 4,
    ACTIONS(540), 1,
      aux_sym_keyword_token1,
    STATE(176), 1,
      sym_keyword,
    STATE(198), 1,
      sym__end_of_line,
    ACTIONS(572), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5253] = 2,
    ACTIONS(576), 1,
      sym_command_stop,
    ACTIONS(574), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5264] = 2,
    ACTIONS(580), 1,
      sym_command_stop,
    ACTIONS(578), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5275] = 5,
    ACTIONS(415), 1,
      anon_sym_title,
    ACTIONS(506), 1,
      aux_sym_keyword_token1,
    ACTIONS(582), 1,
      sym_command_block_stop,
    STATE(230), 1,
      sym_key,
    STATE(183), 2,
      sym_setting,
      sym_title_setting,
  [5292] = 2,
    ACTIONS(580), 1,
      sym_command_stop,
    ACTIONS(578), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5303] = 2,
    ACTIONS(570), 1,
      sym_command_stop,
    ACTIONS(568), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5314] = 1,
    ACTIONS(584), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5323] = 1,
    ACTIONS(586), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5332] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(588), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5345] = 2,
    ACTIONS(595), 1,
      sym_command_stop,
    ACTIONS(593), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5356] = 2,
    ACTIONS(599), 1,
      sym_command_stop,
    ACTIONS(597), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5367] = 2,
    ACTIONS(603), 1,
      sym_command_stop,
    ACTIONS(601), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5378] = 2,
    ACTIONS(607), 1,
      sym_command_stop,
    ACTIONS(605), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5389] = 5,
    ACTIONS(415), 1,
      anon_sym_title,
    ACTIONS(506), 1,
      aux_sym_keyword_token1,
    ACTIONS(609), 1,
      sym_command_block_stop,
    STATE(230), 1,
      sym_key,
    STATE(183), 2,
      sym_setting,
      sym_title_setting,
  [5406] = 1,
    ACTIONS(461), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5415] = 2,
    ACTIONS(613), 1,
      sym_command_stop,
    ACTIONS(611), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5426] = 1,
    ACTIONS(227), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5435] = 2,
    ACTIONS(617), 1,
      sym_command_stop,
    ACTIONS(615), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5446] = 2,
    ACTIONS(619), 1,
      sym_command_stop,
    ACTIONS(461), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5457] = 1,
    ACTIONS(621), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5466] = 2,
    ACTIONS(625), 1,
      anon_sym_EQ,
    ACTIONS(623), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5477] = 3,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(627), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5490] = 3,
    ACTIONS(634), 1,
      sym_command_block_stop,
    STATE(217), 1,
      sym__end_of_line,
    ACTIONS(632), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5502] = 1,
    ACTIONS(627), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5510] = 1,
    ACTIONS(636), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5518] = 1,
    ACTIONS(623), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5526] = 4,
    ACTIONS(415), 1,
      anon_sym_title,
    ACTIONS(506), 1,
      aux_sym_keyword_token1,
    STATE(230), 1,
      sym_key,
    STATE(183), 2,
      sym_setting,
      sym_title_setting,
  [5540] = 1,
    ACTIONS(638), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5548] = 1,
    ACTIONS(640), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5556] = 1,
    ACTIONS(588), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5564] = 1,
    ACTIONS(642), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5572] = 2,
    STATE(88), 1,
      sym__end_of_line,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5581] = 4,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
    ACTIONS(646), 1,
      aux_sym_postamble_token1,
    STATE(191), 1,
      aux_sym_postamble_repeat1,
    STATE(231), 1,
      sym_postamble,
  [5594] = 2,
    STATE(87), 1,
      sym__end_of_line,
    ACTIONS(213), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5603] = 2,
    STATE(84), 1,
      sym__end_of_line,
    ACTIONS(205), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5612] = 4,
    ACTIONS(646), 1,
      aux_sym_postamble_token1,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      aux_sym_postamble_repeat1,
    STATE(216), 1,
      sym_postamble,
  [5625] = 3,
    ACTIONS(650), 1,
      sym_command_block_stop,
    ACTIONS(652), 1,
      aux_sym_keyword_token1,
    STATE(177), 1,
      sym_keyword,
  [5635] = 3,
    ACTIONS(652), 1,
      aux_sym_keyword_token1,
    ACTIONS(654), 1,
      sym_command_block_stop,
    STATE(177), 1,
      sym_keyword,
  [5645] = 3,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
    ACTIONS(658), 1,
      aux_sym_postamble_token1,
    STATE(192), 1,
      aux_sym_postamble_repeat1,
  [5655] = 3,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(662), 1,
      aux_sym_postamble_token1,
    STATE(192), 1,
      aux_sym_postamble_repeat1,
  [5665] = 1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      aux_sym_postamble_token1,
  [5670] = 2,
    ACTIONS(665), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(68), 1,
      sym_tikz_stop,
  [5677] = 2,
    ACTIONS(667), 1,
      aux_sym_preamble_token1,
    STATE(138), 1,
      sym_typing_body,
  [5684] = 2,
    ACTIONS(669), 1,
      aux_sym_preamble_token1,
    STATE(206), 1,
      sym_tikz_body,
  [5691] = 2,
    ACTIONS(671), 1,
      aux_sym_preamble_token1,
    STATE(148), 1,
      sym_metapost_body,
  [5698] = 2,
    ACTIONS(652), 1,
      aux_sym_keyword_token1,
    STATE(177), 1,
      sym_keyword,
  [5705] = 2,
    ACTIONS(671), 1,
      aux_sym_preamble_token1,
    STATE(147), 1,
      sym_metapost_body,
  [5712] = 1,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      aux_sym_postamble_token1,
  [5717] = 2,
    ACTIONS(675), 1,
      anon_sym_BSLASHstopHTML,
    STATE(63), 1,
      sym_typing_html_stop,
  [5724] = 2,
    ACTIONS(677), 1,
      aux_sym_preamble_token1,
    STATE(203), 1,
      sym_typing_html_body,
  [5731] = 2,
    ACTIONS(679), 1,
      anon_sym_BSLASHstopHTML,
    STATE(30), 1,
      sym_typing_html_stop,
  [5738] = 2,
    ACTIONS(677), 1,
      aux_sym_preamble_token1,
    STATE(208), 1,
      sym_typing_html_body,
  [5745] = 2,
    ACTIONS(671), 1,
      aux_sym_preamble_token1,
    STATE(146), 1,
      sym_metapost_body,
  [5752] = 2,
    ACTIONS(681), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(56), 1,
      sym_tikz_stop,
  [5759] = 2,
    ACTIONS(683), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(27), 1,
      sym_tikz_stop,
  [5766] = 2,
    ACTIONS(685), 1,
      anon_sym_BSLASHstopHTML,
    STATE(46), 1,
      sym_typing_html_stop,
  [5773] = 1,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      aux_sym_postamble_token1,
  [5778] = 2,
    ACTIONS(669), 1,
      aux_sym_preamble_token1,
    STATE(207), 1,
      sym_tikz_body,
  [5785] = 2,
    ACTIONS(667), 1,
      aux_sym_preamble_token1,
    STATE(139), 1,
      sym_typing_body,
  [5792] = 2,
    ACTIONS(677), 1,
      aux_sym_preamble_token1,
    STATE(201), 1,
      sym_typing_html_body,
  [5799] = 2,
    ACTIONS(667), 1,
      aux_sym_preamble_token1,
    STATE(140), 1,
      sym_typing_body,
  [5806] = 2,
    ACTIONS(669), 1,
      aux_sym_preamble_token1,
    STATE(194), 1,
      sym_tikz_body,
  [5813] = 1,
    ACTIONS(689), 1,
      sym_preamble_stop,
  [5817] = 1,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
  [5821] = 1,
    ACTIONS(691), 1,
      sym_command_block_stop,
  [5825] = 1,
    ACTIONS(609), 1,
      sym_command_block_stop,
  [5829] = 1,
    ACTIONS(693), 1,
      anon_sym_BSLASHstoptikzpicture,
  [5833] = 1,
    ACTIONS(695), 1,
      anon_sym_BSLASHstopHTML,
  [5837] = 1,
    ACTIONS(697), 1,
      ts_builtin_sym_end,
  [5841] = 1,
    ACTIONS(699), 1,
      aux_sym_preamble_token1,
  [5845] = 1,
    ACTIONS(701), 1,
      aux_sym_preamble_token1,
  [5849] = 1,
    ACTIONS(703), 1,
      aux_sym_preamble_token1,
  [5853] = 1,
    ACTIONS(705), 1,
      sym_command_block_stop,
  [5857] = 1,
    ACTIONS(650), 1,
      sym_command_block_stop,
  [5861] = 1,
    ACTIONS(707), 1,
      anon_sym_EQ,
  [5865] = 1,
    ACTIONS(709), 1,
      sym_command_block_stop,
  [5869] = 1,
    ACTIONS(711), 1,
      aux_sym_preamble_token1,
  [5873] = 1,
    ACTIONS(713), 1,
      anon_sym_EQ,
  [5877] = 1,
    ACTIONS(715), 1,
      ts_builtin_sym_end,
  [5881] = 1,
    ACTIONS(717), 1,
      sym_command_block_stop,
  [5885] = 1,
    ACTIONS(719), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 291,
  [SMALL_STATE(6)] = 384,
  [SMALL_STATE(7)] = 472,
  [SMALL_STATE(8)] = 560,
  [SMALL_STATE(9)] = 648,
  [SMALL_STATE(10)] = 736,
  [SMALL_STATE(11)] = 824,
  [SMALL_STATE(12)] = 912,
  [SMALL_STATE(13)] = 997,
  [SMALL_STATE(14)] = 1082,
  [SMALL_STATE(15)] = 1166,
  [SMALL_STATE(16)] = 1250,
  [SMALL_STATE(17)] = 1334,
  [SMALL_STATE(18)] = 1418,
  [SMALL_STATE(19)] = 1502,
  [SMALL_STATE(20)] = 1586,
  [SMALL_STATE(21)] = 1670,
  [SMALL_STATE(22)] = 1754,
  [SMALL_STATE(23)] = 1838,
  [SMALL_STATE(24)] = 1874,
  [SMALL_STATE(25)] = 1905,
  [SMALL_STATE(26)] = 1936,
  [SMALL_STATE(27)] = 1973,
  [SMALL_STATE(28)] = 2004,
  [SMALL_STATE(29)] = 2035,
  [SMALL_STATE(30)] = 2066,
  [SMALL_STATE(31)] = 2097,
  [SMALL_STATE(32)] = 2128,
  [SMALL_STATE(33)] = 2159,
  [SMALL_STATE(34)] = 2190,
  [SMALL_STATE(35)] = 2225,
  [SMALL_STATE(36)] = 2256,
  [SMALL_STATE(37)] = 2287,
  [SMALL_STATE(38)] = 2318,
  [SMALL_STATE(39)] = 2349,
  [SMALL_STATE(40)] = 2380,
  [SMALL_STATE(41)] = 2411,
  [SMALL_STATE(42)] = 2442,
  [SMALL_STATE(43)] = 2479,
  [SMALL_STATE(44)] = 2515,
  [SMALL_STATE(45)] = 2545,
  [SMALL_STATE(46)] = 2575,
  [SMALL_STATE(47)] = 2605,
  [SMALL_STATE(48)] = 2635,
  [SMALL_STATE(49)] = 2667,
  [SMALL_STATE(50)] = 2699,
  [SMALL_STATE(51)] = 2729,
  [SMALL_STATE(52)] = 2761,
  [SMALL_STATE(53)] = 2791,
  [SMALL_STATE(54)] = 2823,
  [SMALL_STATE(55)] = 2855,
  [SMALL_STATE(56)] = 2885,
  [SMALL_STATE(57)] = 2915,
  [SMALL_STATE(58)] = 2945,
  [SMALL_STATE(59)] = 2975,
  [SMALL_STATE(60)] = 3005,
  [SMALL_STATE(61)] = 3035,
  [SMALL_STATE(62)] = 3065,
  [SMALL_STATE(63)] = 3097,
  [SMALL_STATE(64)] = 3129,
  [SMALL_STATE(65)] = 3161,
  [SMALL_STATE(66)] = 3193,
  [SMALL_STATE(67)] = 3225,
  [SMALL_STATE(68)] = 3257,
  [SMALL_STATE(69)] = 3289,
  [SMALL_STATE(70)] = 3321,
  [SMALL_STATE(71)] = 3353,
  [SMALL_STATE(72)] = 3383,
  [SMALL_STATE(73)] = 3413,
  [SMALL_STATE(74)] = 3443,
  [SMALL_STATE(75)] = 3475,
  [SMALL_STATE(76)] = 3507,
  [SMALL_STATE(77)] = 3539,
  [SMALL_STATE(78)] = 3571,
  [SMALL_STATE(79)] = 3603,
  [SMALL_STATE(80)] = 3634,
  [SMALL_STATE(81)] = 3669,
  [SMALL_STATE(82)] = 3700,
  [SMALL_STATE(83)] = 3730,
  [SMALL_STATE(84)] = 3760,
  [SMALL_STATE(85)] = 3790,
  [SMALL_STATE(86)] = 3820,
  [SMALL_STATE(87)] = 3850,
  [SMALL_STATE(88)] = 3879,
  [SMALL_STATE(89)] = 3908,
  [SMALL_STATE(90)] = 3936,
  [SMALL_STATE(91)] = 3972,
  [SMALL_STATE(92)] = 4008,
  [SMALL_STATE(93)] = 4046,
  [SMALL_STATE(94)] = 4081,
  [SMALL_STATE(95)] = 4116,
  [SMALL_STATE(96)] = 4150,
  [SMALL_STATE(97)] = 4184,
  [SMALL_STATE(98)] = 4218,
  [SMALL_STATE(99)] = 4252,
  [SMALL_STATE(100)] = 4286,
  [SMALL_STATE(101)] = 4303,
  [SMALL_STATE(102)] = 4320,
  [SMALL_STATE(103)] = 4337,
  [SMALL_STATE(104)] = 4354,
  [SMALL_STATE(105)] = 4371,
  [SMALL_STATE(106)] = 4402,
  [SMALL_STATE(107)] = 4416,
  [SMALL_STATE(108)] = 4430,
  [SMALL_STATE(109)] = 4452,
  [SMALL_STATE(110)] = 4474,
  [SMALL_STATE(111)] = 4496,
  [SMALL_STATE(112)] = 4518,
  [SMALL_STATE(113)] = 4540,
  [SMALL_STATE(114)] = 4564,
  [SMALL_STATE(115)] = 4578,
  [SMALL_STATE(116)] = 4592,
  [SMALL_STATE(117)] = 4606,
  [SMALL_STATE(118)] = 4620,
  [SMALL_STATE(119)] = 4642,
  [SMALL_STATE(120)] = 4656,
  [SMALL_STATE(121)] = 4670,
  [SMALL_STATE(122)] = 4684,
  [SMALL_STATE(123)] = 4706,
  [SMALL_STATE(124)] = 4728,
  [SMALL_STATE(125)] = 4750,
  [SMALL_STATE(126)] = 4764,
  [SMALL_STATE(127)] = 4778,
  [SMALL_STATE(128)] = 4801,
  [SMALL_STATE(129)] = 4824,
  [SMALL_STATE(130)] = 4847,
  [SMALL_STATE(131)] = 4872,
  [SMALL_STATE(132)] = 4895,
  [SMALL_STATE(133)] = 4920,
  [SMALL_STATE(134)] = 4943,
  [SMALL_STATE(135)] = 4963,
  [SMALL_STATE(136)] = 4985,
  [SMALL_STATE(137)] = 5005,
  [SMALL_STATE(138)] = 5025,
  [SMALL_STATE(139)] = 5038,
  [SMALL_STATE(140)] = 5051,
  [SMALL_STATE(141)] = 5064,
  [SMALL_STATE(142)] = 5082,
  [SMALL_STATE(143)] = 5100,
  [SMALL_STATE(144)] = 5118,
  [SMALL_STATE(145)] = 5136,
  [SMALL_STATE(146)] = 5146,
  [SMALL_STATE(147)] = 5158,
  [SMALL_STATE(148)] = 5170,
  [SMALL_STATE(149)] = 5182,
  [SMALL_STATE(150)] = 5200,
  [SMALL_STATE(151)] = 5218,
  [SMALL_STATE(152)] = 5229,
  [SMALL_STATE(153)] = 5238,
  [SMALL_STATE(154)] = 5253,
  [SMALL_STATE(155)] = 5264,
  [SMALL_STATE(156)] = 5275,
  [SMALL_STATE(157)] = 5292,
  [SMALL_STATE(158)] = 5303,
  [SMALL_STATE(159)] = 5314,
  [SMALL_STATE(160)] = 5323,
  [SMALL_STATE(161)] = 5332,
  [SMALL_STATE(162)] = 5345,
  [SMALL_STATE(163)] = 5356,
  [SMALL_STATE(164)] = 5367,
  [SMALL_STATE(165)] = 5378,
  [SMALL_STATE(166)] = 5389,
  [SMALL_STATE(167)] = 5406,
  [SMALL_STATE(168)] = 5415,
  [SMALL_STATE(169)] = 5426,
  [SMALL_STATE(170)] = 5435,
  [SMALL_STATE(171)] = 5446,
  [SMALL_STATE(172)] = 5457,
  [SMALL_STATE(173)] = 5466,
  [SMALL_STATE(174)] = 5477,
  [SMALL_STATE(175)] = 5490,
  [SMALL_STATE(176)] = 5502,
  [SMALL_STATE(177)] = 5510,
  [SMALL_STATE(178)] = 5518,
  [SMALL_STATE(179)] = 5526,
  [SMALL_STATE(180)] = 5540,
  [SMALL_STATE(181)] = 5548,
  [SMALL_STATE(182)] = 5556,
  [SMALL_STATE(183)] = 5564,
  [SMALL_STATE(184)] = 5572,
  [SMALL_STATE(185)] = 5581,
  [SMALL_STATE(186)] = 5594,
  [SMALL_STATE(187)] = 5603,
  [SMALL_STATE(188)] = 5612,
  [SMALL_STATE(189)] = 5625,
  [SMALL_STATE(190)] = 5635,
  [SMALL_STATE(191)] = 5645,
  [SMALL_STATE(192)] = 5655,
  [SMALL_STATE(193)] = 5665,
  [SMALL_STATE(194)] = 5670,
  [SMALL_STATE(195)] = 5677,
  [SMALL_STATE(196)] = 5684,
  [SMALL_STATE(197)] = 5691,
  [SMALL_STATE(198)] = 5698,
  [SMALL_STATE(199)] = 5705,
  [SMALL_STATE(200)] = 5712,
  [SMALL_STATE(201)] = 5717,
  [SMALL_STATE(202)] = 5724,
  [SMALL_STATE(203)] = 5731,
  [SMALL_STATE(204)] = 5738,
  [SMALL_STATE(205)] = 5745,
  [SMALL_STATE(206)] = 5752,
  [SMALL_STATE(207)] = 5759,
  [SMALL_STATE(208)] = 5766,
  [SMALL_STATE(209)] = 5773,
  [SMALL_STATE(210)] = 5778,
  [SMALL_STATE(211)] = 5785,
  [SMALL_STATE(212)] = 5792,
  [SMALL_STATE(213)] = 5799,
  [SMALL_STATE(214)] = 5806,
  [SMALL_STATE(215)] = 5813,
  [SMALL_STATE(216)] = 5817,
  [SMALL_STATE(217)] = 5821,
  [SMALL_STATE(218)] = 5825,
  [SMALL_STATE(219)] = 5829,
  [SMALL_STATE(220)] = 5833,
  [SMALL_STATE(221)] = 5837,
  [SMALL_STATE(222)] = 5841,
  [SMALL_STATE(223)] = 5845,
  [SMALL_STATE(224)] = 5849,
  [SMALL_STATE(225)] = 5853,
  [SMALL_STATE(226)] = 5857,
  [SMALL_STATE(227)] = 5861,
  [SMALL_STATE(228)] = 5865,
  [SMALL_STATE(229)] = 5869,
  [SMALL_STATE(230)] = 5873,
  [SMALL_STATE(231)] = 5877,
  [SMALL_STATE(232)] = 5881,
  [SMALL_STATE(233)] = 5885,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(26),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(120),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(136),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(86),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(100),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(17),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(229),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(224),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(223),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(222),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_repeat1, 2), SHIFT_REPEAT(124),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(23),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(120),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(137),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(86),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(101),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(21),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(229),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(224),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(223),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(222),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(118),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(26),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(120),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(136),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(86),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(100),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(17),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(229),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(224),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(223),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(222),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(124),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(34),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(134),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(102),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(15),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(112),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_start, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(90),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(120),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(96),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(104),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(109),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(119),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(91),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(120),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(98),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(104),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(109),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(116),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(167),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(129),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(103),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(113),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(122),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(171),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(105),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(135),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(153),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postamble, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postamble_repeat1, 2),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postamble_repeat1, 2), SHIFT_REPEAT(192),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [697] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
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
