use std::{primitive::str, vec::Vec};

// Character Token Defintion
pub type CharacterToken = &'static str;

// Character Tokens
pub const A: CharacterToken = "a";
pub const B: CharacterToken = "b";
pub const C: CharacterToken = "c";
pub const D: CharacterToken = "d";
pub const E: CharacterToken = "e";
pub const F: CharacterToken = "f";
pub const G: CharacterToken = "g";
pub const H: CharacterToken = "h";
pub const I: CharacterToken = "i";
pub const J: CharacterToken = "j";
pub const K: CharacterToken = "k";
pub const L: CharacterToken = "l";
pub const M: CharacterToken = "m";
pub const N: CharacterToken = "n";
pub const O: CharacterToken = "o";
pub const P: CharacterToken = "p";
pub const Q: CharacterToken = "q";
pub const R: CharacterToken = "r";
pub const S: CharacterToken = "s";
pub const T: CharacterToken = "t";
pub const U: CharacterToken = "u";
pub const V: CharacterToken = "v";
pub const W: CharacterToken = "w";
pub const X: CharacterToken = "x";
pub const Y: CharacterToken = "y";
pub const Z: CharacterToken = "z";
pub const CAPITAL_A: CharacterToken = "A";
pub const CAPITAL_B: CharacterToken = "B";
pub const CAPITAL_C: CharacterToken = "C";
pub const CAPITAL_D: CharacterToken = "D";
pub const CAPITAL_E: CharacterToken = "E";
pub const CAPITAL_F: CharacterToken = "F";
pub const CAPITAL_G: CharacterToken = "G";
pub const CAPITAL_H: CharacterToken = "H";
pub const CAPITAL_I: CharacterToken = "I";
pub const CAPITAL_J: CharacterToken = "J";
pub const CAPITAL_K: CharacterToken = "K";
pub const CAPITAL_L: CharacterToken = "L";
pub const CAPITAL_M: CharacterToken = "M";
pub const CAPITAL_N: CharacterToken = "N";
pub const CAPITAL_O: CharacterToken = "O";
pub const CAPITAL_P: CharacterToken = "P";
pub const CAPITAL_Q: CharacterToken = "Q";
pub const CAPITAL_R: CharacterToken = "R";
pub const CAPITAL_S: CharacterToken = "S";
pub const CAPITAL_T: CharacterToken = "T";
pub const CAPITAL_U: CharacterToken = "U";
pub const CAPITAL_V: CharacterToken = "V";
pub const CAPITAL_W: CharacterToken = "W";
pub const CAPITAL_X: CharacterToken = "X";
pub const CAPITAL_Y: CharacterToken = "Y";
pub const CAPITAL_Z: CharacterToken = "Z";

// Character Token Vector
pub fn characters_vector() -> Vec<CharacterToken> {
    let characters: Vec<CharacterToken> = Vec::from([
        A,
        B,
        C,
        D,
        E,
        F,
        G,
        H,
        I,
        J,
        K,
        L,
        M,
        N,
        O,
        P,
        Q,
        R,
        S,
        T,
        U,
        V,
        W,
        X,
        Y,
        Z,
        CAPITAL_A,
        CAPITAL_B,
        CAPITAL_C,
        CAPITAL_D,
        CAPITAL_E,
        CAPITAL_F,
        CAPITAL_G,
        CAPITAL_H,
        CAPITAL_I,
        CAPITAL_J,
        CAPITAL_K,
        CAPITAL_L,
        CAPITAL_M,
        CAPITAL_N,
        CAPITAL_O,
        CAPITAL_P,
        CAPITAL_Q,
        CAPITAL_R,
        CAPITAL_S,
        CAPITAL_T,
        CAPITAL_U,
        CAPITAL_V,
        CAPITAL_W,
        CAPITAL_X,
        CAPITAL_Y,
        CAPITAL_Z,
    ]);

    return characters;
}
