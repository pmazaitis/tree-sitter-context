; highlights.scm for tree-sitter-context

(text) @user.text
(title_value)  @user.text
(title_text) @user.text

(command_name) @command.name

(setting) @command.set
(keyword) @command.set

(brace_group_start) @group.marker
(brace_group_stop) @group.marker
(command_group_start) @group.marker
(command_group_stop) @group.marker
(main_start) @group.marker
(main_stop) @group.marker
(command_block_start) @group.marker
(command_block_stop) @group.marker

(comment) @comment

(escaped) @escaped

(inline_math) @math
