use std::{
    primitive::char,
    vec::Vec,
};

// Escape Token Defintion
pub type EscapeToken = char;

// Escape Tokens
pub const APOSTROPHE: EscapeToken = '\'';
pub const BACKSLASH: EscapeToken = '\\';
pub const CARRIAGE_RETURN: EscapeToken = '\r';
pub const NEW_LINE: EscapeToken = '\n';
pub const NULL_CHARACTER: EscapeToken = '\0';
pub const QUOTATION_MARK: EscapeToken = '\"';
pub const TAB: EscapeToken = '\t';

// Escape Token Vector
pub fn escapes_vector() -> Vec<EscapeToken> {
    let strings: Vec<EscapeToken> = Vec::from([
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
