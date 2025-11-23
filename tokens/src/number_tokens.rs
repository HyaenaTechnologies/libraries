use std::{
    primitive::str,
    vec::Vec,
};

// Number Token Defintion
pub type NumberToken = &'static str;

// Number Tokens
pub const ZERO: NumberToken = "0";
pub const ONE: NumberToken = "1";
pub const TWO: NumberToken = "2";
pub const THREE: NumberToken = "3";
pub const FOUR: NumberToken = "4";
pub const FIVE: NumberToken = "5";
pub const SIX: NumberToken = "6";
pub const SEVEN: NumberToken = "7";
pub const EIGHT: NumberToken = "8";
pub const NINE: NumberToken = "9";

// Number Token Vector
pub fn numbers_vector() -> Vec<NumberToken> {
    let numbers: Vec<NumberToken> = Vec::from([
        ZERO,
        ONE,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
    ]);

    return numbers;
}
