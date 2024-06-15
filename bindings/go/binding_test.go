package tree_sitter_context_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-context"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_context.Language())
	if language == nil {
		t.Errorf("Error loading Context grammar")
	}
}
