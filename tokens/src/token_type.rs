use std::{
    primitive::str,
    vec::Vec,
};

// Token Types
pub const ALPHABETIC: &'static str = "ALPHABETIC";
pub const COMMENT: &'static str = "COMMENT";
pub const DELIMITER: &'static str = "DELIMITER";
pub const END_OF_FILE: &'static str = "EOF";
pub const ESCAPE: &'static str = "ESCAPE";
pub const KEYWORD: &'static str = "KEYWORD";
pub const NUMBER: &'static str = "NUMBER";
pub const OPERATOR: &'static str = "OPERATOR";

// Token Type Vector
pub fn types_vector() -> Vec<&'static str> {
    let token_types: Vec<&'static str> = Vec::from([
        ALPHABETIC,
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
