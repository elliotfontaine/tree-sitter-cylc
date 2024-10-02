# tree-sitter-cylc

[![CI][ci]](https://github.com/elliotfontaine/tree-sitter-cylc/actions/workflows/ci.yml)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-python/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)

A [Tree-Sitter](https://github.com/tree-sitter/tree-sitter) grammar for [Cylc](https://github.com/cylc/cylc-flow)'s workflow configurations.

<!-- <p align="center">
  <img src="https://raw.githubusercontent.com/cylc/cylc-admin/master/docs/img/cylc-logo.svg" width="150" alt="Cylc Logo">
  <img src="https://tree-sitter.github.io/tree-sitter/assets/images/tree-sitter-small.png" width="50" alt="Tree-Sitter Logo">
</p> -->

[ci]: https://img.shields.io/github/actions/workflow/status/elliotfontaine/tree-sitter-cylc/ci.yml?logo=github&label=CI
[pypi]: https://img.shields.io/pypi/v/tree-sitter-cylc?logo=pypi&logoColor=ffd242

## References

- [The `.cylc` File Format](https://cylc.github.io/cylc-doc/stable/html/reference/config/file-format.html#file-format)
- [Workflow Configuration](https://cylc.github.io/cylc-doc/stable/html/reference/config/workflow.html)
- [Global Configuration](https://cylc.github.io/cylc-doc/stable/html/reference/config/global.html)

## Syntax Highlighting

As a grammar, tree-sitter-cylc can be used to generate syntax highlighting for Cylc files in text editors that support Tree-Sitter. [`/queries/highlights.scm`](/queries/highlights.scm) and [`/queries/injections.scm`](/queries/injections.scm) can be used as a template to write queries for your target editor.

#### Supported Editors :

- [Zed](https://zed.dev/) — ✅[`zed-cylc`](https://github.com/elliotfontaine/zed-cylc)
- [Neovim](https://neovim.io/)
- [Helix](https://helix-editor.com/)
- [Lapce](https://lapce.dev/)
- [Pulsar](https://pulsar-edit.dev/)
- [GNU Emacs (≥ 29.1)](https://www.gnu.org/software/emacs/)

## Python Bindings

tree-sitter-cylc is available as a package on [PyPi](https://pypi.org/project/tree-sitter-python/). You can install it through pip:

```sh
pip install tree-sitter tree-sitter-cylc
```

You can then use the **tree_sitter_cylc** module to parse Cylc files from Python:

```py
import tree_sitter_cylc as tscylc
from tree_sitter import Language, Parser

CYLC_LANGUAGE = Language(tscylc.language())
parser = Parser(CYLC_LANGUAGE)

source_code = str(
    """
[runtime]
    [[task_1]]
        script = echo "Hello, World!"
"""
)

tree = parser.parse(bytes(source_code, "utf8"))

root_node = tree.root_node
runtime_section = root_node.children[0]
task_section = runtime_section.children[3]
setting = task_section.children[3]
value = setting.child_by_field_name("value")

assert root_node.type == "workflow_configuration"
assert root_node.start_point == (0, 0)
assert root_node.end_point == (4, 0)
assert runtime_section.type == "runtime_section"
assert task_section.type == "task_section"
assert setting.type == "setting"
assert value.type == "unquoted_string"
```

See [Tree-Sitter's Python bindings](https://github.com/tree-sitter/py-tree-sitter?tab=readme-ov-file#usage) documentation for more information.

## Contributing

Contributions and bug reports are welcome! Please submit a pull request or file an issue on the [GitHub repository](https://github.com/elliotfontaine/zed-cylc).

## License

[MIT](LICENSE)
