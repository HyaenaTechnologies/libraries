use std::{
    primitive::char,
    vec::Vec,
};

// Operator Tokens
pub const ADDITION: char  = '+';
pub const ANNOTATION: char  = '@';
pub const ASSIGNMENT: char  = '=';
pub const COLON: char  = ':';
pub const COMMA: char  = ',';
pub const DIVISION: char  = '/';
pub const DOLLAR_SIGN: char  = '$';
pub const EXCLUSIVE_OR: char  = '^';
pub const FIELD_ACCESS: char  = '.';
pub const GRAVE_ACCENT: char  = '`';
pub const GREATER_THAN: char  = '>';
pub const LESS_THAN: char  = '<';
pub const LOGICAL_CONJUCTION: char  = '&';
pub const LOGICAL_DISJUNCTION: char  = '|';
pub const LOGICAL_NEGATION: char  = '!';
pub const MODULUS: char  = '%';
pub const MULTIPLICATION: char  = '*';
pub const NULL_COALESCING: char  = '?';
pub const OCTOTHORPE: char  = '#';
pub const SEMI_COLON: char  = ';';
pub const SUBTRACTION: char  = '-';
pub const TILDE: char  = '~';
pub const UNDERSCORE: char  = '_';

// Operator Token Vector
pub fn operators_vector() -> Vec<char> {
    let operators: Vec<char> = Vec::from([
        ADDITION,
        ANNOTATION,
        ASSIGNMENT,
        COLON,
        COMMA,
        DIVISION,
        DOLLAR_SIGN,
        EXCLUSIVE_OR,
        FIELD_ACCESS,
        GRAVE_ACCENT,
        GREATER_THAN,
        LESS_THAN,
        LOGICAL_CONJUCTION,
        LOGICAL_DISJUNCTION,
        LOGICAL_NEGATION,
        MODULUS,
        MULTIPLICATION,
        NULL_COALESCING,
        OCTOTHORPE,
        SEMI_COLON,
        SUBTRACTION,
        TILDE,
        UNDERSCORE,
    ]);

    return operators;
}

