use std::{
    primitive::char,
    vec::Vec,
};

// Escape Tokens
pub const APOSTROPHE: char = '\'';
pub const BACKSLASH: char = '\\';
pub const CARRIAGE_RETURN: char = '\r';
pub const NEW_LINE: char = '\n';
pub const NULL_CHARACTER: char = '\0';
pub const QUOTATION_MARK: char = '\"';
pub const TAB: char = '\t';

// Escape Token Vector
pub fn escapes_vector() -> Vec<char> {
    let strings: Vec<char> = Vec::from([
        APOSTROPHE,
        BACKSLASH,
        CARRIAGE_RETURN,
        NEW_LINE,
        NULL_CHARACTER,
        QUOTATION_MARK,
        TAB,
    ]);

    return strings;
}
