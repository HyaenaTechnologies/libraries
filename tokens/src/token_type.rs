use std::{primitive::str, vec::Vec};

// Token Type Defintion
pub type TokenType = &'static str;

// Token Types
pub const CHARACTER: TokenType = "CHARACTER";
pub const COMMENT: TokenType = "COMMENT";
pub const DELIMITER: TokenType = "DELIMITER";
pub const END_OF_FILE: TokenType = "EOF";
pub const ESCAPE: TokenType = "ESCAPE";
pub const KEYWORD: TokenType = "KEYWORD";
pub const NUMBER: TokenType = "NUMBER";
pub const OPERATOR: TokenType = "OPERATOR";

// Token Type Vector
pub fn types_vector() -> Vec<TokenType> {
    let token_types: Vec<TokenType> = Vec::from([
        CHARACTER,
        COMMENT,
        DELIMITER,
        END_OF_FILE,
        ESCAPE,
        KEYWORD,
        NUMBER,
        OPERATOR,
    ]);

    return token_types;
}
