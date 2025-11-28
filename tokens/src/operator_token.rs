use std::{
    primitive::char,
    vec::Vec,
};

// Character Operator Token Defintion
pub type OperatorToken = char;

// Character Operator Tokens
pub const ADDITION: OperatorToken  = '+';
pub const ANNOTATION: OperatorToken  = '@';
pub const ASSIGNMENT: OperatorToken  = '=';
pub const COLON: OperatorToken  = ':';
pub const COMMA: OperatorToken  = ',';
pub const DIVISION: OperatorToken  = '/';
pub const DOLLAR_SIGN: OperatorToken  = '$';
pub const EXCLUSIVE_OR: OperatorToken  = '^';
pub const FIELD_ACCESS: OperatorToken  = '.';
pub const GRAVE_ACCENT: OperatorToken  = '`';
pub const GREATER_THAN: OperatorToken  = '>';
pub const LESS_THAN: OperatorToken  = '<';
pub const LOGICAL_CONJUCTION: OperatorToken  = '&';
pub const LOGICAL_DISJUNCTION: OperatorToken  = '|';
pub const LOGICAL_NEGATION: OperatorToken  = '!';
pub const MODULUS: OperatorToken  = '%';
pub const MULTIPLICATION: OperatorToken  = '*';
pub const NULL_COALESCING: OperatorToken  = '?';
pub const OCTOTHORPE: OperatorToken  = '#';
pub const SEMI_COLON: OperatorToken  = ';';
pub const SUBTRACTION: OperatorToken  = '-';
pub const TILDE: OperatorToken  = '~';
pub const UNDERSCORE: OperatorToken  = '_';

// Operator Token Vector
pub fn operators_vector() -> Vec<OperatorToken> {
    let operators: Vec<OperatorToken> = Vec::from([
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

