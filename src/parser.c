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
#define STATE_COUNT 218
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASHstarttext = 1,
  anon_sym_BSLASHstartcomponent = 2,
  anon_sym_BSLASHstoptext = 3,
  anon_sym_BSLASHstopcomponent = 4,
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
  sym_document = 67,
  sym__document_content = 68,
  sym_main_start = 69,
  sym_main_stop = 70,
  sym_paragraph = 71,
  sym__paragraph_content = 72,
  sym__end_of_line = 73,
  sym_comment = 74,
  sym_escapechar = 75,
  sym_escaped = 76,
  sym_brace_group_start = 77,
  sym_brace_group_stop = 78,
  sym__group_content = 79,
  sym_brace_group = 80,
  sym_command_group = 81,
  sym_math_group = 82,
  sym__math_content = 83,
  sym_inline_math = 84,
  sym_metapost_start = 85,
  sym_metapost_stop = 86,
  sym_metapost_body = 87,
  sym_metapost_inclusion = 88,
  sym_tikz_start = 89,
  sym_tikz_stop = 90,
  sym_tikz_body = 91,
  sym_tikz_inclusion = 92,
  sym_typing_start = 93,
  sym_typing_stop = 94,
  sym_typing_body = 95,
  sym_typing_inclusion = 96,
  sym_typing_html_start = 97,
  sym_typing_html_stop = 98,
  sym_typing_html_body = 99,
  sym_typing_html_inclusion = 100,
  sym_option_block = 101,
  sym_keyword = 102,
  sym_settings_block = 103,
  sym_setting = 104,
  sym_title_setting = 105,
  sym_title_value = 106,
  sym__title_content = 107,
  sym_title_brace_group = 108,
  sym_title_text = 109,
  sym_key = 110,
  sym_value = 111,
  sym__value_content = 112,
  sym_value_text = 113,
  sym_value_brace_group = 114,
  sym_command = 115,
  aux_sym_document_repeat1 = 116,
  aux_sym_paragraph_repeat1 = 117,
  aux_sym_brace_group_repeat1 = 118,
  aux_sym_math_group_repeat1 = 119,
  aux_sym_option_block_repeat1 = 120,
  aux_sym_settings_block_repeat1 = 121,
  aux_sym_title_value_repeat1 = 122,
  aux_sym_value_repeat1 = 123,
  aux_sym_command_repeat1 = 124,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_document] = "document",
  [sym__document_content] = "_document_content",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
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
  [aux_sym_document_repeat1] = "document_repeat1",
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
  [sym_document] = sym_document,
  [sym__document_content] = sym__document_content,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
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
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
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
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__document_content] = {
    .visible = false,
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
  [aux_sym_document_repeat1] = {
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
      if (eof) ADVANCE(123);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(140);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '=') ADVANCE(344);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '^') ADVANCE(142);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '~') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(154);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(347);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
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
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
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
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(140);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '^') ADVANCE(142);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '~') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(186);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'X') ADVANCE(22);
      if (lookahead == 't') ADVANCE(76);
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
      if (lookahead == 'L') ADVANCE(190);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(193);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(188);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(108);
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
      if (lookahead == 'P') ADVANCE(187);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(191);
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
      if (lookahead == 'X') ADVANCE(189);
      END_STATE();
    case 41:
      if (lookahead == 'X') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '\\') ADVANCE(110);
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
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'z') ADVANCE(99);
      END_STATE();
    case 122:
      if (eof) ADVANCE(123);
      if (lookahead == '\n') SKIP(122)
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(137);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(137);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 's') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 's') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 's') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 's') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 's') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(214);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(179);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(210);
      if (lookahead == 'P') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == 'X') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(210);
      if (lookahead == 'P') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == 'X') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 't') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 't') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(297);
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
      if (lookahead != 0) ADVANCE(159);
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
  [1] = {.lex_state = 122},
  [2] = {.lex_state = 122},
  [3] = {.lex_state = 122},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 122},
  [31] = {.lex_state = 3, .external_lex_state = 2},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 122},
  [39] = {.lex_state = 122},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 3, .external_lex_state = 2},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 3, .external_lex_state = 2},
  [47] = {.lex_state = 3, .external_lex_state = 2},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 3, .external_lex_state = 2},
  [55] = {.lex_state = 3, .external_lex_state = 2},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 3, .external_lex_state = 2},
  [63] = {.lex_state = 3, .external_lex_state = 2},
  [64] = {.lex_state = 3, .external_lex_state = 2},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 3, .external_lex_state = 2},
  [68] = {.lex_state = 3, .external_lex_state = 2},
  [69] = {.lex_state = 3, .external_lex_state = 2},
  [70] = {.lex_state = 3, .external_lex_state = 2},
  [71] = {.lex_state = 3, .external_lex_state = 2},
  [72] = {.lex_state = 3, .external_lex_state = 2},
  [73] = {.lex_state = 3, .external_lex_state = 2},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 3, .external_lex_state = 2},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 3, .external_lex_state = 2},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 2, .external_lex_state = 2},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 6, .external_lex_state = 3},
  [102] = {.lex_state = 6, .external_lex_state = 3},
  [103] = {.lex_state = 6, .external_lex_state = 3},
  [104] = {.lex_state = 6, .external_lex_state = 3},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 6, .external_lex_state = 3},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 6, .external_lex_state = 3},
  [110] = {.lex_state = 6, .external_lex_state = 3},
  [111] = {.lex_state = 6, .external_lex_state = 3},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 6, .external_lex_state = 3},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 42},
  [133] = {.lex_state = 42},
  [134] = {.lex_state = 42},
  [135] = {.lex_state = 43},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 43},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 43},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 6, .external_lex_state = 3},
  [146] = {.lex_state = 6, .external_lex_state = 3},
  [147] = {.lex_state = 6, .external_lex_state = 3},
  [148] = {.lex_state = 6, .external_lex_state = 3},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 6, .external_lex_state = 3},
  [151] = {.lex_state = 44},
  [152] = {.lex_state = 6, .external_lex_state = 3},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 6, .external_lex_state = 3},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 43},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 6, .external_lex_state = 3},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 44},
  [163] = {.lex_state = 6, .external_lex_state = 3},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 6, .external_lex_state = 3},
  [166] = {.lex_state = 6, .external_lex_state = 3},
  [167] = {.lex_state = 6, .external_lex_state = 3},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 44},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 45},
  [182] = {.lex_state = 45},
  [183] = {.lex_state = 174},
  [184] = {.lex_state = 174},
  [185] = {.lex_state = 174},
  [186] = {.lex_state = 174},
  [187] = {.lex_state = 174},
  [188] = {.lex_state = 174},
  [189] = {.lex_state = 42},
  [190] = {.lex_state = 42},
  [191] = {.lex_state = 174},
  [192] = {.lex_state = 42},
  [193] = {.lex_state = 42},
  [194] = {.lex_state = 42},
  [195] = {.lex_state = 174},
  [196] = {.lex_state = 45},
  [197] = {.lex_state = 174},
  [198] = {.lex_state = 174},
  [199] = {.lex_state = 174},
  [200] = {.lex_state = 42},
  [201] = {.lex_state = 174},
  [202] = {.lex_state = 174},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 174},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 174},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 174},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 42},
  [217] = {.lex_state = 42},
};

enum {
  ts_external_token_command_stop = 0,
  ts_external_token_paragraph_stop = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_command_stop] = sym_command_stop,
  [ts_external_token_paragraph_stop] = sym_paragraph_stop,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_command_stop] = true,
    [ts_external_token_paragraph_stop] = true,
  },
  [2] = {
    [ts_external_token_paragraph_stop] = true,
  },
  [3] = {
    [ts_external_token_command_stop] = true,
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
  },
  [1] = {
    [sym_document] = STATE(206),
    [sym__document_content] = STATE(2),
    [sym_main_start] = STATE(2),
    [sym_main_stop] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__paragraph_content] = STATE(11),
    [sym_comment] = STATE(180),
    [sym_escaped] = STATE(31),
    [sym_brace_group_start] = STATE(7),
    [sym_brace_group] = STATE(31),
    [sym_command_group] = STATE(31),
    [sym_inline_math] = STATE(31),
    [sym_metapost_start] = STATE(199),
    [sym_metapost_inclusion] = STATE(31),
    [sym_tikz_start] = STATE(201),
    [sym_tikz_inclusion] = STATE(31),
    [sym_typing_start] = STATE(191),
    [sym_typing_inclusion] = STATE(31),
    [sym_typing_html_start] = STATE(184),
    [sym_typing_html_inclusion] = STATE(31),
    [sym_command] = STATE(31),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASHstarttext] = ACTIONS(5),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(5),
    [anon_sym_BSLASHstoptext] = ACTIONS(7),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHbgroup] = ACTIONS(15),
    [sym_command_group_start] = ACTIONS(19),
    [anon_sym_BSLASHstartMPinclusions] = ACTIONS(21),
    [anon_sym_BSLASHstartuseMPgraphic] = ACTIONS(21),
    [anon_sym_BSLASHstartreusableMPgraphic] = ACTIONS(21),
    [anon_sym_BSLASHstartMPcode] = ACTIONS(21),
    [anon_sym_BSLASHstartMPpage] = ACTIONS(21),
    [anon_sym_BSLASHstartstaticMPfigure] = ACTIONS(21),
    [anon_sym_BSLASHstarttikzpicture] = ACTIONS(23),
    [anon_sym_BSLASHstarttyping] = ACTIONS(25),
    [anon_sym_BSLASHstartLUA] = ACTIONS(25),
    [anon_sym_BSLASHstartMP] = ACTIONS(25),
    [anon_sym_BSLASHstartPARSEDXML] = ACTIONS(25),
    [anon_sym_BSLASHstartTEX] = ACTIONS(25),
    [anon_sym_BSLASHstartXML] = ACTIONS(25),
    [anon_sym_BSLASHstartCSS] = ACTIONS(25),
    [anon_sym_BSLASHstartHTML] = ACTIONS(27),
    [sym_command_name] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(180), 1,
      sym_comment,
    STATE(184), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(199), 1,
      sym_metapost_start,
    STATE(201), 1,
      sym_tikz_start,
    ACTIONS(5), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(7), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(11), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(3), 5,
      sym__document_content,
      sym_main_start,
      sym_main_stop,
      sym_paragraph,
      aux_sym_document_repeat1,
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
    STATE(31), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [97] = 23,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(44), 1,
      aux_sym_comment_token1,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_BSLASH,
    ACTIONS(56), 1,
      sym_command_group_start,
    ACTIONS(62), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(68), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(71), 1,
      sym_command_name,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(180), 1,
      sym_comment,
    STATE(184), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(199), 1,
      sym_metapost_start,
    STATE(201), 1,
      sym_tikz_start,
    ACTIONS(35), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(38), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(50), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(11), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(3), 5,
      sym__document_content,
      sym_main_start,
      sym_main_stop,
      sym_paragraph,
      aux_sym_document_repeat1,
    ACTIONS(59), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(65), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(31), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [194] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(40), 1,
      sym_brace_group_stop,
    STATE(179), 1,
      sym_comment,
    STATE(185), 1,
      sym_metapost_start,
    STATE(195), 1,
      sym_typing_html_start,
    STATE(197), 1,
      sym_tikz_start,
    STATE(198), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(6), 2,
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
    STATE(20), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [280] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(67), 1,
      sym_brace_group_stop,
    STATE(179), 1,
      sym_comment,
    STATE(185), 1,
      sym_metapost_start,
    STATE(195), 1,
      sym_typing_html_start,
    STATE(197), 1,
      sym_tikz_start,
    STATE(198), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
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
    STATE(20), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [366] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(29), 1,
      sym_brace_group_stop,
    STATE(179), 1,
      sym_comment,
    STATE(185), 1,
      sym_metapost_start,
    STATE(195), 1,
      sym_typing_html_start,
    STATE(197), 1,
      sym_tikz_start,
    STATE(198), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
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
    STATE(20), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [452] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(47), 1,
      sym_brace_group_stop,
    STATE(179), 1,
      sym_comment,
    STATE(185), 1,
      sym_metapost_start,
    STATE(195), 1,
      sym_typing_html_start,
    STATE(197), 1,
      sym_tikz_start,
    STATE(198), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
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
    STATE(20), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [538] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(60), 1,
      sym_brace_group_stop,
    STATE(179), 1,
      sym_comment,
    STATE(185), 1,
      sym_metapost_start,
    STATE(195), 1,
      sym_typing_html_start,
    STATE(197), 1,
      sym_tikz_start,
    STATE(198), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(88), 2,
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
    STATE(20), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [624] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(78), 1,
      sym_brace_group_stop,
    STATE(179), 1,
      sym_comment,
    STATE(185), 1,
      sym_metapost_start,
    STATE(195), 1,
      sym_typing_html_start,
    STATE(197), 1,
      sym_tikz_start,
    STATE(198), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(8), 2,
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
    STATE(20), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [710] = 20,
    ACTIONS(90), 1,
      sym_text,
    ACTIONS(93), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(107), 1,
      sym_command_group_start,
    ACTIONS(113), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(119), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(122), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(179), 1,
      sym_comment,
    STATE(185), 1,
      sym_metapost_start,
    STATE(195), 1,
      sym_typing_html_start,
    STATE(197), 1,
      sym_tikz_start,
    STATE(198), 1,
      sym_typing_start,
    ACTIONS(99), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(102), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(10), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(110), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(116), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(20), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [793] = 20,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
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
    ACTIONS(125), 1,
      sym_paragraph_stop,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(180), 1,
      sym_comment,
    STATE(184), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(199), 1,
      sym_metapost_start,
    STATE(201), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(13), 2,
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
    STATE(31), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [875] = 20,
    ACTIONS(93), 1,
      aux_sym_comment_token1,
    ACTIONS(102), 1,
      sym_command_group_stop,
    ACTIONS(113), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(119), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(127), 1,
      sym_text,
    ACTIONS(130), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    ACTIONS(136), 1,
      sym_command_group_start,
    ACTIONS(139), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(178), 1,
      sym_comment,
    STATE(183), 1,
      sym_metapost_start,
    STATE(186), 1,
      sym_typing_html_start,
    STATE(187), 1,
      sym_typing_start,
    STATE(188), 1,
      sym_tikz_start,
    ACTIONS(99), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(12), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(110), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(116), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(32), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [957] = 20,
    ACTIONS(142), 1,
      sym_text,
    ACTIONS(145), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      anon_sym_BSLASH,
    ACTIONS(157), 1,
      sym_command_group_start,
    ACTIONS(163), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(169), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(172), 1,
      sym_command_name,
    ACTIONS(175), 1,
      sym_paragraph_stop,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(180), 1,
      sym_comment,
    STATE(184), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(199), 1,
      sym_metapost_start,
    STATE(201), 1,
      sym_tikz_start,
    ACTIONS(151), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(13), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(160), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(166), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(31), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1039] = 20,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(177), 1,
      sym_text,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      sym_command_group_start,
    ACTIONS(185), 1,
      sym_command_group_stop,
    ACTIONS(187), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(178), 1,
      sym_comment,
    STATE(183), 1,
      sym_metapost_start,
    STATE(186), 1,
      sym_typing_html_start,
    STATE(187), 1,
      sym_typing_start,
    STATE(188), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
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
    STATE(32), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1121] = 20,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(177), 1,
      sym_text,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      sym_command_group_start,
    ACTIONS(187), 1,
      sym_command_name,
    ACTIONS(189), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(178), 1,
      sym_comment,
    STATE(183), 1,
      sym_metapost_start,
    STATE(186), 1,
      sym_typing_html_start,
    STATE(187), 1,
      sym_typing_start,
    STATE(188), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(16), 2,
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
    STATE(32), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1203] = 20,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(177), 1,
      sym_text,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      sym_command_group_start,
    ACTIONS(187), 1,
      sym_command_name,
    ACTIONS(191), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(178), 1,
      sym_comment,
    STATE(183), 1,
      sym_metapost_start,
    STATE(186), 1,
      sym_typing_html_start,
    STATE(187), 1,
      sym_typing_start,
    STATE(188), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
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
    STATE(32), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1285] = 20,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(177), 1,
      sym_text,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      sym_command_group_start,
    ACTIONS(187), 1,
      sym_command_name,
    ACTIONS(193), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(178), 1,
      sym_comment,
    STATE(183), 1,
      sym_metapost_start,
    STATE(186), 1,
      sym_typing_html_start,
    STATE(187), 1,
      sym_typing_start,
    STATE(188), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
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
    STATE(32), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1367] = 20,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(177), 1,
      sym_text,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      sym_command_group_start,
    ACTIONS(187), 1,
      sym_command_name,
    ACTIONS(195), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(178), 1,
      sym_comment,
    STATE(183), 1,
      sym_metapost_start,
    STATE(186), 1,
      sym_typing_html_start,
    STATE(187), 1,
      sym_typing_start,
    STATE(188), 1,
      sym_tikz_start,
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
    STATE(32), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1449] = 20,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(177), 1,
      sym_text,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      sym_command_group_start,
    ACTIONS(187), 1,
      sym_command_name,
    ACTIONS(197), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(178), 1,
      sym_comment,
    STATE(183), 1,
      sym_metapost_start,
    STATE(186), 1,
      sym_typing_html_start,
    STATE(187), 1,
      sym_typing_start,
    STATE(188), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
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
    STATE(32), 9,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1531] = 3,
    STATE(80), 1,
      sym__end_of_line,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(199), 25,
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
  [1567] = 1,
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
  [1598] = 1,
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
  [1629] = 1,
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
  [1660] = 1,
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
  [1691] = 1,
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
  [1722] = 1,
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
  [1753] = 1,
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
  [1784] = 1,
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
  [1815] = 1,
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
  [1846] = 2,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(223), 26,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
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
  [1879] = 4,
    ACTIONS(229), 1,
      sym_paragraph_stop,
    STATE(83), 1,
      sym__end_of_line,
    ACTIONS(227), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(225), 23,
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
  [1916] = 3,
    STATE(82), 1,
      sym__end_of_line,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(199), 24,
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
  [1951] = 1,
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
  [1982] = 1,
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
  [2013] = 1,
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
  [2044] = 1,
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
  [2075] = 1,
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
  [2106] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(245), 26,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
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
  [2139] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(249), 26,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
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
  [2172] = 1,
    ACTIONS(251), 28,
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
  [2203] = 1,
    ACTIONS(253), 28,
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
  [2234] = 1,
    ACTIONS(255), 28,
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
  [2265] = 1,
    ACTIONS(257), 28,
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
  [2296] = 2,
    ACTIONS(259), 1,
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
  [2328] = 1,
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
  [2358] = 2,
    ACTIONS(261), 1,
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
  [2390] = 2,
    ACTIONS(263), 1,
      sym_paragraph_stop,
    ACTIONS(251), 26,
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
  [2422] = 1,
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
  [2452] = 1,
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
  [2482] = 1,
    ACTIONS(257), 27,
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
  [2512] = 1,
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
  [2542] = 1,
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
  [2572] = 1,
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
  [2602] = 2,
    ACTIONS(265), 1,
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
  [2634] = 2,
    ACTIONS(267), 1,
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
  [2666] = 1,
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
  [2696] = 1,
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
  [2726] = 1,
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
  [2756] = 1,
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
  [2786] = 1,
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
  [2816] = 1,
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
  [2846] = 2,
    ACTIONS(269), 1,
      sym_paragraph_stop,
    ACTIONS(255), 26,
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
  [2878] = 2,
    ACTIONS(271), 1,
      sym_paragraph_stop,
    ACTIONS(253), 26,
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
  [2910] = 2,
    ACTIONS(273), 1,
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
  [2942] = 1,
    ACTIONS(255), 27,
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
  [2972] = 1,
    ACTIONS(253), 27,
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
  [3002] = 2,
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
  [3034] = 2,
    ACTIONS(277), 1,
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
  [3066] = 2,
    ACTIONS(279), 1,
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
  [3098] = 2,
    ACTIONS(281), 1,
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
  [3130] = 2,
    ACTIONS(283), 1,
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
  [3162] = 2,
    ACTIONS(285), 1,
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
  [3194] = 2,
    ACTIONS(287), 1,
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
  [3226] = 2,
    ACTIONS(289), 1,
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
  [3258] = 2,
    ACTIONS(291), 1,
      sym_paragraph_stop,
    ACTIONS(257), 26,
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
  [3290] = 1,
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
  [3320] = 2,
    ACTIONS(293), 1,
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
  [3352] = 1,
    ACTIONS(251), 27,
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
  [3382] = 1,
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
  [3412] = 2,
    ACTIONS(295), 1,
      sym_text,
    ACTIONS(297), 24,
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
  [3442] = 2,
    ACTIONS(299), 1,
      sym_text,
    ACTIONS(301), 24,
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
  [3472] = 2,
    ACTIONS(295), 1,
      sym_text,
    ACTIONS(297), 23,
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
  [3501] = 2,
    ACTIONS(303), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(305), 22,
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
  [3530] = 9,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym_command_name,
    ACTIONS(317), 1,
      aux_sym_title_text_token1,
    STATE(170), 1,
      sym_title_value,
    ACTIONS(315), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(307), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(87), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3568] = 8,
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
    STATE(85), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3604] = 8,
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
    STATE(86), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3640] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym_command_name,
    ACTIONS(317), 1,
      aux_sym_title_text_token1,
    ACTIONS(361), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(359), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(86), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3675] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym_command_name,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      aux_sym_title_text_token1,
    ACTIONS(367), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(363), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(85), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3710] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym_command_name,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      aux_sym_title_text_token1,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(85), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3744] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym_command_name,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      aux_sym_title_text_token1,
    STATE(172), 1,
      sym_value,
    ACTIONS(373), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(88), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3778] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym_command_name,
    ACTIONS(317), 1,
      aux_sym_title_text_token1,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(92), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3812] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym_command_name,
    ACTIONS(317), 1,
      aux_sym_title_text_token1,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(86), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3846] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym_command_name,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      aux_sym_title_text_token1,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(89), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3880] = 2,
    STATE(48), 1,
      sym_escapechar,
    ACTIONS(385), 11,
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
  [3897] = 2,
    STATE(77), 1,
      sym_escapechar,
    ACTIONS(387), 11,
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
  [3914] = 2,
    STATE(108), 1,
      sym_escapechar,
    ACTIONS(389), 11,
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
  [3931] = 9,
    ACTIONS(393), 1,
      sym_command_block_stop,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      aux_sym_keyword_token1,
    ACTIONS(399), 1,
      anon_sym_title,
    STATE(144), 1,
      sym_keyword,
    STATE(210), 1,
      sym_key,
    STATE(211), 1,
      sym__end_of_line,
    STATE(136), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(391), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3962] = 2,
    STATE(156), 1,
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
  [3979] = 2,
    STATE(33), 1,
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
  [3996] = 1,
    ACTIONS(405), 11,
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
  [4010] = 5,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_command_block_start,
    ACTIONS(413), 1,
      sym_command_stop,
    ACTIONS(407), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(103), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4032] = 5,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_command_block_start,
    ACTIONS(417), 1,
      sym_command_stop,
    ACTIONS(415), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(115), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4054] = 5,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_command_block_start,
    ACTIONS(421), 1,
      sym_command_stop,
    ACTIONS(419), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(104), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4076] = 5,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      sym_command_block_start,
    ACTIONS(432), 1,
      sym_command_stop,
    ACTIONS(423), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(104), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4098] = 1,
    ACTIONS(434), 11,
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
  [4112] = 1,
    ACTIONS(436), 11,
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
  [4126] = 5,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_command_block_start,
    ACTIONS(438), 1,
      sym_command_stop,
    ACTIONS(419), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(104), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4148] = 1,
    ACTIONS(233), 11,
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
  [4162] = 5,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_command_block_start,
    ACTIONS(442), 1,
      sym_command_stop,
    ACTIONS(440), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(111), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4184] = 5,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_command_block_start,
    ACTIONS(446), 1,
      sym_command_stop,
    ACTIONS(444), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4206] = 5,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_command_block_start,
    ACTIONS(448), 1,
      sym_command_stop,
    ACTIONS(419), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(104), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4228] = 1,
    ACTIONS(450), 11,
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
  [4242] = 1,
    ACTIONS(253), 11,
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
  [4256] = 1,
    ACTIONS(452), 11,
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
  [4270] = 5,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_command_block_start,
    ACTIONS(454), 1,
      sym_command_stop,
    ACTIONS(419), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(104), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4292] = 1,
    ACTIONS(237), 11,
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
  [4306] = 1,
    ACTIONS(235), 11,
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
  [4320] = 1,
    ACTIONS(456), 11,
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
  [4334] = 6,
    ACTIONS(458), 1,
      aux_sym_comment_token1,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 1,
      anon_sym_BSLASH,
    ACTIONS(469), 1,
      sym_math_text,
    ACTIONS(461), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4358] = 1,
    ACTIONS(472), 11,
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
  [4372] = 6,
    ACTIONS(474), 1,
      aux_sym_comment_token1,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym_math_text,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4395] = 6,
    ACTIONS(474), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      sym_math_text,
    STATE(123), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4418] = 6,
    ACTIONS(474), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym_math_text,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4441] = 6,
    ACTIONS(474), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym_math_text,
    ACTIONS(490), 1,
      anon_sym_DOLLAR,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4464] = 7,
    ACTIONS(399), 1,
      anon_sym_title,
    ACTIONS(494), 1,
      sym_command_block_stop,
    ACTIONS(496), 1,
      aux_sym_keyword_token1,
    STATE(151), 1,
      sym__end_of_line,
    STATE(210), 1,
      sym_key,
    STATE(171), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(492), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4489] = 7,
    ACTIONS(399), 1,
      anon_sym_title,
    ACTIONS(496), 1,
      aux_sym_keyword_token1,
    ACTIONS(500), 1,
      sym_command_block_stop,
    STATE(162), 1,
      sym__end_of_line,
    STATE(210), 1,
      sym_key,
    STATE(171), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(498), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4514] = 6,
    ACTIONS(474), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym_math_text,
    ACTIONS(502), 1,
      anon_sym_DOLLAR,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4537] = 6,
    ACTIONS(399), 1,
      anon_sym_title,
    ACTIONS(496), 1,
      aux_sym_keyword_token1,
    STATE(174), 1,
      sym__end_of_line,
    STATE(210), 1,
      sym_key,
    STATE(171), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(504), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4559] = 5,
    ACTIONS(474), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(506), 1,
      sym_math_text,
    STATE(121), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4579] = 5,
    ACTIONS(474), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(508), 1,
      sym_math_text,
    STATE(124), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4599] = 5,
    ACTIONS(474), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(510), 1,
      sym_math_text,
    STATE(127), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4619] = 2,
    STATE(73), 1,
      sym_typing_stop,
    ACTIONS(512), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4632] = 2,
    STATE(52), 1,
      sym_typing_stop,
    ACTIONS(514), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4645] = 2,
    STATE(23), 1,
      sym_typing_stop,
    ACTIONS(516), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4658] = 2,
    STATE(27), 1,
      sym_metapost_stop,
    ACTIONS(518), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4670] = 5,
    ACTIONS(522), 1,
      sym_command_block_stop,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_settings_block_repeat1,
    STATE(215), 1,
      sym__end_of_line,
    ACTIONS(520), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4688] = 5,
    ACTIONS(528), 1,
      sym_command_block_stop,
    ACTIONS(530), 1,
      aux_sym_keyword_token1,
    STATE(175), 1,
      sym_keyword,
    STATE(182), 1,
      sym__end_of_line,
    ACTIONS(526), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4706] = 5,
    ACTIONS(500), 1,
      sym_command_block_stop,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_settings_block_repeat1,
    STATE(203), 1,
      sym__end_of_line,
    ACTIONS(532), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4724] = 5,
    ACTIONS(530), 1,
      aux_sym_keyword_token1,
    ACTIONS(538), 1,
      sym_command_block_stop,
    STATE(175), 1,
      sym_keyword,
    STATE(181), 1,
      sym__end_of_line,
    ACTIONS(536), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4742] = 2,
    STATE(58), 1,
      sym_metapost_stop,
    ACTIONS(540), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4754] = 5,
    ACTIONS(528), 1,
      sym_command_block_stop,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_option_block_repeat1,
    STATE(205), 1,
      sym__end_of_line,
    ACTIONS(542), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4772] = 2,
    STATE(69), 1,
      sym_metapost_stop,
    ACTIONS(546), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4784] = 1,
    ACTIONS(548), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4794] = 5,
    ACTIONS(552), 1,
      sym_command_block_stop,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_option_block_repeat1,
    STATE(208), 1,
      sym__end_of_line,
    ACTIONS(550), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4812] = 2,
    ACTIONS(558), 1,
      sym_command_stop,
    ACTIONS(556), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4823] = 2,
    ACTIONS(562), 1,
      sym_command_stop,
    ACTIONS(560), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4834] = 2,
    ACTIONS(566), 1,
      sym_command_stop,
    ACTIONS(564), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4845] = 2,
    ACTIONS(570), 1,
      sym_command_stop,
    ACTIONS(568), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4856] = 2,
    ACTIONS(574), 1,
      anon_sym_EQ,
    ACTIONS(572), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4867] = 2,
    ACTIONS(578), 1,
      sym_command_stop,
    ACTIONS(576), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4878] = 5,
    ACTIONS(399), 1,
      anon_sym_title,
    ACTIONS(496), 1,
      aux_sym_keyword_token1,
    ACTIONS(580), 1,
      sym_command_block_stop,
    STATE(210), 1,
      sym_key,
    STATE(173), 2,
      sym_setting,
      sym_title_setting,
  [4895] = 2,
    ACTIONS(584), 1,
      sym_command_stop,
    ACTIONS(582), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4906] = 1,
    ACTIONS(586), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4915] = 2,
    ACTIONS(588), 1,
      sym_command_stop,
    ACTIONS(434), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4926] = 4,
    ACTIONS(530), 1,
      aux_sym_keyword_token1,
    STATE(175), 1,
      sym_keyword,
    STATE(196), 1,
      sym__end_of_line,
    ACTIONS(590), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4941] = 1,
    ACTIONS(233), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4950] = 1,
    ACTIONS(237), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4959] = 1,
    ACTIONS(592), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4968] = 1,
    ACTIONS(594), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4977] = 2,
    ACTIONS(598), 1,
      sym_command_stop,
    ACTIONS(596), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4988] = 3,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(600), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5001] = 5,
    ACTIONS(399), 1,
      anon_sym_title,
    ACTIONS(496), 1,
      aux_sym_keyword_token1,
    ACTIONS(605), 1,
      sym_command_block_stop,
    STATE(210), 1,
      sym_key,
    STATE(173), 2,
      sym_setting,
      sym_title_setting,
  [5018] = 2,
    ACTIONS(609), 1,
      sym_command_stop,
    ACTIONS(607), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5029] = 3,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(611), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5042] = 2,
    ACTIONS(570), 1,
      sym_command_stop,
    ACTIONS(568), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5053] = 2,
    ACTIONS(618), 1,
      sym_command_stop,
    ACTIONS(616), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5064] = 2,
    ACTIONS(609), 1,
      sym_command_stop,
    ACTIONS(607), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5075] = 1,
    ACTIONS(434), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5084] = 1,
    ACTIONS(620), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5092] = 1,
    ACTIONS(622), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5100] = 1,
    ACTIONS(600), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5108] = 1,
    ACTIONS(624), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5116] = 1,
    ACTIONS(626), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5124] = 4,
    ACTIONS(399), 1,
      anon_sym_title,
    ACTIONS(496), 1,
      aux_sym_keyword_token1,
    STATE(210), 1,
      sym_key,
    STATE(173), 2,
      sym_setting,
      sym_title_setting,
  [5138] = 1,
    ACTIONS(611), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5146] = 1,
    ACTIONS(572), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5154] = 3,
    ACTIONS(630), 1,
      sym_command_block_stop,
    STATE(209), 1,
      sym__end_of_line,
    ACTIONS(628), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5166] = 2,
    STATE(82), 1,
      sym__end_of_line,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5175] = 2,
    STATE(80), 1,
      sym__end_of_line,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5184] = 2,
    STATE(83), 1,
      sym__end_of_line,
    ACTIONS(227), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5193] = 3,
    ACTIONS(632), 1,
      sym_command_block_stop,
    ACTIONS(634), 1,
      aux_sym_keyword_token1,
    STATE(169), 1,
      sym_keyword,
  [5203] = 3,
    ACTIONS(634), 1,
      aux_sym_keyword_token1,
    ACTIONS(636), 1,
      sym_command_block_stop,
    STATE(169), 1,
      sym_keyword,
  [5213] = 2,
    ACTIONS(638), 1,
      aux_sym_metapost_body_token1,
    STATE(140), 1,
      sym_metapost_body,
  [5220] = 2,
    ACTIONS(640), 1,
      aux_sym_metapost_body_token1,
    STATE(194), 1,
      sym_typing_html_body,
  [5227] = 2,
    ACTIONS(638), 1,
      aux_sym_metapost_body_token1,
    STATE(135), 1,
      sym_metapost_body,
  [5234] = 2,
    ACTIONS(640), 1,
      aux_sym_metapost_body_token1,
    STATE(192), 1,
      sym_typing_html_body,
  [5241] = 2,
    ACTIONS(642), 1,
      aux_sym_metapost_body_token1,
    STATE(133), 1,
      sym_typing_body,
  [5248] = 2,
    ACTIONS(644), 1,
      aux_sym_metapost_body_token1,
    STATE(190), 1,
      sym_tikz_body,
  [5255] = 2,
    ACTIONS(646), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(71), 1,
      sym_tikz_stop,
  [5262] = 2,
    ACTIONS(648), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(56), 1,
      sym_tikz_stop,
  [5269] = 2,
    ACTIONS(642), 1,
      aux_sym_metapost_body_token1,
    STATE(132), 1,
      sym_typing_body,
  [5276] = 2,
    ACTIONS(650), 1,
      anon_sym_BSLASHstopHTML,
    STATE(50), 1,
      sym_typing_html_stop,
  [5283] = 2,
    ACTIONS(652), 1,
      anon_sym_BSLASHstopHTML,
    STATE(43), 1,
      sym_typing_html_stop,
  [5290] = 2,
    ACTIONS(654), 1,
      anon_sym_BSLASHstopHTML,
    STATE(75), 1,
      sym_typing_html_stop,
  [5297] = 2,
    ACTIONS(640), 1,
      aux_sym_metapost_body_token1,
    STATE(193), 1,
      sym_typing_html_body,
  [5304] = 2,
    ACTIONS(634), 1,
      aux_sym_keyword_token1,
    STATE(169), 1,
      sym_keyword,
  [5311] = 2,
    ACTIONS(644), 1,
      aux_sym_metapost_body_token1,
    STATE(200), 1,
      sym_tikz_body,
  [5318] = 2,
    ACTIONS(642), 1,
      aux_sym_metapost_body_token1,
    STATE(134), 1,
      sym_typing_body,
  [5325] = 2,
    ACTIONS(638), 1,
      aux_sym_metapost_body_token1,
    STATE(142), 1,
      sym_metapost_body,
  [5332] = 2,
    ACTIONS(656), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(25), 1,
      sym_tikz_stop,
  [5339] = 2,
    ACTIONS(644), 1,
      aux_sym_metapost_body_token1,
    STATE(189), 1,
      sym_tikz_body,
  [5346] = 1,
    ACTIONS(658), 1,
      aux_sym_metapost_body_token1,
  [5350] = 1,
    ACTIONS(605), 1,
      sym_command_block_stop,
  [5354] = 1,
    ACTIONS(660), 1,
      anon_sym_EQ,
  [5358] = 1,
    ACTIONS(636), 1,
      sym_command_block_stop,
  [5362] = 1,
    ACTIONS(662), 1,
      ts_builtin_sym_end,
  [5366] = 1,
    ACTIONS(664), 1,
      aux_sym_metapost_body_token1,
  [5370] = 1,
    ACTIONS(666), 1,
      sym_command_block_stop,
  [5374] = 1,
    ACTIONS(668), 1,
      sym_command_block_stop,
  [5378] = 1,
    ACTIONS(670), 1,
      anon_sym_EQ,
  [5382] = 1,
    ACTIONS(672), 1,
      sym_command_block_stop,
  [5386] = 1,
    ACTIONS(674), 1,
      aux_sym_metapost_body_token1,
  [5390] = 1,
    ACTIONS(676), 1,
      anon_sym_EQ,
  [5394] = 1,
    ACTIONS(678), 1,
      aux_sym_metapost_body_token1,
  [5398] = 1,
    ACTIONS(680), 1,
      sym_command_block_stop,
  [5402] = 1,
    ACTIONS(682), 1,
      anon_sym_BSLASHstopHTML,
  [5406] = 1,
    ACTIONS(684), 1,
      anon_sym_BSLASHstoptikzpicture,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 194,
  [SMALL_STATE(5)] = 280,
  [SMALL_STATE(6)] = 366,
  [SMALL_STATE(7)] = 452,
  [SMALL_STATE(8)] = 538,
  [SMALL_STATE(9)] = 624,
  [SMALL_STATE(10)] = 710,
  [SMALL_STATE(11)] = 793,
  [SMALL_STATE(12)] = 875,
  [SMALL_STATE(13)] = 957,
  [SMALL_STATE(14)] = 1039,
  [SMALL_STATE(15)] = 1121,
  [SMALL_STATE(16)] = 1203,
  [SMALL_STATE(17)] = 1285,
  [SMALL_STATE(18)] = 1367,
  [SMALL_STATE(19)] = 1449,
  [SMALL_STATE(20)] = 1531,
  [SMALL_STATE(21)] = 1567,
  [SMALL_STATE(22)] = 1598,
  [SMALL_STATE(23)] = 1629,
  [SMALL_STATE(24)] = 1660,
  [SMALL_STATE(25)] = 1691,
  [SMALL_STATE(26)] = 1722,
  [SMALL_STATE(27)] = 1753,
  [SMALL_STATE(28)] = 1784,
  [SMALL_STATE(29)] = 1815,
  [SMALL_STATE(30)] = 1846,
  [SMALL_STATE(31)] = 1879,
  [SMALL_STATE(32)] = 1916,
  [SMALL_STATE(33)] = 1951,
  [SMALL_STATE(34)] = 1982,
  [SMALL_STATE(35)] = 2013,
  [SMALL_STATE(36)] = 2044,
  [SMALL_STATE(37)] = 2075,
  [SMALL_STATE(38)] = 2106,
  [SMALL_STATE(39)] = 2139,
  [SMALL_STATE(40)] = 2172,
  [SMALL_STATE(41)] = 2203,
  [SMALL_STATE(42)] = 2234,
  [SMALL_STATE(43)] = 2265,
  [SMALL_STATE(44)] = 2296,
  [SMALL_STATE(45)] = 2328,
  [SMALL_STATE(46)] = 2358,
  [SMALL_STATE(47)] = 2390,
  [SMALL_STATE(48)] = 2422,
  [SMALL_STATE(49)] = 2452,
  [SMALL_STATE(50)] = 2482,
  [SMALL_STATE(51)] = 2512,
  [SMALL_STATE(52)] = 2542,
  [SMALL_STATE(53)] = 2572,
  [SMALL_STATE(54)] = 2602,
  [SMALL_STATE(55)] = 2634,
  [SMALL_STATE(56)] = 2666,
  [SMALL_STATE(57)] = 2696,
  [SMALL_STATE(58)] = 2726,
  [SMALL_STATE(59)] = 2756,
  [SMALL_STATE(60)] = 2786,
  [SMALL_STATE(61)] = 2816,
  [SMALL_STATE(62)] = 2846,
  [SMALL_STATE(63)] = 2878,
  [SMALL_STATE(64)] = 2910,
  [SMALL_STATE(65)] = 2942,
  [SMALL_STATE(66)] = 2972,
  [SMALL_STATE(67)] = 3002,
  [SMALL_STATE(68)] = 3034,
  [SMALL_STATE(69)] = 3066,
  [SMALL_STATE(70)] = 3098,
  [SMALL_STATE(71)] = 3130,
  [SMALL_STATE(72)] = 3162,
  [SMALL_STATE(73)] = 3194,
  [SMALL_STATE(74)] = 3226,
  [SMALL_STATE(75)] = 3258,
  [SMALL_STATE(76)] = 3290,
  [SMALL_STATE(77)] = 3320,
  [SMALL_STATE(78)] = 3352,
  [SMALL_STATE(79)] = 3382,
  [SMALL_STATE(80)] = 3412,
  [SMALL_STATE(81)] = 3442,
  [SMALL_STATE(82)] = 3472,
  [SMALL_STATE(83)] = 3501,
  [SMALL_STATE(84)] = 3530,
  [SMALL_STATE(85)] = 3568,
  [SMALL_STATE(86)] = 3604,
  [SMALL_STATE(87)] = 3640,
  [SMALL_STATE(88)] = 3675,
  [SMALL_STATE(89)] = 3710,
  [SMALL_STATE(90)] = 3744,
  [SMALL_STATE(91)] = 3778,
  [SMALL_STATE(92)] = 3812,
  [SMALL_STATE(93)] = 3846,
  [SMALL_STATE(94)] = 3880,
  [SMALL_STATE(95)] = 3897,
  [SMALL_STATE(96)] = 3914,
  [SMALL_STATE(97)] = 3931,
  [SMALL_STATE(98)] = 3962,
  [SMALL_STATE(99)] = 3979,
  [SMALL_STATE(100)] = 3996,
  [SMALL_STATE(101)] = 4010,
  [SMALL_STATE(102)] = 4032,
  [SMALL_STATE(103)] = 4054,
  [SMALL_STATE(104)] = 4076,
  [SMALL_STATE(105)] = 4098,
  [SMALL_STATE(106)] = 4112,
  [SMALL_STATE(107)] = 4126,
  [SMALL_STATE(108)] = 4148,
  [SMALL_STATE(109)] = 4162,
  [SMALL_STATE(110)] = 4184,
  [SMALL_STATE(111)] = 4206,
  [SMALL_STATE(112)] = 4228,
  [SMALL_STATE(113)] = 4242,
  [SMALL_STATE(114)] = 4256,
  [SMALL_STATE(115)] = 4270,
  [SMALL_STATE(116)] = 4292,
  [SMALL_STATE(117)] = 4306,
  [SMALL_STATE(118)] = 4320,
  [SMALL_STATE(119)] = 4334,
  [SMALL_STATE(120)] = 4358,
  [SMALL_STATE(121)] = 4372,
  [SMALL_STATE(122)] = 4395,
  [SMALL_STATE(123)] = 4418,
  [SMALL_STATE(124)] = 4441,
  [SMALL_STATE(125)] = 4464,
  [SMALL_STATE(126)] = 4489,
  [SMALL_STATE(127)] = 4514,
  [SMALL_STATE(128)] = 4537,
  [SMALL_STATE(129)] = 4559,
  [SMALL_STATE(130)] = 4579,
  [SMALL_STATE(131)] = 4599,
  [SMALL_STATE(132)] = 4619,
  [SMALL_STATE(133)] = 4632,
  [SMALL_STATE(134)] = 4645,
  [SMALL_STATE(135)] = 4658,
  [SMALL_STATE(136)] = 4670,
  [SMALL_STATE(137)] = 4688,
  [SMALL_STATE(138)] = 4706,
  [SMALL_STATE(139)] = 4724,
  [SMALL_STATE(140)] = 4742,
  [SMALL_STATE(141)] = 4754,
  [SMALL_STATE(142)] = 4772,
  [SMALL_STATE(143)] = 4784,
  [SMALL_STATE(144)] = 4794,
  [SMALL_STATE(145)] = 4812,
  [SMALL_STATE(146)] = 4823,
  [SMALL_STATE(147)] = 4834,
  [SMALL_STATE(148)] = 4845,
  [SMALL_STATE(149)] = 4856,
  [SMALL_STATE(150)] = 4867,
  [SMALL_STATE(151)] = 4878,
  [SMALL_STATE(152)] = 4895,
  [SMALL_STATE(153)] = 4906,
  [SMALL_STATE(154)] = 4915,
  [SMALL_STATE(155)] = 4926,
  [SMALL_STATE(156)] = 4941,
  [SMALL_STATE(157)] = 4950,
  [SMALL_STATE(158)] = 4959,
  [SMALL_STATE(159)] = 4968,
  [SMALL_STATE(160)] = 4977,
  [SMALL_STATE(161)] = 4988,
  [SMALL_STATE(162)] = 5001,
  [SMALL_STATE(163)] = 5018,
  [SMALL_STATE(164)] = 5029,
  [SMALL_STATE(165)] = 5042,
  [SMALL_STATE(166)] = 5053,
  [SMALL_STATE(167)] = 5064,
  [SMALL_STATE(168)] = 5075,
  [SMALL_STATE(169)] = 5084,
  [SMALL_STATE(170)] = 5092,
  [SMALL_STATE(171)] = 5100,
  [SMALL_STATE(172)] = 5108,
  [SMALL_STATE(173)] = 5116,
  [SMALL_STATE(174)] = 5124,
  [SMALL_STATE(175)] = 5138,
  [SMALL_STATE(176)] = 5146,
  [SMALL_STATE(177)] = 5154,
  [SMALL_STATE(178)] = 5166,
  [SMALL_STATE(179)] = 5175,
  [SMALL_STATE(180)] = 5184,
  [SMALL_STATE(181)] = 5193,
  [SMALL_STATE(182)] = 5203,
  [SMALL_STATE(183)] = 5213,
  [SMALL_STATE(184)] = 5220,
  [SMALL_STATE(185)] = 5227,
  [SMALL_STATE(186)] = 5234,
  [SMALL_STATE(187)] = 5241,
  [SMALL_STATE(188)] = 5248,
  [SMALL_STATE(189)] = 5255,
  [SMALL_STATE(190)] = 5262,
  [SMALL_STATE(191)] = 5269,
  [SMALL_STATE(192)] = 5276,
  [SMALL_STATE(193)] = 5283,
  [SMALL_STATE(194)] = 5290,
  [SMALL_STATE(195)] = 5297,
  [SMALL_STATE(196)] = 5304,
  [SMALL_STATE(197)] = 5311,
  [SMALL_STATE(198)] = 5318,
  [SMALL_STATE(199)] = 5325,
  [SMALL_STATE(200)] = 5332,
  [SMALL_STATE(201)] = 5339,
  [SMALL_STATE(202)] = 5346,
  [SMALL_STATE(203)] = 5350,
  [SMALL_STATE(204)] = 5354,
  [SMALL_STATE(205)] = 5358,
  [SMALL_STATE(206)] = 5362,
  [SMALL_STATE(207)] = 5366,
  [SMALL_STATE(208)] = 5370,
  [SMALL_STATE(209)] = 5374,
  [SMALL_STATE(210)] = 5378,
  [SMALL_STATE(211)] = 5382,
  [SMALL_STATE(212)] = 5386,
  [SMALL_STATE(213)] = 5390,
  [SMALL_STATE(214)] = 5394,
  [SMALL_STATE(215)] = 5398,
  [SMALL_STATE(216)] = 5402,
  [SMALL_STATE(217)] = 5406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(131),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(207),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(212),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(214),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(202),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(20),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(105),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(130),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(81),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(99),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(19),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(207),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(212),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(214),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(202),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(110),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(32),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(129),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(94),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(15),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(101),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(31),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(105),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(131),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(81),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(95),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(18),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(207),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(212),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(214),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(202),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(102),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_start, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(85),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(105),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(93),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(96),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(109),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(100),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(86),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(105),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(91),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(96),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(109),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(120),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(104),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(154),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(97),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(168),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(122),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(98),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(119),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(128),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(155),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [662] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
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
