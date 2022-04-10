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
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
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
  aux_sym_comment_token1 = 5,
  anon_sym_POUND = 6,
  anon_sym_DOLLAR = 7,
  anon_sym_PERCENT = 8,
  anon_sym_AMP = 9,
  anon_sym_CARET = 10,
  anon_sym__ = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_PIPE = 14,
  anon_sym_TILDE = 15,
  anon_sym_BSLASH = 16,
  anon_sym_BSLASHbgroup = 17,
  anon_sym_BSLASHegroup = 18,
  sym_command_group_start = 19,
  sym_command_group_stop = 20,
  sym_math_text = 21,
  anon_sym_BSLASHstartMPinclusions = 22,
  anon_sym_BSLASHstartuseMPgraphic = 23,
  anon_sym_BSLASHstartreusableMPgraphic = 24,
  anon_sym_BSLASHstartMPcode = 25,
  anon_sym_BSLASHstartMPpage = 26,
  anon_sym_BSLASHstartstaticMPfigure = 27,
  anon_sym_BSLASHstopMPinclusions = 28,
  anon_sym_BSLASHstopuseMPgraphic = 29,
  anon_sym_BSLASHstopreusableMPgraphic = 30,
  anon_sym_BSLASHstopMPcode = 31,
  anon_sym_BSLASHstopMPpage = 32,
  anon_sym_BSLASHstopstaticMPfigure = 33,
  aux_sym_metapost_body_token1 = 34,
  anon_sym_BSLASHstarttikzpicture = 35,
  anon_sym_BSLASHstoptikzpicture = 36,
  anon_sym_BSLASHstarttyping = 37,
  anon_sym_BSLASHstartLUA = 38,
  anon_sym_BSLASHstartMP = 39,
  anon_sym_BSLASHstartPARSEDXML = 40,
  anon_sym_BSLASHstartTEX = 41,
  anon_sym_BSLASHstartXML = 42,
  anon_sym_BSLASHstartCSS = 43,
  anon_sym_BSLASHstoptyping = 44,
  anon_sym_BSLASHstopLUA = 45,
  anon_sym_BSLASHstopMP = 46,
  anon_sym_BSLASHstopPARSEDXML = 47,
  anon_sym_BSLASHstopTEX = 48,
  anon_sym_BSLASHstopXML = 49,
  anon_sym_BSLASHstopCSS = 50,
  anon_sym_BSLASHstartHTML = 51,
  anon_sym_BSLASHstopHTML = 52,
  sym_command_name = 53,
  sym_command_block_start = 54,
  sym_command_block_stop = 55,
  anon_sym_COMMA = 56,
  aux_sym_keyword_token1 = 57,
  anon_sym_EQ = 58,
  anon_sym_title = 59,
  aux_sym_title_text_token1 = 60,
  sym_text = 61,
  anon_sym_LF = 62,
  anon_sym_CR = 63,
  anon_sym_CR_LF = 64,
  sym_command_stop = 65,
  sym_paragraph_stop = 66,
  sym_document = 67,
  sym__content = 68,
  sym_main_start = 69,
  sym_main_stop = 70,
  sym_comment = 71,
  sym_escapechar = 72,
  sym_escaped = 73,
  sym_brace_group_start = 74,
  sym_brace_group_stop = 75,
  sym_brace_group = 76,
  sym_command_group = 77,
  sym_math_group = 78,
  sym__math_content = 79,
  sym_inline_math = 80,
  sym_metapost_start = 81,
  sym_metapost_stop = 82,
  sym_metapost_body = 83,
  sym_metapost_inclusion = 84,
  sym_tikz_start = 85,
  sym_tikz_stop = 86,
  sym_tikz_body = 87,
  sym_tikz_inclusion = 88,
  sym_typing_start = 89,
  sym_typing_stop = 90,
  sym_typing_body = 91,
  sym_typing_inclusion = 92,
  sym_typing_html_start = 93,
  sym_typing_html_stop = 94,
  sym_typing_html_body = 95,
  sym_typing_html_inclusion = 96,
  sym_option_block = 97,
  sym_keyword = 98,
  sym_settings_block = 99,
  sym_setting = 100,
  sym_title_setting = 101,
  sym_title_value = 102,
  sym__title_content = 103,
  sym_title_brace_group = 104,
  sym_title_text = 105,
  sym_key = 106,
  sym_value = 107,
  sym__value_content = 108,
  sym_value_text = 109,
  sym_value_brace_group = 110,
  sym_command = 111,
  sym_paragraph = 112,
  sym__paragraph_content = 113,
  sym__end_of_line = 114,
  aux_sym_document_repeat1 = 115,
  aux_sym_math_group_repeat1 = 116,
  aux_sym_option_block_repeat1 = 117,
  aux_sym_settings_block_repeat1 = 118,
  aux_sym_title_value_repeat1 = 119,
  aux_sym_value_repeat1 = 120,
  aux_sym_command_repeat1 = 121,
  aux_sym_paragraph_repeat1 = 122,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHstarttext] = "\\starttext",
  [anon_sym_BSLASHstartcomponent] = "\\startcomponent",
  [anon_sym_BSLASHstoptext] = "\\stoptext",
  [anon_sym_BSLASHstopcomponent] = "\\stopcomponent",
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
  [sym_text] = "text",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [sym_command_stop] = "command_stop",
  [sym_paragraph_stop] = "paragraph_stop",
  [sym_document] = "document",
  [sym__content] = "_content",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
  [sym_comment] = "comment",
  [sym_escapechar] = "escapechar",
  [sym_escaped] = "escaped",
  [sym_brace_group_start] = "brace_group_start",
  [sym_brace_group_stop] = "brace_group_stop",
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
  [sym_paragraph] = "paragraph",
  [sym__paragraph_content] = "_paragraph_content",
  [sym__end_of_line] = "_end_of_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_math_group_repeat1] = "math_group_repeat1",
  [aux_sym_option_block_repeat1] = "option_block_repeat1",
  [aux_sym_settings_block_repeat1] = "settings_block_repeat1",
  [aux_sym_title_value_repeat1] = "title_value_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHstarttext] = anon_sym_BSLASHstarttext,
  [anon_sym_BSLASHstartcomponent] = anon_sym_BSLASHstartcomponent,
  [anon_sym_BSLASHstoptext] = anon_sym_BSLASHstoptext,
  [anon_sym_BSLASHstopcomponent] = anon_sym_BSLASHstopcomponent,
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
  [sym_text] = sym_text,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_command_stop] = sym_command_stop,
  [sym_paragraph_stop] = sym_paragraph_stop,
  [sym_document] = sym_document,
  [sym__content] = sym__content,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
  [sym_comment] = sym_comment,
  [sym_escapechar] = sym_escapechar,
  [sym_escaped] = sym_escaped,
  [sym_brace_group_start] = sym_brace_group_start,
  [sym_brace_group_stop] = sym_brace_group_stop,
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
  [sym_paragraph] = sym_paragraph,
  [sym__paragraph_content] = sym__paragraph_content,
  [sym__end_of_line] = sym__end_of_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_math_group_repeat1] = aux_sym_math_group_repeat1,
  [aux_sym_option_block_repeat1] = aux_sym_option_block_repeat1,
  [aux_sym_settings_block_repeat1] = aux_sym_settings_block_repeat1,
  [aux_sym_title_value_repeat1] = aux_sym_title_value_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
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
  [sym__content] = {
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
  [aux_sym_document_repeat1] = {
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
  [aux_sym_paragraph_repeat1] = {
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
      if (eof) ADVANCE(121);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(142);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(328);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(324);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(324);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(177);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(20);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(181);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(179);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(178);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(182);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'X') ADVANCE(180);
      END_STATE();
    case 39:
      if (lookahead == 'X') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(324);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(324);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 'z') ADVANCE(97);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') SKIP(120)
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(128);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(128);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 's') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 's') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 's') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 's') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'p') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(204);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(170);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == 'H') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(200);
      if (lookahead == 'P') ADVANCE(185);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead == 'X') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 't') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 't') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'y') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 120},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 120},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 120},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 120},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 120},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 120},
  [41] = {.lex_state = 120},
  [42] = {.lex_state = 120},
  [43] = {.lex_state = 120},
  [44] = {.lex_state = 120},
  [45] = {.lex_state = 120},
  [46] = {.lex_state = 120},
  [47] = {.lex_state = 120},
  [48] = {.lex_state = 120},
  [49] = {.lex_state = 120},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 120},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 8, .external_lex_state = 2},
  [65] = {.lex_state = 8, .external_lex_state = 2},
  [66] = {.lex_state = 8, .external_lex_state = 2},
  [67] = {.lex_state = 8, .external_lex_state = 2},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 7, .external_lex_state = 2},
  [73] = {.lex_state = 3, .external_lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 3, .external_lex_state = 3},
  [76] = {.lex_state = 7, .external_lex_state = 2},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 7, .external_lex_state = 2},
  [79] = {.lex_state = 7, .external_lex_state = 2},
  [80] = {.lex_state = 3, .external_lex_state = 3},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 7, .external_lex_state = 2},
  [84] = {.lex_state = 7, .external_lex_state = 2},
  [85] = {.lex_state = 3, .external_lex_state = 3},
  [86] = {.lex_state = 7, .external_lex_state = 2},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 7, .external_lex_state = 2},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 7, .external_lex_state = 2},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 3, .external_lex_state = 3},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 7, .external_lex_state = 2},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 40},
  [107] = {.lex_state = 8, .external_lex_state = 2},
  [108] = {.lex_state = 40},
  [109] = {.lex_state = 40},
  [110] = {.lex_state = 41},
  [111] = {.lex_state = 41},
  [112] = {.lex_state = 40},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 3, .external_lex_state = 3},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 42},
  [123] = {.lex_state = 3, .external_lex_state = 3},
  [124] = {.lex_state = 3, .external_lex_state = 3},
  [125] = {.lex_state = 41},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 3, .external_lex_state = 3},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 3, .external_lex_state = 3},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 42},
  [135] = {.lex_state = 3, .external_lex_state = 3},
  [136] = {.lex_state = 3, .external_lex_state = 3},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 3, .external_lex_state = 3},
  [139] = {.lex_state = 3, .external_lex_state = 3},
  [140] = {.lex_state = 3, .external_lex_state = 3},
  [141] = {.lex_state = 3, .external_lex_state = 3},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 3, .external_lex_state = 3},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 42},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 43},
  [154] = {.lex_state = 43},
  [155] = {.lex_state = 165},
  [156] = {.lex_state = 40},
  [157] = {.lex_state = 165},
  [158] = {.lex_state = 40},
  [159] = {.lex_state = 165},
  [160] = {.lex_state = 165},
  [161] = {.lex_state = 165},
  [162] = {.lex_state = 40},
  [163] = {.lex_state = 165},
  [164] = {.lex_state = 165},
  [165] = {.lex_state = 165},
  [166] = {.lex_state = 165},
  [167] = {.lex_state = 165},
  [168] = {.lex_state = 165},
  [169] = {.lex_state = 165},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 40},
  [172] = {.lex_state = 43},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 165},
  [176] = {.lex_state = 165},
  [177] = {.lex_state = 165},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 165},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 40},
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
    [sym_document] = STATE(183),
    [sym__content] = STATE(7),
    [sym_main_start] = STATE(7),
    [sym_main_stop] = STATE(7),
    [sym_comment] = STATE(72),
    [sym_escaped] = STATE(72),
    [sym_brace_group_start] = STATE(3),
    [sym_brace_group] = STATE(72),
    [sym_command_group] = STATE(7),
    [sym_inline_math] = STATE(72),
    [sym_metapost_start] = STATE(168),
    [sym_metapost_inclusion] = STATE(7),
    [sym_tikz_start] = STATE(167),
    [sym_tikz_inclusion] = STATE(7),
    [sym_typing_start] = STATE(155),
    [sym_typing_inclusion] = STATE(7),
    [sym_typing_html_start] = STATE(165),
    [sym_typing_html_inclusion] = STATE(7),
    [sym_command] = STATE(72),
    [sym_paragraph] = STATE(7),
    [sym__paragraph_content] = STATE(66),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_paragraph_repeat1] = STATE(66),
    [anon_sym_BSLASHstarttext] = ACTIONS(3),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(3),
    [anon_sym_BSLASHstoptext] = ACTIONS(5),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_BSLASHbgroup] = ACTIONS(11),
    [sym_command_group_start] = ACTIONS(15),
    [anon_sym_BSLASHstartMPinclusions] = ACTIONS(17),
    [anon_sym_BSLASHstartuseMPgraphic] = ACTIONS(17),
    [anon_sym_BSLASHstartreusableMPgraphic] = ACTIONS(17),
    [anon_sym_BSLASHstartMPcode] = ACTIONS(17),
    [anon_sym_BSLASHstartMPpage] = ACTIONS(17),
    [anon_sym_BSLASHstartstaticMPfigure] = ACTIONS(17),
    [anon_sym_BSLASHstarttikzpicture] = ACTIONS(19),
    [anon_sym_BSLASHstarttyping] = ACTIONS(21),
    [anon_sym_BSLASHstartLUA] = ACTIONS(21),
    [anon_sym_BSLASHstartMP] = ACTIONS(21),
    [anon_sym_BSLASHstartPARSEDXML] = ACTIONS(21),
    [anon_sym_BSLASHstartTEX] = ACTIONS(21),
    [anon_sym_BSLASHstartXML] = ACTIONS(21),
    [anon_sym_BSLASHstartCSS] = ACTIONS(21),
    [anon_sym_BSLASHstartHTML] = ACTIONS(23),
    [sym_command_name] = ACTIONS(25),
    [sym_text] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(35), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(91), 1,
      sym_brace_group_stop,
    STATE(157), 1,
      sym_typing_html_start,
    STATE(159), 1,
      sym_typing_start,
    STATE(160), 1,
      sym_tikz_start,
    STATE(161), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(29), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(31), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(64), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(4), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [99] = 23,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(35), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(84), 1,
      sym_brace_group_stop,
    STATE(157), 1,
      sym_typing_html_start,
    STATE(159), 1,
      sym_typing_start,
    STATE(160), 1,
      sym_tikz_start,
    STATE(161), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(29), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(31), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(64), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(2), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [198] = 22,
    ACTIONS(43), 1,
      aux_sym_comment_token1,
    ACTIONS(46), 1,
      anon_sym_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 1,
      sym_command_group_start,
    ACTIONS(63), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(69), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(72), 1,
      sym_command_name,
    ACTIONS(75), 1,
      sym_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(157), 1,
      sym_typing_html_start,
    STATE(159), 1,
      sym_typing_start,
    STATE(160), 1,
      sym_tikz_start,
    STATE(161), 1,
      sym_metapost_start,
    ACTIONS(37), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(40), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(49), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(52), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(64), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(60), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(66), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(4), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [294] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(80), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(6), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [389] = 22,
    ACTIONS(43), 1,
      aux_sym_comment_token1,
    ACTIONS(46), 1,
      anon_sym_DOLLAR,
    ACTIONS(52), 1,
      sym_command_group_stop,
    ACTIONS(54), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(69), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(72), 1,
      sym_command_name,
    ACTIONS(75), 1,
      sym_text,
    ACTIONS(92), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(49), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(89), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(60), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(66), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(6), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [484] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_command_group_start,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(165), 1,
      sym_typing_html_start,
    STATE(167), 1,
      sym_tikz_start,
    STATE(168), 1,
      sym_metapost_start,
    ACTIONS(3), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(5), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(66), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(13), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [579] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(97), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(80), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(6), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [674] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(99), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(80), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(5), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [769] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(101), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(80), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(6), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [864] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(103), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(80), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(10), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [959] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(105), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(80), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [1054] = 22,
    ACTIONS(43), 1,
      aux_sym_comment_token1,
    ACTIONS(46), 1,
      anon_sym_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(69), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(72), 1,
      sym_command_name,
    ACTIONS(75), 1,
      sym_text,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(165), 1,
      sym_typing_html_start,
    STATE(167), 1,
      sym_tikz_start,
    STATE(168), 1,
      sym_metapost_start,
    ACTIONS(49), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(109), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(112), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(66), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(60), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(66), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(13), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      aux_sym_document_repeat1,
  [1149] = 2,
    ACTIONS(120), 1,
      sym_text,
    ACTIONS(118), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1183] = 2,
    ACTIONS(124), 1,
      sym_text,
    ACTIONS(122), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1217] = 2,
    ACTIONS(128), 1,
      sym_text,
    ACTIONS(126), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1251] = 2,
    ACTIONS(132), 1,
      sym_text,
    ACTIONS(130), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1285] = 2,
    ACTIONS(136), 1,
      sym_text,
    ACTIONS(134), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1319] = 2,
    ACTIONS(140), 1,
      sym_text,
    ACTIONS(138), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1353] = 2,
    ACTIONS(144), 1,
      sym_text,
    ACTIONS(142), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1387] = 2,
    ACTIONS(148), 1,
      sym_text,
    ACTIONS(146), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1421] = 2,
    ACTIONS(152), 1,
      sym_text,
    ACTIONS(150), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1455] = 2,
    ACTIONS(156), 1,
      sym_text,
    ACTIONS(154), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1489] = 2,
    ACTIONS(160), 1,
      sym_text,
    ACTIONS(158), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1523] = 2,
    ACTIONS(164), 1,
      sym_text,
    ACTIONS(162), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1557] = 2,
    ACTIONS(168), 1,
      sym_text,
    ACTIONS(166), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1591] = 2,
    ACTIONS(172), 1,
      sym_text,
    ACTIONS(170), 28,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
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
  [1625] = 2,
    ACTIONS(152), 1,
      sym_text,
    ACTIONS(150), 27,
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
  [1658] = 2,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(170), 26,
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
  [1691] = 2,
    ACTIONS(124), 1,
      sym_text,
    ACTIONS(122), 27,
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
  [1724] = 2,
    ACTIONS(172), 1,
      sym_text,
    ACTIONS(170), 27,
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
  [1757] = 2,
    ACTIONS(120), 1,
      sym_text,
    ACTIONS(118), 27,
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
  [1790] = 2,
    ACTIONS(140), 1,
      sym_text,
    ACTIONS(138), 27,
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
  [1823] = 2,
    ACTIONS(128), 1,
      sym_text,
    ACTIONS(126), 27,
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
  [1856] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(118), 26,
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
  [1889] = 2,
    ACTIONS(132), 1,
      sym_text,
    ACTIONS(130), 27,
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
  [1922] = 2,
    ACTIONS(168), 1,
      sym_text,
    ACTIONS(166), 27,
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
  [1955] = 2,
    ACTIONS(164), 1,
      sym_text,
    ACTIONS(162), 27,
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
  [1988] = 2,
    ACTIONS(144), 1,
      sym_text,
    ACTIONS(142), 27,
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
  [2021] = 2,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(158), 26,
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
  [2054] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(122), 26,
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
  [2087] = 2,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(154), 26,
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
  [2120] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(134), 26,
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
  [2153] = 2,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(142), 26,
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
  [2186] = 2,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(138), 26,
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
  [2219] = 2,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(150), 26,
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
  [2252] = 2,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(162), 26,
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
  [2285] = 2,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(166), 26,
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
  [2318] = 2,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(130), 26,
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
  [2351] = 2,
    ACTIONS(136), 1,
      sym_text,
    ACTIONS(134), 27,
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
  [2384] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(126), 26,
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
  [2417] = 2,
    ACTIONS(156), 1,
      sym_text,
    ACTIONS(154), 27,
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
  [2450] = 2,
    ACTIONS(160), 1,
      sym_text,
    ACTIONS(158), 27,
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
  [2483] = 8,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 1,
      sym_command_name,
    ACTIONS(188), 1,
      aux_sym_title_text_token1,
    ACTIONS(180), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(191), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(54), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2519] = 9,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      sym_command_name,
    ACTIONS(204), 1,
      aux_sym_title_text_token1,
    STATE(148), 1,
      sym_title_value,
    ACTIONS(202), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(206), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(58), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2557] = 8,
    ACTIONS(208), 1,
      aux_sym_comment_token1,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 1,
      sym_command_name,
    ACTIONS(222), 1,
      aux_sym_title_text_token1,
    ACTIONS(214), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(225), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(56), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2593] = 8,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      sym_command_name,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      aux_sym_title_text_token1,
    ACTIONS(230), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(234), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(56), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2628] = 8,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      sym_command_name,
    ACTIONS(204), 1,
      aux_sym_title_text_token1,
    ACTIONS(236), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(238), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(54), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2663] = 8,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      sym_command_name,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      aux_sym_title_text_token1,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(56), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2697] = 8,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      sym_command_name,
    ACTIONS(204), 1,
      aux_sym_title_text_token1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(54), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2731] = 8,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      sym_command_name,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      aux_sym_title_text_token1,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(59), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2765] = 8,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      sym_command_name,
    ACTIONS(204), 1,
      aux_sym_title_text_token1,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(60), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2799] = 8,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      sym_command_name,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      aux_sym_title_text_token1,
    STATE(150), 1,
      sym_value,
    ACTIONS(252), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(57), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2833] = 10,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(254), 1,
      sym_paragraph_stop,
    STATE(3), 1,
      sym_brace_group_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(65), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
  [2870] = 10,
    ACTIONS(256), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      sym_command_name,
    ACTIONS(271), 1,
      sym_text,
    ACTIONS(274), 1,
      sym_paragraph_stop,
    STATE(3), 1,
      sym_brace_group_start,
    ACTIONS(262), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(65), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
  [2907] = 10,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(276), 1,
      sym_paragraph_stop,
    STATE(3), 1,
      sym_brace_group_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(65), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
  [2944] = 10,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(278), 1,
      sym_paragraph_stop,
    STATE(3), 1,
      sym_brace_group_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(65), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
  [2981] = 9,
    ACTIONS(280), 1,
      sym_command_block_stop,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      aux_sym_keyword_token1,
    ACTIONS(286), 1,
      anon_sym_title,
    STATE(115), 1,
      sym_keyword,
    STATE(181), 1,
      sym__end_of_line,
    STATE(188), 1,
      sym_key,
    STATE(116), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(288), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3012] = 2,
    STATE(78), 1,
      sym_escapechar,
    ACTIONS(290), 11,
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
  [3029] = 2,
    STATE(131), 1,
      sym_escapechar,
    ACTIONS(292), 11,
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
  [3046] = 2,
    STATE(98), 1,
      sym_escapechar,
    ACTIONS(294), 11,
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
  [3063] = 4,
    ACTIONS(300), 1,
      sym_paragraph_stop,
    STATE(107), 1,
      sym__end_of_line,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(296), 7,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
  [3084] = 5,
    ACTIONS(302), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      sym_command_block_start,
    ACTIONS(308), 1,
      sym_command_stop,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(93), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3106] = 1,
    ACTIONS(310), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3120] = 5,
    ACTIONS(302), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      sym_command_block_start,
    ACTIONS(312), 1,
      sym_command_stop,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(93), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3142] = 2,
    ACTIONS(316), 1,
      sym_paragraph_stop,
    ACTIONS(314), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3158] = 1,
    ACTIONS(318), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3172] = 2,
    ACTIONS(322), 1,
      sym_paragraph_stop,
    ACTIONS(320), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3188] = 2,
    ACTIONS(326), 1,
      sym_paragraph_stop,
    ACTIONS(324), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3204] = 5,
    ACTIONS(302), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      sym_command_block_start,
    ACTIONS(330), 1,
      sym_command_stop,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(73), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3226] = 1,
    ACTIONS(314), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3240] = 1,
    ACTIONS(332), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3254] = 2,
    ACTIONS(334), 1,
      sym_paragraph_stop,
    ACTIONS(332), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3270] = 2,
    ACTIONS(338), 1,
      sym_paragraph_stop,
    ACTIONS(336), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3286] = 5,
    ACTIONS(302), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      sym_command_block_start,
    ACTIONS(342), 1,
      sym_command_stop,
    ACTIONS(340), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(75), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3308] = 2,
    ACTIONS(346), 1,
      sym_paragraph_stop,
    ACTIONS(344), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3324] = 1,
    ACTIONS(324), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3338] = 2,
    ACTIONS(350), 1,
      sym_paragraph_stop,
    ACTIONS(348), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3354] = 1,
    ACTIONS(352), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3368] = 1,
    ACTIONS(354), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3382] = 2,
    ACTIONS(358), 1,
      sym_paragraph_stop,
    ACTIONS(356), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3398] = 1,
    ACTIONS(360), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3412] = 5,
    ACTIONS(362), 1,
      aux_sym_comment_token1,
    ACTIONS(365), 1,
      sym_command_block_start,
    ACTIONS(371), 1,
      sym_command_stop,
    ACTIONS(368), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(93), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3434] = 1,
    ACTIONS(373), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3448] = 2,
    ACTIONS(375), 1,
      sym_paragraph_stop,
    ACTIONS(318), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3464] = 6,
    ACTIONS(377), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    ACTIONS(388), 1,
      sym_math_text,
    ACTIONS(380), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(96), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3488] = 1,
    ACTIONS(391), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3502] = 1,
    ACTIONS(320), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3516] = 6,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
    ACTIONS(401), 1,
      sym_math_text,
    STATE(96), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3539] = 6,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      sym_math_text,
    STATE(99), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3562] = 7,
    ACTIONS(286), 1,
      anon_sym_title,
    ACTIONS(407), 1,
      sym_command_block_stop,
    ACTIONS(409), 1,
      aux_sym_keyword_token1,
    STATE(122), 1,
      sym__end_of_line,
    STATE(188), 1,
      sym_key,
    STATE(145), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(411), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3587] = 6,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
    ACTIONS(401), 1,
      sym_math_text,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    STATE(96), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3610] = 7,
    ACTIONS(286), 1,
      anon_sym_title,
    ACTIONS(409), 1,
      aux_sym_keyword_token1,
    ACTIONS(415), 1,
      sym_command_block_stop,
    STATE(134), 1,
      sym__end_of_line,
    STATE(188), 1,
      sym_key,
    STATE(145), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(417), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3635] = 6,
    ACTIONS(286), 1,
      anon_sym_title,
    ACTIONS(409), 1,
      aux_sym_keyword_token1,
    STATE(151), 1,
      sym__end_of_line,
    STATE(188), 1,
      sym_key,
    STATE(145), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(419), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3657] = 5,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
    ACTIONS(421), 1,
      sym_math_text,
    STATE(102), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3677] = 2,
    STATE(18), 1,
      sym_typing_stop,
    ACTIONS(423), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [3690] = 2,
    ACTIONS(427), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(425), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [3703] = 2,
    STATE(43), 1,
      sym_typing_stop,
    ACTIONS(429), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [3716] = 2,
    STATE(50), 1,
      sym_typing_stop,
    ACTIONS(431), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [3729] = 2,
    STATE(37), 1,
      sym_metapost_stop,
    ACTIONS(433), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [3741] = 2,
    STATE(48), 1,
      sym_metapost_stop,
    ACTIONS(435), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [3753] = 1,
    ACTIONS(437), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [3763] = 5,
    ACTIONS(439), 1,
      sym_command_block_stop,
    ACTIONS(441), 1,
      aux_sym_keyword_token1,
    STATE(152), 1,
      sym_keyword,
    STATE(153), 1,
      sym__end_of_line,
    ACTIONS(443), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3781] = 2,
    STATE(26), 1,
      sym_metapost_stop,
    ACTIONS(445), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [3793] = 5,
    ACTIONS(447), 1,
      sym_command_block_stop,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_option_block_repeat1,
    STATE(184), 1,
      sym__end_of_line,
    ACTIONS(451), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3811] = 5,
    ACTIONS(453), 1,
      sym_command_block_stop,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_settings_block_repeat1,
    STATE(182), 1,
      sym__end_of_line,
    ACTIONS(457), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3829] = 5,
    ACTIONS(441), 1,
      aux_sym_keyword_token1,
    ACTIONS(459), 1,
      sym_command_block_stop,
    STATE(152), 1,
      sym_keyword,
    STATE(154), 1,
      sym__end_of_line,
    ACTIONS(461), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3847] = 5,
    ACTIONS(459), 1,
      sym_command_block_stop,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_option_block_repeat1,
    STATE(180), 1,
      sym__end_of_line,
    ACTIONS(465), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3865] = 5,
    ACTIONS(407), 1,
      sym_command_block_stop,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_settings_block_repeat1,
    STATE(174), 1,
      sym__end_of_line,
    ACTIONS(469), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3883] = 2,
    ACTIONS(473), 1,
      sym_command_stop,
    ACTIONS(471), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3894] = 4,
    ACTIONS(441), 1,
      aux_sym_keyword_token1,
    STATE(152), 1,
      sym_keyword,
    STATE(172), 1,
      sym__end_of_line,
    ACTIONS(475), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3909] = 5,
    ACTIONS(286), 1,
      anon_sym_title,
    ACTIONS(409), 1,
      aux_sym_keyword_token1,
    ACTIONS(477), 1,
      sym_command_block_stop,
    STATE(188), 1,
      sym_key,
    STATE(147), 2,
      sym_setting,
      sym_title_setting,
  [3926] = 2,
    ACTIONS(481), 1,
      sym_command_stop,
    ACTIONS(479), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3937] = 2,
    ACTIONS(485), 1,
      sym_command_stop,
    ACTIONS(483), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3948] = 1,
    ACTIONS(487), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [3957] = 3,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(489), 4,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3970] = 2,
    ACTIONS(496), 1,
      sym_command_stop,
    ACTIONS(494), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3981] = 1,
    ACTIONS(498), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [3990] = 1,
    ACTIONS(332), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [3999] = 1,
    ACTIONS(324), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4008] = 1,
    ACTIONS(320), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4017] = 2,
    ACTIONS(502), 1,
      sym_command_stop,
    ACTIONS(500), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4028] = 3,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(504), 4,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4041] = 5,
    ACTIONS(286), 1,
      anon_sym_title,
    ACTIONS(409), 1,
      aux_sym_keyword_token1,
    ACTIONS(509), 1,
      sym_command_block_stop,
    STATE(188), 1,
      sym_key,
    STATE(147), 2,
      sym_setting,
      sym_title_setting,
  [4058] = 2,
    ACTIONS(513), 1,
      sym_command_stop,
    ACTIONS(511), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4069] = 2,
    ACTIONS(517), 1,
      sym_command_stop,
    ACTIONS(515), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4080] = 2,
    ACTIONS(521), 1,
      anon_sym_EQ,
    ACTIONS(519), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4091] = 2,
    ACTIONS(334), 1,
      sym_command_stop,
    ACTIONS(332), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4102] = 2,
    ACTIONS(502), 1,
      sym_command_stop,
    ACTIONS(500), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4113] = 2,
    ACTIONS(525), 1,
      sym_command_stop,
    ACTIONS(523), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4124] = 2,
    ACTIONS(517), 1,
      sym_command_stop,
    ACTIONS(515), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4135] = 1,
    ACTIONS(527), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4144] = 2,
    ACTIONS(531), 1,
      sym_command_stop,
    ACTIONS(529), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4155] = 1,
    ACTIONS(533), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4163] = 1,
    ACTIONS(504), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4171] = 3,
    ACTIONS(535), 1,
      sym_command_block_stop,
    STATE(185), 1,
      sym__end_of_line,
    ACTIONS(537), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4183] = 1,
    ACTIONS(539), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4191] = 1,
    ACTIONS(541), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4199] = 1,
    ACTIONS(519), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4207] = 1,
    ACTIONS(543), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4215] = 4,
    ACTIONS(286), 1,
      anon_sym_title,
    ACTIONS(409), 1,
      aux_sym_keyword_token1,
    STATE(188), 1,
      sym_key,
    STATE(147), 2,
      sym_setting,
      sym_title_setting,
  [4229] = 1,
    ACTIONS(489), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4237] = 3,
    ACTIONS(545), 1,
      sym_command_block_stop,
    ACTIONS(547), 1,
      aux_sym_keyword_token1,
    STATE(144), 1,
      sym_keyword,
  [4247] = 3,
    ACTIONS(547), 1,
      aux_sym_keyword_token1,
    ACTIONS(549), 1,
      sym_command_block_stop,
    STATE(144), 1,
      sym_keyword,
  [4257] = 2,
    ACTIONS(551), 1,
      aux_sym_metapost_body_token1,
    STATE(108), 1,
      sym_typing_body,
  [4264] = 2,
    ACTIONS(553), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(22), 1,
      sym_tikz_stop,
  [4271] = 2,
    ACTIONS(555), 1,
      aux_sym_metapost_body_token1,
    STATE(170), 1,
      sym_typing_html_body,
  [4278] = 2,
    ACTIONS(557), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(46), 1,
      sym_tikz_stop,
  [4285] = 2,
    ACTIONS(551), 1,
      aux_sym_metapost_body_token1,
    STATE(106), 1,
      sym_typing_body,
  [4292] = 2,
    ACTIONS(559), 1,
      aux_sym_metapost_body_token1,
    STATE(156), 1,
      sym_tikz_body,
  [4299] = 2,
    ACTIONS(561), 1,
      aux_sym_metapost_body_token1,
    STATE(114), 1,
      sym_metapost_body,
  [4306] = 2,
    ACTIONS(563), 1,
      anon_sym_BSLASHstopHTML,
    STATE(40), 1,
      sym_typing_html_stop,
  [4313] = 2,
    ACTIONS(555), 1,
      aux_sym_metapost_body_token1,
    STATE(173), 1,
      sym_typing_html_body,
  [4320] = 2,
    ACTIONS(551), 1,
      aux_sym_metapost_body_token1,
    STATE(109), 1,
      sym_typing_body,
  [4327] = 2,
    ACTIONS(555), 1,
      aux_sym_metapost_body_token1,
    STATE(162), 1,
      sym_typing_html_body,
  [4334] = 2,
    ACTIONS(559), 1,
      aux_sym_metapost_body_token1,
    STATE(171), 1,
      sym_tikz_body,
  [4341] = 2,
    ACTIONS(559), 1,
      aux_sym_metapost_body_token1,
    STATE(158), 1,
      sym_tikz_body,
  [4348] = 2,
    ACTIONS(561), 1,
      aux_sym_metapost_body_token1,
    STATE(111), 1,
      sym_metapost_body,
  [4355] = 2,
    ACTIONS(561), 1,
      aux_sym_metapost_body_token1,
    STATE(110), 1,
      sym_metapost_body,
  [4362] = 2,
    ACTIONS(565), 1,
      anon_sym_BSLASHstopHTML,
    STATE(24), 1,
      sym_typing_html_stop,
  [4369] = 2,
    ACTIONS(567), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(28), 1,
      sym_tikz_stop,
  [4376] = 2,
    ACTIONS(547), 1,
      aux_sym_keyword_token1,
    STATE(144), 1,
      sym_keyword,
  [4383] = 2,
    ACTIONS(569), 1,
      anon_sym_BSLASHstopHTML,
    STATE(53), 1,
      sym_typing_html_stop,
  [4390] = 1,
    ACTIONS(477), 1,
      sym_command_block_stop,
  [4394] = 1,
    ACTIONS(571), 1,
      aux_sym_metapost_body_token1,
  [4398] = 1,
    ACTIONS(573), 1,
      aux_sym_metapost_body_token1,
  [4402] = 1,
    ACTIONS(575), 1,
      aux_sym_metapost_body_token1,
  [4406] = 1,
    ACTIONS(577), 1,
      anon_sym_EQ,
  [4410] = 1,
    ACTIONS(579), 1,
      aux_sym_metapost_body_token1,
  [4414] = 1,
    ACTIONS(549), 1,
      sym_command_block_stop,
  [4418] = 1,
    ACTIONS(581), 1,
      sym_command_block_stop,
  [4422] = 1,
    ACTIONS(583), 1,
      sym_command_block_stop,
  [4426] = 1,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
  [4430] = 1,
    ACTIONS(587), 1,
      sym_command_block_stop,
  [4434] = 1,
    ACTIONS(589), 1,
      sym_command_block_stop,
  [4438] = 1,
    ACTIONS(591), 1,
      anon_sym_BSLASHstopHTML,
  [4442] = 1,
    ACTIONS(593), 1,
      anon_sym_EQ,
  [4446] = 1,
    ACTIONS(595), 1,
      anon_sym_EQ,
  [4450] = 1,
    ACTIONS(597), 1,
      anon_sym_BSLASHstoptikzpicture,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 198,
  [SMALL_STATE(5)] = 294,
  [SMALL_STATE(6)] = 389,
  [SMALL_STATE(7)] = 484,
  [SMALL_STATE(8)] = 579,
  [SMALL_STATE(9)] = 674,
  [SMALL_STATE(10)] = 769,
  [SMALL_STATE(11)] = 864,
  [SMALL_STATE(12)] = 959,
  [SMALL_STATE(13)] = 1054,
  [SMALL_STATE(14)] = 1149,
  [SMALL_STATE(15)] = 1183,
  [SMALL_STATE(16)] = 1217,
  [SMALL_STATE(17)] = 1251,
  [SMALL_STATE(18)] = 1285,
  [SMALL_STATE(19)] = 1319,
  [SMALL_STATE(20)] = 1353,
  [SMALL_STATE(21)] = 1387,
  [SMALL_STATE(22)] = 1421,
  [SMALL_STATE(23)] = 1455,
  [SMALL_STATE(24)] = 1489,
  [SMALL_STATE(25)] = 1523,
  [SMALL_STATE(26)] = 1557,
  [SMALL_STATE(27)] = 1591,
  [SMALL_STATE(28)] = 1625,
  [SMALL_STATE(29)] = 1658,
  [SMALL_STATE(30)] = 1691,
  [SMALL_STATE(31)] = 1724,
  [SMALL_STATE(32)] = 1757,
  [SMALL_STATE(33)] = 1790,
  [SMALL_STATE(34)] = 1823,
  [SMALL_STATE(35)] = 1856,
  [SMALL_STATE(36)] = 1889,
  [SMALL_STATE(37)] = 1922,
  [SMALL_STATE(38)] = 1955,
  [SMALL_STATE(39)] = 1988,
  [SMALL_STATE(40)] = 2021,
  [SMALL_STATE(41)] = 2054,
  [SMALL_STATE(42)] = 2087,
  [SMALL_STATE(43)] = 2120,
  [SMALL_STATE(44)] = 2153,
  [SMALL_STATE(45)] = 2186,
  [SMALL_STATE(46)] = 2219,
  [SMALL_STATE(47)] = 2252,
  [SMALL_STATE(48)] = 2285,
  [SMALL_STATE(49)] = 2318,
  [SMALL_STATE(50)] = 2351,
  [SMALL_STATE(51)] = 2384,
  [SMALL_STATE(52)] = 2417,
  [SMALL_STATE(53)] = 2450,
  [SMALL_STATE(54)] = 2483,
  [SMALL_STATE(55)] = 2519,
  [SMALL_STATE(56)] = 2557,
  [SMALL_STATE(57)] = 2593,
  [SMALL_STATE(58)] = 2628,
  [SMALL_STATE(59)] = 2663,
  [SMALL_STATE(60)] = 2697,
  [SMALL_STATE(61)] = 2731,
  [SMALL_STATE(62)] = 2765,
  [SMALL_STATE(63)] = 2799,
  [SMALL_STATE(64)] = 2833,
  [SMALL_STATE(65)] = 2870,
  [SMALL_STATE(66)] = 2907,
  [SMALL_STATE(67)] = 2944,
  [SMALL_STATE(68)] = 2981,
  [SMALL_STATE(69)] = 3012,
  [SMALL_STATE(70)] = 3029,
  [SMALL_STATE(71)] = 3046,
  [SMALL_STATE(72)] = 3063,
  [SMALL_STATE(73)] = 3084,
  [SMALL_STATE(74)] = 3106,
  [SMALL_STATE(75)] = 3120,
  [SMALL_STATE(76)] = 3142,
  [SMALL_STATE(77)] = 3158,
  [SMALL_STATE(78)] = 3172,
  [SMALL_STATE(79)] = 3188,
  [SMALL_STATE(80)] = 3204,
  [SMALL_STATE(81)] = 3226,
  [SMALL_STATE(82)] = 3240,
  [SMALL_STATE(83)] = 3254,
  [SMALL_STATE(84)] = 3270,
  [SMALL_STATE(85)] = 3286,
  [SMALL_STATE(86)] = 3308,
  [SMALL_STATE(87)] = 3324,
  [SMALL_STATE(88)] = 3338,
  [SMALL_STATE(89)] = 3354,
  [SMALL_STATE(90)] = 3368,
  [SMALL_STATE(91)] = 3382,
  [SMALL_STATE(92)] = 3398,
  [SMALL_STATE(93)] = 3412,
  [SMALL_STATE(94)] = 3434,
  [SMALL_STATE(95)] = 3448,
  [SMALL_STATE(96)] = 3464,
  [SMALL_STATE(97)] = 3488,
  [SMALL_STATE(98)] = 3502,
  [SMALL_STATE(99)] = 3516,
  [SMALL_STATE(100)] = 3539,
  [SMALL_STATE(101)] = 3562,
  [SMALL_STATE(102)] = 3587,
  [SMALL_STATE(103)] = 3610,
  [SMALL_STATE(104)] = 3635,
  [SMALL_STATE(105)] = 3657,
  [SMALL_STATE(106)] = 3677,
  [SMALL_STATE(107)] = 3690,
  [SMALL_STATE(108)] = 3703,
  [SMALL_STATE(109)] = 3716,
  [SMALL_STATE(110)] = 3729,
  [SMALL_STATE(111)] = 3741,
  [SMALL_STATE(112)] = 3753,
  [SMALL_STATE(113)] = 3763,
  [SMALL_STATE(114)] = 3781,
  [SMALL_STATE(115)] = 3793,
  [SMALL_STATE(116)] = 3811,
  [SMALL_STATE(117)] = 3829,
  [SMALL_STATE(118)] = 3847,
  [SMALL_STATE(119)] = 3865,
  [SMALL_STATE(120)] = 3883,
  [SMALL_STATE(121)] = 3894,
  [SMALL_STATE(122)] = 3909,
  [SMALL_STATE(123)] = 3926,
  [SMALL_STATE(124)] = 3937,
  [SMALL_STATE(125)] = 3948,
  [SMALL_STATE(126)] = 3957,
  [SMALL_STATE(127)] = 3970,
  [SMALL_STATE(128)] = 3981,
  [SMALL_STATE(129)] = 3990,
  [SMALL_STATE(130)] = 3999,
  [SMALL_STATE(131)] = 4008,
  [SMALL_STATE(132)] = 4017,
  [SMALL_STATE(133)] = 4028,
  [SMALL_STATE(134)] = 4041,
  [SMALL_STATE(135)] = 4058,
  [SMALL_STATE(136)] = 4069,
  [SMALL_STATE(137)] = 4080,
  [SMALL_STATE(138)] = 4091,
  [SMALL_STATE(139)] = 4102,
  [SMALL_STATE(140)] = 4113,
  [SMALL_STATE(141)] = 4124,
  [SMALL_STATE(142)] = 4135,
  [SMALL_STATE(143)] = 4144,
  [SMALL_STATE(144)] = 4155,
  [SMALL_STATE(145)] = 4163,
  [SMALL_STATE(146)] = 4171,
  [SMALL_STATE(147)] = 4183,
  [SMALL_STATE(148)] = 4191,
  [SMALL_STATE(149)] = 4199,
  [SMALL_STATE(150)] = 4207,
  [SMALL_STATE(151)] = 4215,
  [SMALL_STATE(152)] = 4229,
  [SMALL_STATE(153)] = 4237,
  [SMALL_STATE(154)] = 4247,
  [SMALL_STATE(155)] = 4257,
  [SMALL_STATE(156)] = 4264,
  [SMALL_STATE(157)] = 4271,
  [SMALL_STATE(158)] = 4278,
  [SMALL_STATE(159)] = 4285,
  [SMALL_STATE(160)] = 4292,
  [SMALL_STATE(161)] = 4299,
  [SMALL_STATE(162)] = 4306,
  [SMALL_STATE(163)] = 4313,
  [SMALL_STATE(164)] = 4320,
  [SMALL_STATE(165)] = 4327,
  [SMALL_STATE(166)] = 4334,
  [SMALL_STATE(167)] = 4341,
  [SMALL_STATE(168)] = 4348,
  [SMALL_STATE(169)] = 4355,
  [SMALL_STATE(170)] = 4362,
  [SMALL_STATE(171)] = 4369,
  [SMALL_STATE(172)] = 4376,
  [SMALL_STATE(173)] = 4383,
  [SMALL_STATE(174)] = 4390,
  [SMALL_STATE(175)] = 4394,
  [SMALL_STATE(176)] = 4398,
  [SMALL_STATE(177)] = 4402,
  [SMALL_STATE(178)] = 4406,
  [SMALL_STATE(179)] = 4410,
  [SMALL_STATE(180)] = 4414,
  [SMALL_STATE(181)] = 4418,
  [SMALL_STATE(182)] = 4422,
  [SMALL_STATE(183)] = 4426,
  [SMALL_STATE(184)] = 4430,
  [SMALL_STATE(185)] = 4434,
  [SMALL_STATE(186)] = 4438,
  [SMALL_STATE(187)] = 4442,
  [SMALL_STATE(188)] = 4446,
  [SMALL_STATE(189)] = 4450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(177),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(175),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_start, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(82),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(62),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(71),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(80),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(74),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(54),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(82),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(61),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(71),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(80),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(92),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(56),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(83),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(105),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(21),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(69),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(85),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(72),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(138),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(68),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(93),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(129),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(100),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(70),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(96),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(121),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(104),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [585] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
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
