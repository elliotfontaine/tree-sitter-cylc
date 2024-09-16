package tree_sitter_cylc_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_cylc "github.com/tree-sitter/tree-sitter-cylc/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cylc.Language())
	if language == nil {
		t.Errorf("Error loading Cylc grammar")
	}
}
