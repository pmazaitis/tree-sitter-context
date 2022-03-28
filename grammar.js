// Note: the escaped backslash _must_ be the last character in this array (ug)
var escaped_chars = ['#', '$', '%', '&', '^', '_', '{', '}', '|', '~', '\\'];

var group_start = ["{", "\\start"]; // TODO: Use keyword extraction for this?

var group_stop = ["{", "\\stop"];

// _extras: $ => [" ", "\t", "\n"];

// notes - Handling folds
//
// we want to have a notion of foldable nodes - 


module.exports = grammar({
  name: 'ConTeXt',

  rules: {
    // The production rules of the context-free grammar for the ConTeXt markup language

    document: $ => repeat1($._content),
    
    // AREA MARKERS
       
    main_start: $ => prec(2, choice("\\starttext","\\startcomponent")), 
    
    main_stop: $ => prec(2, choice("\\stoptext","\\stopcomponent")),   
       
    // CONTENT COLLECTIONS
    
    _content: $ => choice($.comment, $.escaped, $.group, $.text, $.command, $._newline, $.main_start, $.main_stop),
    
    _opcontent: $ => choice($.comment, $.escaped, $.group, $.optext, $.command, $._newline),

    // COMMENTS
    
    comment: $ => prec(1, token(seq('%', /.*/))),

    // ESCAPED CHARACTERS

    escapechar: $ => choice(...escaped_chars),

    escaped: $ => prec(1, seq('\\', $.escapechar)),

    // GROUPS

    group: $ => prec(1, seq('{', repeat($._content), '}')),
    
    // COMMANDS
    
    command: $ => prec(1, seq('\\', $.name, repeat(seq(optional(/\s+/), $.optionblock)), optional(/\s+/))),
    
    optionblock: $ =>  prec(1, seq('[', optional(seq($._options, optional(repeat(seq(',', optional(/\s+/), $._options))))), optional(','), ']')),
     
    _options: $ => seq($.opkey, optional(seq('=', optional($.opval)))),
    
    opkey: $ =>  /[^=,\[\] ]+/,
            
    opval: $ => repeat1($._opcontent),
    
    // We have to double the slashes at the end of the regexp to account for the under-interpolation of escape in this context
    text: $ => new RegExp('[^\\]\\['+escaped_chars.slice(1).join('')+'\\]+'),
    
    optext: $ => /[^\\{}\[\]\s,][^\\{}\[\],]*/,
    
    name: $ => /[a-zA-Z0-9]+/,
 
    _newline: $ => prec(1, '\n'),
    
  },
  
  // conflicts: $ => [
  //   [$.preamble, $.main_none]
  // ]
});
