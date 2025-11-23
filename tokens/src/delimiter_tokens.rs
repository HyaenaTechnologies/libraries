use std::{
    primitive::str,
    vec::Vec,
};

// Delimiter Token Defintion
pub type DelimiterToken = &'static str;

// Delimiter Tokens
pub const LEFT_BRACKET: DelimiterToken = "{";
pub const LEFT_PARENTHESIS: DelimiterToken = "(";
pub const LEFT_SQUARE_BRACKET: DelimiterToken = "[";
pub const RIGHT_BRACKET: DelimiterToken = "}";
pub const RIGHT_PARENTHESIS: DelimiterToken = ")";
pub const RIGHT_SQUARE_BRACKET: DelimiterToken = "]";

// Delimiter Token Vector
pub fn delimiters_vector() -> Vec<DelimiterToken> {
    let delimiters: Vec<DelimiterToken> = Vec::from([
        LEFT_BRACKET,
        LEFT_PARENTHESIS,
        LEFT_SQUARE_BRACKET,
        RIGHT_BRACKET,
        RIGHT_PARENTHESIS,
        RIGHT_SQUARE_BRACKET,
    ]);

    return delimiters;
}
