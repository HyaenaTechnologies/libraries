use std::{
    primitive::str,
    vec::Vec,
};

// Character Operator Token Defintion
pub type OperatorToken = &'static str;

// Character Operator Tokens
pub const ADDITION: OperatorToken = "+";
pub const ANNOTATION: OperatorToken = "@";
pub const ASSIGNMENT: OperatorToken = "=";
pub const COLON: OperatorToken = ":";
pub const COMMA: OperatorToken = ",";
pub const DIVISION: OperatorToken = "/";
pub const DOLLAR_SIGN: OperatorToken = "$";
pub const EXCLUSIVE_OR: OperatorToken = "^";
pub const FIELD_ACCESS: OperatorToken = ".";
pub const GRAVE_ACCENT: OperatorToken = "`";
pub const GREATER_THAN: OperatorToken = ">";
pub const LESS_THAN: OperatorToken = "<";
pub const LOGICAL_CONJUCTION: OperatorToken = "&";
pub const LOGICAL_DISJUNCTION: OperatorToken = "|";
pub const MODULUS: OperatorToken = "%";
pub const MULTIPLICATION: OperatorToken = "*";
<<<<<<< Updated upstream
pub const MULTIPLICATION_ASSIGNMENT: OperatorToken = "*=";
pub const NEGATION: OperatorToken = "!";
pub const NOT_EQUAL: OperatorToken = "!=";
pub const NULL_COALESCING: OperatorToken = "?";
pub const OCTOTHORPE: OperatorToken = "#";
pub const PATH_SEPARATOR: OperatorToken = "::";
pub const RANGE: OperatorToken = "..";
pub const RETURN_TYPE: OperatorToken = "->";
=======
pub const NEGATION: OperatorToken = "!";
pub const NULL_COALESCING: OperatorToken = "?";
pub const OCTOTHORPE: OperatorToken = "#";
>>>>>>> Stashed changes
pub const SEMI_COLON: OperatorToken = ";";
pub const SUBTRACTION: OperatorToken = "-";
pub const TILDE: OperatorToken = "~";
pub const UNDERSCORE: OperatorToken = "_";

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
        MODULUS,
        MULTIPLICATION,
<<<<<<< Updated upstream
        MULTIPLICATION_ASSIGNMENT,
        NEGATION,
        NOT_EQUAL,
=======
        NEGATION,
>>>>>>> Stashed changes
        NULL_COALESCING,
        OCTOTHORPE,
        SEMI_COLON,
        SUBTRACTION,
        TILDE,
        UNDERSCORE,
    ]);

    return operators;
}

