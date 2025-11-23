use std::{
    primitive::char,
    vec::Vec,
};

// Character Token Defintion
pub type CharacterToken = char;

// Character Tokens
pub const LOWER_CASE_A: CharacterToken = 'a';
pub const LOWER_CASE_B: CharacterToken = 'b';
pub const LOWER_CASE_C: CharacterToken = 'c';
pub const LOWER_CASE_D: CharacterToken = 'd';
pub const LOWER_CASE_E: CharacterToken = 'e';
pub const LOWER_CASE_F: CharacterToken = 'f';
pub const LOWER_CASE_G: CharacterToken = 'g';
pub const LOWER_CASE_H: CharacterToken = 'h';
pub const LOWER_CASE_I: CharacterToken = 'i';
pub const LOWER_CASE_J: CharacterToken = 'j';
pub const LOWER_CASE_K: CharacterToken = 'k';
pub const LOWER_CASE_L: CharacterToken = 'l';
pub const LOWER_CASE_M: CharacterToken = 'm';
pub const LOWER_CASE_N: CharacterToken = 'n';
pub const LOWER_CASE_O: CharacterToken = 'o';
pub const LOWER_CASE_P: CharacterToken = 'p';
pub const LOWER_CASE_Q: CharacterToken = 'q';
pub const LOWER_CASE_R: CharacterToken = 'r';
pub const LOWER_CASE_S: CharacterToken = 's';
pub const LOWER_CASE_T: CharacterToken = 't';
pub const LOWER_CASE_U: CharacterToken = 'u';
pub const LOWER_CASE_V: CharacterToken = 'v';
pub const LOWER_CASE_W: CharacterToken = 'w';
pub const LOWER_CASE_X: CharacterToken = 'x';
pub const LOWER_CASE_Y: CharacterToken = 'y';
pub const LOWER_CASE_Z: CharacterToken = 'z';
pub const UPPER_CASE_A: CharacterToken = 'A';
pub const UPPER_CASE_B: CharacterToken = 'B';
pub const UPPER_CASE_C: CharacterToken = 'C';
pub const UPPER_CASE_D: CharacterToken = 'D';
pub const UPPER_CASE_E: CharacterToken = 'E';
pub const UPPER_CASE_F: CharacterToken = 'F';
pub const UPPER_CASE_G: CharacterToken = 'G';
pub const UPPER_CASE_H: CharacterToken = 'H';
pub const UPPER_CASE_I: CharacterToken = 'I';
pub const UPPER_CASE_J: CharacterToken = 'J';
pub const UPPER_CASE_K: CharacterToken = 'K';
pub const UPPER_CASE_L: CharacterToken = 'L';
pub const UPPER_CASE_M: CharacterToken = 'M';
pub const UPPER_CASE_N: CharacterToken = 'N';
pub const UPPER_CASE_O: CharacterToken = 'O';
pub const UPPER_CASE_P: CharacterToken = 'P';
pub const UPPER_CASE_Q: CharacterToken = 'Q';
pub const UPPER_CASE_R: CharacterToken = 'R';
pub const UPPER_CASE_S: CharacterToken = 'S';
pub const UPPER_CASE_T: CharacterToken = 'T';
pub const UPPER_CASE_U: CharacterToken = 'U';
pub const UPPER_CASE_V: CharacterToken = 'V';
pub const UPPER_CASE_W: CharacterToken = 'W';
pub const UPPER_CASE_X: CharacterToken = 'X';
pub const UPPER_CASE_Y: CharacterToken = 'Y';
pub const UPPER_CASE_Z: CharacterToken = 'Z';

// Character Token Vector
pub fn characters_vector() -> Vec<CharacterToken> {
    let characters: Vec<CharacterToken> = Vec::from([
        LOWER_CASE_A,
        LOWER_CASE_B,
        LOWER_CASE_C,
        LOWER_CASE_D,
        LOWER_CASE_E,
        LOWER_CASE_F,
        LOWER_CASE_G,
        LOWER_CASE_H,
        LOWER_CASE_I,
        LOWER_CASE_J,
        LOWER_CASE_K,
        LOWER_CASE_L,
        LOWER_CASE_M,
        LOWER_CASE_N,
        LOWER_CASE_O,
        LOWER_CASE_P,
        LOWER_CASE_Q,
        LOWER_CASE_R,
        LOWER_CASE_S,
        LOWER_CASE_T,
        LOWER_CASE_U,
        LOWER_CASE_V,
        LOWER_CASE_W,
        LOWER_CASE_X,
        LOWER_CASE_Y,
        LOWER_CASE_Z,
        UPPER_CASE_A,
        UPPER_CASE_B,
        UPPER_CASE_C,
        UPPER_CASE_D,
        UPPER_CASE_E,
        UPPER_CASE_F,
        UPPER_CASE_G,
        UPPER_CASE_H,
        UPPER_CASE_I,
        UPPER_CASE_J,
        UPPER_CASE_K,
        UPPER_CASE_L,
        UPPER_CASE_M,
        UPPER_CASE_N,
        UPPER_CASE_O,
        UPPER_CASE_P,
        UPPER_CASE_Q,
        UPPER_CASE_R,
        UPPER_CASE_S,
        UPPER_CASE_T,
        UPPER_CASE_U,
        UPPER_CASE_V,
        UPPER_CASE_W,
        UPPER_CASE_X,
        UPPER_CASE_Y,
        UPPER_CASE_Z,
    ]);

    return characters;
}
