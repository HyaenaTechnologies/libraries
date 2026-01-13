use std::{
    io::{StdoutLock, Write, stdout},
    primitive::{bool, char, str, u8, usize},
    process::exit,
    string::String,
    vec::Vec,
};

use crate::tokens::{
    comment_token::{
        BLOCK, INNER_BLOCK, INNER_LINE, LINE, OCTOTHORPE_BLOCK, OCTOTHORPE_INNER_BLOCK,
        OCTOTHORPE_LINE, OCTOTHORPE_OUTER_BLOCK, OCTOTHROPE_INNER_LINE, OCTOTHROPE_OUTER_LINE,
        OUTER_BLOCK, OUTER_LINE,
    },
    delimiter_token::{
        LEFT_BRACKET, LEFT_PARENTHESIS, LEFT_SQUARE_BRACKET, RIGHT_BRACKET, RIGHT_PARENTHESIS,
        RIGHT_SQUARE_BRACKET,
    },
    escape_token::{
        APOSTROPHE, BACKSLASH, CARRIAGE_RETURN, NEW_LINE, NULL_CHARACTER, QUOTATION_MARK, TAB,
    },
    operator_token::{
        ADDITION, ANNOTATION, ASSIGNMENT, COLON, COMMA, DIVISION, DOLLAR_SIGN, EXCLUSIVE_OR,
        FIELD_ACCESS, GRAVE_ACCENT, GREATER_THAN, LESS_THAN, LOGICAL_CONJUCTION,
        LOGICAL_DISJUNCTION, LOGICAL_NEGATION, MODULUS, MULTIPLICATION, NULL_COALESCING,
        OCTOTHORPE, SEMI_COLON, SUBTRACTION, TILDE, UNDERSCORE,
    },
    token_type::{ALPHABETIC, COMMENT, DELIMITER, END_OF_FILE, ESCAPE, NUMBER, OPERATOR},
};

// Token Definition
pub struct Token {
    pub lexeme: String,
    pub token_type: &'static str,
}

// Lexer Definition
pub struct Lexer {
    pub position: usize,
    pub source: String,
    pub tokens: Vec<Token>,
}

// Returns True if Comment Token
pub fn comment_token(source_token: &str) -> bool {
    match source_token {
        BLOCK
        | INNER_BLOCK
        | INNER_LINE
        | LINE
        | OCTOTHORPE_BLOCK
        | OCTOTHORPE_INNER_BLOCK
        | OCTOTHORPE_LINE
        | OCTOTHORPE_OUTER_BLOCK
        | OCTOTHROPE_INNER_LINE
        | OCTOTHROPE_OUTER_LINE
        | OUTER_BLOCK
        | OUTER_LINE => {
            return true;
        }
        _ => {
            return false;
        }
    };
}

// Returns True if Delimiter Character
pub fn delimiter_character(source_token: char) -> bool {
    match source_token {
        LEFT_BRACKET | LEFT_PARENTHESIS | LEFT_SQUARE_BRACKET | RIGHT_BRACKET
        | RIGHT_PARENTHESIS | RIGHT_SQUARE_BRACKET => {
            return true;
        }
        _ => {
            return false;
        }
    };
}

// Returns True if Escape Character
pub fn escape_character(source_token: char) -> bool {
    match source_token {
        APOSTROPHE | BACKSLASH | CARRIAGE_RETURN | NEW_LINE | NULL_CHARACTER | QUOTATION_MARK
        | TAB => {
            return true;
        }
        _ => {
            return false;
        }
    };
}

// Returns True if Operator Character
pub fn operator_character(source_token: char) -> bool {
    match source_token {
        ADDITION | ANNOTATION | ASSIGNMENT | COLON | COMMA | DIVISION | DOLLAR_SIGN
        | EXCLUSIVE_OR | FIELD_ACCESS | GRAVE_ACCENT | GREATER_THAN | LESS_THAN
        | LOGICAL_CONJUCTION | LOGICAL_DISJUNCTION | MODULUS | MULTIPLICATION
        | LOGICAL_NEGATION | NULL_COALESCING | OCTOTHORPE | SEMI_COLON | SUBTRACTION | TILDE
        | UNDERSCORE => {
            return true;
        }
        _ => {
            return false;
        }
    };
}

// Print Token
pub fn print_token(source_token: &Token) -> u8 {
    let mut standard_output: StdoutLock = stdout().lock();

    writeln!(standard_output, "{}", source_token.lexeme).unwrap();
    writeln!(standard_output, "{}", source_token.token_type).unwrap();

    return 0;
}

// Returns a Token
pub fn token(value: String, kind: &'static str) -> Token {
    let constructed_token: Token = Token {
        lexeme: value,
        token_type: kind,
    };

    return constructed_token;
}

// Tokenizer
pub fn tokenize(scanner: Lexer) -> Vec<Token> {
    let characters: Vec<char> = scanner.source.chars().collect();
    let mut position: usize = scanner.position;
    let mut tokens: Vec<Token> = scanner.tokens;

    while position < characters.len() && characters.is_empty() == false {
        if characters[position].is_alphabetic() {
            let mut alphabetic: String = String::new();

            while characters[position].is_alphabetic() {
                alphabetic.push(characters[position]);
                position = position + 1;
            }

            tokens.push(token(alphabetic, ALPHABETIC));
        } else if delimiter_character(characters[position]) {
            tokens.push(token(String::from(characters[position]), DELIMITER));
            position = position + 1;
        } else if escape_character(characters[position]) {
            tokens.push(token(String::from(characters[position]), ESCAPE));
            position = position + 1;
        } else if characters[position].is_ascii_digit() {
            let mut number: String = String::new();

            while characters[position].is_ascii_digit() {
                number.push(characters[position]);
                position = position + 1;
            }

            tokens.push(token(number, NUMBER));
        } else if operator_character(characters[position]) {
            let mut operator: String = String::new();

            while operator_character(characters[position]) {
                operator.push(characters[position]);
                position = position + 1;
            }

            if comment_token(operator.as_str()) {
                tokens.push(token(operator, COMMENT));
            } else {
                tokens.push(token(operator, OPERATOR));
            }
        } else if characters[position].is_whitespace() {
            position = position + 1;
        } else {
            unknown_token(String::from(characters[position]));
        }
    }

    tokens.push(token(String::from(NULL_CHARACTER), END_OF_FILE));

    return tokens;
}

// Unknow Token
pub fn unknown_token(source_token: String) -> ! {
    eprintln!("Uknown Token: {}", source_token);
    exit(1);
}
