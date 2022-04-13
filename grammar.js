// tree-sitter-context
//
// Tree-Sitter parser for the ConTeXt markup language (https://www.contextgarden.net/)


// CAVEATS



// Special characters in the ConTeXt markup language.
// Note: in the following array, the escaped backslash _must_ be the last character (ug)
var escaped_chars = ['#', '$', '%', '&', '^', '_', '{', '}', '|', '~', '\\'];

// UTILITIES
//
// Cribbed from tree-sitter-latex
const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));
const sepBy = (rule, sep) => optional(sepBy1(rule, sep)); 


module.exports = grammar({
  name: 'context',
  
  extras: $ => [
    $._whitespace, 
    $.line_comment
  ],
  
  externals: $ => [
    $._command_stop,
    $.paragraph_stop,
  ],

  word: $ => $.command_name,

  rules: {
    // ------ CONTENTS




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
    
    _preamble_content: $ => prec(18,
      choice(
        $.command,
      ),
    ),
    
    
    // Main --- text, commands, comments
    
    main: $ => repeat1($._main_content),
    
    _main_content: $ => choice(
      $.line_comment,
      $.command, 
    ),
    
    // Postamble --- text, commands, comments
    
    postamble: $ => seq(
      choice("\\stoptext", "\\stopcomponent"),
      repeat($._postamble_content), 
    ),
    
    _postamble_content: $ =>  choice(
      $.command,
    ),
    
    
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
    
    command_scope: $ => seq("{", /[^}]*/, "}" ),
    
    
    
    // ------ EXTRAS
    
    _whitespace: $ => /\s+/,
    
    line_comment: $ => /%[^\r\n]*/,
         
  },
});
