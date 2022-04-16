// tree-sitter-context
//
// Tree-Sitter parser for the ConTeXt markup language (https://www.contextgarden.net/)

// PROGRESS
//
// ## Cases to handle
//
// [PASS] Areas
// [PASS] Commands
// [PASS] Text
// [PASS] Paragraph Markers
// [PASS] Brace Groups
// [PASS] Command groups (/start and /stop)
// [PASS] Escaped Characters
// [PASS] Comments
// [PASS] Inline Math
// [BORK] Component Name
// [    ] Project Command
// [    ] Product Command
// [    ] Environment Command
// [    ]
// [    ]
//
// ## Injected Languages
// [PASS] Metapost
// [PASS] TiKz
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
// # TODO
//
// * External scanner whitespace?
// * Support markdown typing environment?
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

  externals: ($) => [$._command_stop, $.paragraph_mark, $.text],

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

    component_id: ($) => /[a-zA-Z][a-zA-Z0-9:_-]*/,

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
        $.typing_unparsed_inclusion,
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
    generic_id: ($) => /[a-zA-Z*][a-zA-Z0-9:_-]*/,

    // Command group (TODO: better label here)
    // _callout_command_group: ($) => choice($.project_command),

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

    // FIXME: commands can have multiple scopes
    // # COMMANDS

    command: ($) =>
      prec.right(
        choice(
          seq(
            $.command_name,
            repeat(choice($.empty_block, $.option_block, $.settings_block)),
            optional($.command_scope),
            $._command_stop
          )
          // TODO: include command handling
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
    command_scope: ($) => seq("{", repeat($._content), "}"),

    // # TEXT
    text_block: ($) => seq($.text, repeat(seq($.paragraph_mark, $.text))),

    // # ESCAPED CHARACTERS
    escaped_char: ($) => choice(...escaped_chars),

    escaped: ($) => prec.right(16, seq("\\", $.escaped_char)),

    // PARSED LANGUAGE INCLUSIONS
    //
    // This ConTeXt parser can inject parsing for included language code, as supported by tree-sitter.
    //
    // * MetaPost/Fun (marked, but parsing not yet supported)
    // * TiKz (marked, but parsing not yet supported)
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
    _tikz_start: ($) => "\\starttikzpicture",

    _tikz_stop: ($) => "\\stoptikzpicture",

    tikz_inclusion: ($) =>
      seq($._tikz_start, alias($.inclusion_body, $.tikz_body), $._tikz_stop),

    // Lua
    _luacode_start: ($) => "\\startluacode",

    _luacode_stop: ($) => "\\stopluacode",

    luacode_inclusion: ($) =>
      seq(
        $._luacode_start,
        alias($.inclusion_body, $.luacode_body),
        $._luacode_stop
      ),

    // PARSED TYPING INCLUSIONS
    //
    // This ConTeXt parser can inject parsing for typing environments, as supported by tree-sitter.
    //
    // * MetaPost/Fun (marked, but parsing not yet supported)
    // * HTML
    // * CSS
    // * Lua
    //

    // HTML
    _typing_html_start: ($) => "\\startHTML",

    _typing_html_stop: ($) => "\\stopHTML",

    typing_html_inclusion: ($) =>
      seq(
        $._typing_html_start,
        alias($.inclusion_body, $.typing_html_body),
        $._typing_html_stop
      ),

    // CSS
    _typing_css_start: ($) => "\\startCSS",

    _typing_css_stop: ($) => "\\stopCSS",

    typing_css_inclusion: ($) =>
      seq(
        $._typing_css_start,
        alias($.inclusion_body, $.typing_css_body),
        $._typing_css_stop
      ),

    // MetaPost/Fun
    _typing_mp_start: ($) => "\\startMP",

    _typing_mp_stop: ($) => "\\stopMP",

    typing_mp_inclusion: ($) =>
      seq(
        $._typing_mp_start,
        alias($.inclusion_body, $.typing_mp_body),
        $._typing_mp_stop
      ),

    // LUA
    _typing_lua_start: ($) => "\\startLUA",

    _typing_lua_stop: ($) => "\\stopLUA",

    typing_lua_inclusion: ($) =>
      seq(
        $._typing_lua_start,
        alias($.inclusion_body, $.typing_lua_body),
        $._typing_lua_stop
      ),

    // XML
    _typing_xml_start: ($) => "\\startXML",

    _typing_xml_stop: ($) => "\\stopXML",

    typing_xml_inclusion: ($) =>
      seq(
        $._typing_xml_start,
        alias($.inclusion_body, $.typing_xml_body),
        $._typing_xml_stop
      ),

    // PARSEDXML
    _typing_parsedxml_start: ($) => "\\startPARSEDXML",

    _typing_parsedxml_stop: ($) => "\\stopPARSEDXML",

    typing_parsedxml_inclusion: ($) =>
      seq(
        $._typing_parsedxml_start,
        alias($.inclusion_body, $.typing_parsedxml_body),
        $._typing_parsedxml_stop
      ),

    // UNPARSED TYPING INCLUSIONS
    //
    // (The Plain TeX envirnment is unparsed, for now: there is no tree-sitter parser for
    // Plain TeX, and the LaTeX parser fights with this one over filenames ending in .tex)
    //
    // (A non-goal for this grammar is discovery of any user-generated typing inclusions.)
    _typing_unparsed_start: ($) => choice("\\starttyping", "\\startTEX"),

    _typing_unparsed_stop: ($) => choice("\\stoptyping", "\\stopTEX"),

    typing_body: ($) => /[^\\]*/,

    typing_unparsed_inclusion: ($) =>
      seq(
        $._typing_unparsed_start,
        alias($.typing_body, $.typing_unparsed_body),
        $._typing_unparsed_stop
      ),

    // # EXTRAS

    _whitespace: ($) => /\s+/,

    line_comment: ($) => /%[^\r\n]*/,
  },
});
