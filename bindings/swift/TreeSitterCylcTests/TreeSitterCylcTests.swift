import XCTest
import SwiftTreeSitter
import TreeSitterCylc

final class TreeSitterCylcTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_cylc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Cylc grammar")
    }
}
