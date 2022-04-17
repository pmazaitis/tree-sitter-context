// tree-sitter-context
//
// Tree-Sitter parser for the ConTeXt markup language (https://www.contextgarden.net/)

// PROGRESS
//
// ## Cases to handle
//
// [PASS] Areas
// [PASS] Commands
// [PASS] Scopes
// [PASS] Text
// [PASS] Paragraph Markers
// [PASS] Brace Groups
// [PASS] Command groups (/start and /stop)
// [PASS] Escaped Characters
// [PASS] Comments
// [PASS] Inline Math
// [PASS] Component Name (component ID required)
// [PASS] Project Command
// [PASS] Product Command
// [PASS] Environment Command
// [    ]
//
// ## Injected Languages
// [PASS] MetaPost/Fun (no parsing support)
// [PASS] TiKz (no parsing support)
// [PASS] Lua
//
// ## Injected languages for Typing Environments
// [PASS] Plain
// [PASS] HTML
// [PASS] CSS
// [PASS] MP
// [PASS] Lua
// [PASS] XML/UNPARSEDXML
// [PASS] Unparsed
//
// # Work list
//
// * TODO: We need external scanners to find the end of injection environments...
// * TODO: ...once that's done, remove exclusion of \\ from those environments
// * External scanner whitespace? (ask on github?)
// * put explicit boundary markers back for highlighting?
//
// # PRECEDENCE LIST
//
// 20  :  (document choice) prec(20, seq($.preamble, $.main, $.postamble)),
// 16  :  escaped: $ => prec(16,seq('\\', $.escapechar)),
// 14  :  settings_block: $ => prec(14,seq("[",sepBy($.setting, ','),"]")),
// 12  :  option_block: $ => prec(12, seq("[",sepBy($.keyword, ','),"]")),
// 10  :  inline_math: $ => prec(10,seq('$', repeat1($._math_content), '$')),
// r   :   command: $ => prec.right(

// # HELPERS
//
// Special characters in the ConTeXt markup language.
// Note: in the following array, the escaped backslash _must_ be the last character (ug)
var escaped_chars = ["#", "$", "%", "&", "^", "_", "{", "}", "|", "~", "\\"];

// Possibly useful helper functions?
// Cribbed from tree-sitter-latex
const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));
const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
  name: "context",

  extras: ($) => [$._whitespace, $.line_comment],

  externals: ($) => [
    $._command_stop,
    $.paragraph_mark,
    $.text,
    $.code_tikz_body,
    $.code_lua_body,
    $.typing_html_body,
    $.typing_css_body,
    $.typing_mp_body,
    $.typing_lua_body,
    $.typing_xml_body,
    $.typing_parsedxml_body,
    $.typing_tex_body,
    $.typing_unnamed_body,
  ],

  word: ($) => $.command_name,

  rules: {
    // # DOCUMENT - An entire ConTeXt document.
    document: ($) =>
      choice(prec(20, seq($.preamble, $.main, $.postamble)), $.main),

    // # AREAS
    //
    // Preamble --- commands and comments
    preamble: ($) =>
      seq(
        repeat($._content),
        choice(
          "\\starttext",
          // "\\startcomponent",
          seq(
            "\\startcomponent",
            choice(
              seq(/[ \t]+/, $.component_id),
              seq("[", $.component_id, "]"),
              seq(/[ \t]+/, "[", $.component_id, "]")
            )
          )
        )
      ),

    component_id: ($) => /[a-zA-Z*][a-zA-Z0-9:_-]*/,

    // Main --- text, commands, comments
    main: ($) => repeat1($._content),

    // Postamble --- text, commands, comments
    postamble: ($) =>
      seq(choice("\\stoptext", "\\stopcomponent"), repeat($._content)),

    // # CONTENT
    //
    _content: ($) =>
      choice(
        $.line_comment,
        $.command,
        $.brace_group,
        $.escaped,
        $.inline_math,
        $.command_group,
        $.text_block,
        $.luacode_inclusion,
        $.tikz_inclusion,
        $.metapost_inclusion,
        $.typing_unnamed_inclusion,
        $.typing_mp_inclusion,
        $.typing_lua_inclusion,
        $.typing_html_inclusion,
        $.typing_css_inclusion,
        $.typing_xml_inclusion,
        $.typing_parsedxml_inclusion,
        // the following should only appear in the preamble?
        $.project_command,
        $.product_command,
        $.environment_command
      ),

    // INCLUDE, PROJECT and ENVIRONMENT COMMANDS
    //
    // These commands do _not_ require braces to grab the next token as scope.

    // Generic ID for aliasing
    generic_id: ($) => /[a-zA-Z][a-zA-Z0-9:_-]*/,

    project_command: ($) =>
      seq(
        "\\project",
        choice(
          seq(/[ \t]+/, alias($.generic_id, $.project_id)),
          seq("[", alias($.generic_id, $.project_id), "]"),
          seq(/[ \t]+/, "[", alias($.generic_id, $.project_id), "]")
        )
      ),

    product_command: ($) =>
      seq(
        "\\product",
        choice(
          seq(/[ \t]+/, alias($.generic_id, $.product_id)),
          seq("[", alias($.generic_id, $.product_id), "]"),
          seq(/[ \t]+/, "[", alias($.generic_id, $.product_id), "]")
        )
      ),

    environment_command: ($) =>
      seq(
        "\\environment",
        choice(
          seq(/[ \t]+/, alias($.generic_id, $.environment_id)),
          seq("[", alias($.generic_id, $.environment_id), "]"),
          seq(/[ \t]+/, "[", alias($.generic_id, $.environment_id), "]")
        )
      ),

    // # GROUPS

    // Brace Groups
    brace_group: ($) =>
      choice(
        seq("{", repeat($._content), "}"),
        seq("\\bgroup", repeat($._content), "}"),
        seq("{", repeat($._content), "\\egroup"),
        seq("\\bgroup", repeat($._content), "\\egroup")
      ),

    // Command Group

    // ConTeXt can also group document content between the commands "\start" and "\stop"
    command_group: ($) =>
      prec(10, seq(/\\start[^a-zA-Z]/, repeat($._content), /\\stop[^a-zA-Z]/)),

    // # INLINE MATH
    //
    // ConTeXt can handle inline math mode like TeX, marking the start and stop of math mode with a dollar sign ('$').
    // Brace groups ({}) are needed in inline math mode.

    math_group: ($) => seq("{", repeat($._math_content), "}"),

    _math_content: ($) =>
      choice($.line_comment, $.escaped, $.math_group, $.math_text),

    math_text: ($) => /[^${}]+/,

    inline_math: ($) => prec(10, seq("$", repeat1($._math_content), "$")),

    // # COMMANDS

    command: ($) =>
      prec.right(
        choice(
          seq(
            $.command_name,
            repeat(choice($.empty_block, $.option_block, $.settings_block)),
            repeat($.command_scope),
            $._command_stop
          )
        )
      ),

    // ## Command Name
    command_name: ($) => /\\[@a-zA-Z:]+/,

    // ## Empty Block
    empty_block: ($) => choice("[]", seq("[", /\s*/, "]")),

    // ## Option Block
    option_block: ($) => prec(12, seq("[", sepBy($.keyword, ","), "]")),

    keyword: ($) => /[^\s=,\[\]]+/,

    // ## Settings Block
    settings_block: ($) => prec(14, seq("[", sepBy($._setting, ","), "]")),

    _setting: ($) =>
      choice($.generic_setting, $.title_setting, $.subtitle_setting),

    generic_setting: ($) => seq($.key, "=", $.value),

    title_setting: ($) => seq("title", "=", $.value),

    subtitle_setting: ($) => seq("subtitle", "=", $.value),

    key: ($) => /[^\s=,\[\]]+/,

    value: ($) => prec.right(repeat1($._value_content)),

    _value_content: ($) =>
      choice(
        $.line_comment,
        $.escaped,
        $.value_brace_group,
        $.value_text,
        $.command
      ),

    value_text: ($) => /[^\\{}\[\]\s,][^\\{}\[\],]*/,

    value_brace_group: ($) => seq("{", repeat($._value_content), "}"),

    // ## Scope
    command_scope: ($) =>
      seq(optional($._end_of_line), "{", repeat($._content), "}"),

    // # TEXT
    text_block: ($) => seq($.text, repeat(seq($.paragraph_mark, $.text))),

    // # ESCAPED CHARACTERS
    escaped_char: ($) => choice(...escaped_chars),

    escaped: ($) => prec.right(16, seq("\\", $.escaped_char)),

    // PARSED LANGUAGE INCLUSIONS
    //
    // This ConTeXt parser can inject parsing for included language code, as supported by tree-sitter.
    //
    // * MetaPost/Fun (marked, but parsing not yet supported by tree-sitter)
    // * TiKz (marked, but parsing not yet supported by tree-sitter)
    // * Lua
    //

    // We alias the following token for all inclusion bodies
    inclusion_body: ($) => /[^\\]*/,

    // Metafun/Post
    _metapost_start: ($) =>
      choice(
        "\\startMPinclusions",
        "\\startuseMPgraphic",
        "\\startreusableMPgraphic",
        "\\startMPcode",
        "\\startMPpage",
        "\\startstaticMPfigure"
      ),

    _metapost_stop: ($) =>
      choice(
        "\\stopMPinclusions",
        "\\stopuseMPgraphic",
        "\\stopreusableMPgraphic",
        "\\stopMPcode",
        "\\stopMPpage",
        "\\stopstaticMPfigure"
      ),

    metapost_inclusion: ($) =>
      seq(
        $._metapost_start,
        alias($.inclusion_body, $.metapost_body),
        $._metapost_stop
      ),

    // TiKz
    tikz_inclusion: ($) => seq("\\starttikzpicture", $.code_tikz_body),

    // Lua
    luacode_inclusion: ($) => seq("\\startluacode", $.code_lua_body),

    // TYPING INCLUSIONS
    //
    // This ConTeXt parser can inject parsing for typing environments, as supported by tree-sitter.
    //
    // * MetaPost/Fun (marked, but parsing not yet supported by tree-sitter)
    // * HTML
    // * CSS
    // * Lua
    // * XML
    // * PARSEDXML
    //
    // * TeX (marked, but tree-sitter support is tricky)
    // * Generic Typing Environment

    // HTML
    typing_html_inclusion: ($) => seq("\\startHTML", $.typing_html_body),

    // CSS
    typing_css_inclusion: ($) => seq("\\startCSS", $.typing_css_body),

    // MetaPost/Fun
    typing_mp_inclusion: ($) => seq("\\startMP", $.typing_mp_body),

    // LUA
    typing_lua_inclusion: ($) => seq("\\startLUA", $.typing_lua_body),

    // XML
    typing_xml_inclusion: ($) => seq("\\startXML", $.typing_xml_body),

    // PARSEDXML
    typing_parsedxml_inclusion: ($) =>
      seq("\\startPARSEDXML", $.typing_parsedxml_body),

    // TEX
    typing_tex_inclusion: ($) => seq("\\startTEX", $.typing_tex_body),

    // UNNAMED TYPING ENVIRONMENT
    typing_unnamed_inclusion: ($) =>
      seq("\\starttyping", $.typing_unnamed_body),

    // # EXTRAS

    _whitespace: ($) => /\s+/,

    line_comment: ($) => /%[^\r\n]*/,

    _end_of_line: ($) => /\r\n?|\n/,
  },
});
