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
    $.command_stop,
    $.paragraph_stop,
    // $._eol,
    $._preamble_stop,
    $._postamble_stop,
  ],

  word: $ => $.command_name,

  rules: {
    // CONTENTS

    // DOCUMENT - An entire ConTeXt document.
      
    document: $ => seq($.preamble, $.main, $.postamble),
    
  
    // PREAMBLE
    
    preamble: $ =>  seq(
      repeat($._preamble_content), 
      $._preamble_stop
    ),
    
    _preamble_content: $ => choice(
      $.command,
    ),
    
    
    // MAIN
    
    main: $ =>  choice(
      $.main_text,
      $.main_component,
    ),
    
    main_text: $ => seq("\\starttext", $.command, "\\stoptext"),
    
    main_component: $ => seq("\\startcomponent", $.command, "\\stopcomponent"),
    
    // POSTAMBLE
    
    postamble: $ => seq(
                      repeat($._postamble_content), 
                      $._postamble_stop
                    ),
    
    _postamble_content: $ =>  choice(
                                $.command, 
                              ),
    
    
    
    
    
    // COMMANDS
    
    command: $ => seq(
      $.command_name,
      $.command_stop,
    ),
    
    command_name: $ => /\\([^\r\n]|[@a-zA-Z:_]+\*?)?/,
    
    // EXTRAS
    
    _whitespace: $ => /\s+/,
    
    line_comment: $ => /%[^\r\n]*/,
         
  },
});
