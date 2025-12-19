use std::{
    primitive::char,
    vec::Vec,
};

// Number Tokens
pub const ZERO: char = '0';
pub const ONE: char = '1';
pub const TWO: char = '2';
pub const THREE: char = '3';
pub const FOUR: char = '4';
pub const FIVE: char = '5';
pub const SIX: char = '6';
pub const SEVEN: char = '7';
pub const EIGHT: char = '8';
pub const NINE: char = '9';

// Number Token Vector
pub fn numbers_vector() -> Vec<char> {
    let numbers: Vec<char> = Vec::from([
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
