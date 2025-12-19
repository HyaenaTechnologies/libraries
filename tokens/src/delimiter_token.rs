use std::{
    primitive::char,
    vec::Vec,
};

// Delimiter Tokens
pub const LEFT_BRACKET: char = '{';
pub const LEFT_PARENTHESIS: char = '(';
pub const LEFT_SQUARE_BRACKET: char = '[';
pub const RIGHT_BRACKET: char = '}';
pub const RIGHT_PARENTHESIS: char = ')';
pub const RIGHT_SQUARE_BRACKET: char = ']';

// Delimiter Token Vector
pub fn delimiters_vector() -> Vec<char> {
    let delimiters: Vec<char> = Vec::from([
        LEFT_BRACKET,
        LEFT_PARENTHESIS,
        LEFT_SQUARE_BRACKET,
        RIGHT_BRACKET,
        RIGHT_PARENTHESIS,
        RIGHT_SQUARE_BRACKET,
    ]);

    return delimiters;
}
