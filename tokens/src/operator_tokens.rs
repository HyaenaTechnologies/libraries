use std::{primitive::{str, char}, vec::Vec};

// Character Operator Token Defintion
pub type CharacterOperatorToken = char;

// Character Operator Tokens
pub const ADDITION: CharacterOperatorToken = '+';
pub const ANNOTATION: CharacterOperatorToken = '@';
pub const ASSIGNMENT: CharacterOperatorToken = '=';
pub const COLON: CharacterOperatorToken = ':';
pub const COMMA: CharacterOperatorToken = ',';
pub const DIVISION: CharacterOperatorToken = '/';
pub const DOLLAR_SIGN: CharacterOperatorToken = '$';
pub const EXCLUSIVE_OR: CharacterOperatorToken = '^';
pub const FIELD_ACCESS: CharacterOperatorToken = '.';
pub const GRAVE_ACCENT: CharacterOperatorToken = '`';
pub const GREATER_THAN: CharacterOperatorToken = '>';
pub const LESS_THAN: CharacterOperatorToken = '<';
pub const LOGICAL_CONJUCTION: CharacterOperatorToken = '&';
pub const LOGICAL_DISJUNCTION: CharacterOperatorToken = '|';
pub const MODULUS: CharacterOperatorToken = '%';
pub const MULTIPLICATION: CharacterOperatorToken = '*';
pub const NEGATION: CharacterOperatorToken = '!';
pub const NULL_COALESCING: CharacterOperatorToken = '?';
pub const SEMI_COLON: CharacterOperatorToken = ';';
pub const SUBTRACTION: CharacterOperatorToken = '-';
pub const TILDE: CharacterOperatorToken = '~';
pub const UNDERSCORE: CharacterOperatorToken = '_';

// String Operator Token Defintion
pub type StringOperatorToken = &'static str;

// String Operator Tokens
pub const ADDITION_ASSIGNMENT: StringOperatorToken = "+=";
pub const BITWISE_SHIFT_LEFT: StringOperatorToken = "<<";
pub const BITWISE_SHIFT_RIGHT: StringOperatorToken = ">>";
pub const BITWISE_SHIFT_LEFT_ASSIGNMENT: StringOperatorToken = "<<=";
pub const BITWISE_SHIFT_RIGHT_ASSIGNMENT: StringOperatorToken = ">>=";
pub const DECREMENT: StringOperatorToken = "--";
pub const DIVISION_ASSIGNMENT: StringOperatorToken = "/=";
pub const EQUALITY: StringOperatorToken = "==";
pub const GREATER_OR_EQUAL: StringOperatorToken = ">=";
pub const INCLUSIVE_RANGE: StringOperatorToken = "..=";
pub const INCREMENT: StringOperatorToken = "++";
pub const LAMBDA: StringOperatorToken = "=>";
pub const LEFT_ARROW: StringOperatorToken = "<-";
pub const LESS_OR_EQUAL: StringOperatorToken = "<=";
pub const MODULUS_ASSIGNMENT: StringOperatorToken = "%=";
pub const MULTIPLICATION_ASSIGNMENT: StringOperatorToken = "*=";
pub const NOT_EQUAL: StringOperatorToken = "!=";
pub const PATH_SEPARATOR: StringOperatorToken = "::";
pub const RANGE: StringOperatorToken = "..";
pub const RETURN_TYPE: StringOperatorToken = "->";
pub const SUBTRACTION_ASSIGNMENT: StringOperatorToken = "-=";
pub const VARIADIC_RANGE: StringOperatorToken = "...";

// Character Operator Token Vector
pub fn character_operators_vector() -> Vec<CharacterOperatorToken> {
    let operators: Vec<CharacterOperatorToken> = Vec::from([
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
        NEGATION,
        NULL_COALESCING,
        SEMI_COLON,
        SUBTRACTION,
        TILDE,
        UNDERSCORE
    ]);

    return operators;
}

// String Operator Token Vector
pub fn string_operators_vector() -> Vec<StringOperatorToken> {
    let operators: Vec<StringOperatorToken> = Vec::from([
        ADDITION_ASSIGNMENT,
        BITWISE_SHIFT_LEFT,
        BITWISE_SHIFT_RIGHT,
        BITWISE_SHIFT_LEFT_ASSIGNMENT,
        BITWISE_SHIFT_RIGHT_ASSIGNMENT,
        DECREMENT,
        DIVISION_ASSIGNMENT,
        EQUALITY,
        GREATER_OR_EQUAL,
        INCLUSIVE_RANGE,
        INCREMENT,
        LAMBDA,
        LEFT_ARROW,
        LESS_OR_EQUAL,
        MODULUS_ASSIGNMENT,
        MULTIPLICATION_ASSIGNMENT,
        NOT_EQUAL,
        PATH_SEPARATOR,
        RANGE,
        RETURN_TYPE,
        SUBTRACTION_ASSIGNMENT,
        VARIADIC_RANGE
    ]);

    return operators;
}
