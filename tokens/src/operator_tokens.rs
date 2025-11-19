use std::{primitive::str, vec::Vec};

// Operator Token Defintion
pub type OperatorToken = &'static str;

// Operator Tokens
pub const ADDITION: OperatorToken = "+";
pub const ADDITION_ASSIGNMENT: OperatorToken = "+=";
pub const ANNOTATION: OperatorToken = "@";
pub const ASSIGNMENT: OperatorToken = "=";
pub const BITWISE_SHIFT_LEFT: OperatorToken = "<<";
pub const BITWISE_SHIFT_RIGHT: OperatorToken = ">>";
pub const BITWISE_SHIFT_LEFT_ASSIGNMENT: OperatorToken = "<<=";
pub const BITWISE_SHIFT_RIGHT_ASSIGNMENT: OperatorToken = ">>=";
pub const COLON: OperatorToken = ":";
pub const COMMA: OperatorToken = ",";
pub const DECREMENT: OperatorToken = "--";
pub const DIVISION: OperatorToken = "/";
pub const DIVISION_ASSIGNMENT: OperatorToken = "/=";
pub const DOLLAR_SIGN: OperatorToken = "$";
pub const EQUALITY: OperatorToken = "==";
pub const EXCLUSIVE_OR: OperatorToken = "^";
pub const FIELD_ACCESS: OperatorToken = ".";
pub const GRAVE_ACCENT: OperatorToken = "`";
pub const GREATER_THAN: OperatorToken = ">";
pub const GREATER_OR_EQUAL: OperatorToken = ">=";
pub const INCLUSIVE_RANGE: OperatorToken = "..=";
pub const INCREMENT: OperatorToken = "++";
pub const LAMBDA: OperatorToken = "=>";
pub const LEFT_ARROW: OperatorToken = "<-";
pub const LESS_THAN: OperatorToken = "<";
pub const LESS_OR_EQUAL: OperatorToken = "<=";
pub const LOGICAL_CONJUCTION: OperatorToken = "&";
pub const LOGICAL_DISJUNCTION: OperatorToken = "|";
pub const MODULUS: OperatorToken = "%";
pub const MODULUS_ASSIGNMENT: OperatorToken = "%=";
pub const MULTIPLICATION: OperatorToken = "*";
pub const MULTIPLICATION_ASSIGNMENT: OperatorToken = "*=";
pub const NEGATION: OperatorToken = "!";
pub const NOT_EQUAL: OperatorToken = "!=";
pub const NULL_COALESCING: OperatorToken = "?";
pub const PATH_SEPARATOR: OperatorToken = "::";
pub const RANGE: OperatorToken = "..";
pub const RETURN_TYPE: OperatorToken = "->";
pub const SEMI_COLON: OperatorToken = ";";
pub const SUBTRACTION: OperatorToken = "-";
pub const SUBTRACTION_ASSIGNMENT: OperatorToken = "-=";
pub const TILDE: OperatorToken = "~";
pub const UNDERSCORE: OperatorToken = "_";
pub const VARIADIC_RANGE: OperatorToken = "...";

// Operator Token Vector
pub fn operators_vector() -> Vec<OperatorToken> {
    let operators: Vec<OperatorToken> = Vec::from([
        ADDITION,
        ADDITION_ASSIGNMENT,
        ANNOTATION,
        ASSIGNMENT,
        BITWISE_SHIFT_LEFT,
        BITWISE_SHIFT_RIGHT,
        BITWISE_SHIFT_LEFT_ASSIGNMENT,
        BITWISE_SHIFT_RIGHT_ASSIGNMENT,
        COLON,
        COMMA,
        DECREMENT,
        DIVISION,
        DIVISION_ASSIGNMENT,
        DOLLAR_SIGN,
        EQUALITY,
        EXCLUSIVE_OR,
        FIELD_ACCESS,
        GRAVE_ACCENT,
        GREATER_THAN,
        GREATER_OR_EQUAL,
        INCLUSIVE_RANGE,
        INCREMENT,
        LAMBDA,
        LEFT_ARROW,
        LESS_THAN,
        LESS_OR_EQUAL,
        LOGICAL_CONJUCTION,
        LOGICAL_DISJUNCTION,
        MODULUS,
        MODULUS_ASSIGNMENT,
        MULTIPLICATION,
        MULTIPLICATION_ASSIGNMENT,
        NEGATION,
        NOT_EQUAL,
        NULL_COALESCING,
        PATH_SEPARATOR,
        RANGE,
        RETURN_TYPE,
        SEMI_COLON,
        SUBTRACTION,
        SUBTRACTION_ASSIGNMENT,
        TILDE,
        UNDERSCORE,
        VARIADIC_RANGE,
    ]);

    return operators;
}
