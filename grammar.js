// tree-sitter-context
//
// Tree-Sitter parser for the ConTeXt markup language (https://www.contextgarden.net/)


// PROGRESS
//
// --- Cases to handle
// 
// [x] Areas
// [p] Commands
// [ ] Text
// [x] Brace Groups
// [ ] Command groups (/start and /stop)
// [ ] Escaped Characters
// [x] Comments
// [ ] Inline Math
// [ ]
//
// --- Injected Languages
// [ ] Metapost
// [ ] TiKz
// [ ] Lua
// [ ] 

// --- Injected languages for Typing Environments
// [ ] Plain
// [ ] HTML
// [ ] CSS
// [ ]


// ------ PRECEDENCE LIST
//
// 20:  (document choice) prec(20, seq($.preamble, $.main, $.postamble)),
// 18:  _preamble_content: $ => prec(18,
// 16:  escaped: $ => prec(16,seq('\\', $.escapechar)),  
// 14:  paragraph: $ => prec.right(14,
// 14:  _paragraph_content: $ => prec.left(14,
// r:   command: $ => prec.right(


// ------ HELPERS
//
// Special characters in the ConTeXt markup language.
// Note: in the following array, the escaped backslash _must_ be the last character (ug)
var escaped_chars = ['#', '$', '%', '&', '^', '_', '{', '}', '|', '~', '\\'];

// Possibly useful helper functions?
// Cribbed from tree-sitter-latex
// const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));
// const sepBy = (rule, sep) => optional(sepBy1(rule, sep)); 


module.exports = grammar({
  name: 'context',
  
  extras: $ => [
    $._whitespace, 
    $.line_comment
  ],
  
  externals: $ => [
    $._command_stop,
    $._paragraph_stop,
  ],

  word: $ => $.command_name,

  rules: {
    // ------ CONTENT CONTEXTS
    //
    // Content allowed in different parts of the document
    // TODO: refactor when things are stable
    
    _preamble_content: $ => prec(18,
      choice(
        $.command,
        $.line_comment,
        $.escaped,
      ),
    ),
    
    _main_content: $ => choice(
      $.line_comment,
      $.command,
      $.brace_group,
      $.escaped, 
      // $.text,
    ),
    
    _postamble_content: $ =>  choice(
      $.command,
      $.line_comment,
      $.escaped,
      $.brace_group,
    ),
    
    _group_content: $ => choice(
      $.command,
      $.line_comment,
      $.brace_group,
      $.escaped,
      // $.text,
    ),
    
    // _paragraph_content: $ => prec.left(14,
    //   choice(
    //     $.command,
    //     $.line_comment,
    //     $.text,
    //     $.escaped,
    //   ),
    // ),
    
    _command_scope_content: $ => /[^}]*/,
    
    
    // ------ DOCUMENT - An entire ConTeXt document.
      
    document: $ => choice(
      prec(20, seq($.preamble, $.main, $.postamble)),
      $.main,
    ),
  
    // Preamble --- commands and comments
    
    preamble: $ =>  seq(
      repeat($._preamble_content), 
      choice("\\starttext", "\\startcomponent"),
    ),
    
    // Main --- text, commands, comments
    
    main: $ => repeat1($._main_content),
  
    // Postamble --- text, commands, comments
    
    postamble: $ => seq(
      choice("\\stoptext", "\\stopcomponent"),
      repeat($._postamble_content), 
    ),
    
    
    // ------ GROUPS
    
    brace_group: $ => choice(
      seq("{", repeat($._group_content), "}"),
      seq("\\bgroup", repeat($._group_content), "}"),
      seq("{", repeat($._group_content), "\\egroup"),
      seq("\\bgroup", repeat($._group_content), "\\egroup"),
    ),
  
    
    // ------ PARAGRAPH
    
    // paragraph: $ => prec.right(14,
    //   seq( 
    //     repeat1(
    //       $._paragraph_content
    //     ),
    //     $._paragraph_stop,
    //   )
    // ),
     
        
    // ------ COMMANDS
    
    command: $ => prec.right(
      choice(
        seq(
          $.command_name,
          $._command_stop,
        ),
        seq(
          $.command_name,
          $.command_scope,
          $._command_stop,
        ),
      )
    ),
    
    command_name: $ => /\\([^\r\n]|[@a-zA-Z:_]+)?/,
    
    command_scope: $ => seq("{", repeat($._command_scope_content), "}" ),
  
    
    // ------ TEXT
    // text: $ => new RegExp('[^\\]\\['+escaped_chars.slice(1).join('')+'\\]+'),   
    // text: $ => /[^\^#$%&_{}|~\\]+/,
    
    
    // ------ ESCAPED CHARACTERS
    escapechar: $ => choice(...escaped_chars),
    
    escaped: $ => prec(16,seq('\\', $.escapechar)),
    
    
    // ------ EXTRAS
    
    _whitespace: $ => /\s+/,
    
    line_comment: $ => /%[^\r\n]*/,
         
  },
});
