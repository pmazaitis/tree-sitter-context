; highlights.scm for tree-sitter-context

(text) @usertext 
(title_value (value_text)) @usertext

(command_name) @command

"{" @group
"}" @group
(main_start) @group
(main_stop) @group
;"\\bgroup" @group
;"\\egroup" @group


"[" @option_group
"]" @option_group

(comment) @comment

(escaped) @escaped
