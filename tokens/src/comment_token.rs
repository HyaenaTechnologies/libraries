use std::{primitive::str, vec::Vec};

// Comment Tokens
pub const BLOCK: &'static str = "/*";
pub const LINE: &'static str = "//";
pub const INNER_LINE: &'static str = "//!";
pub const INNER_BLOCK: &'static str = "/*!";
pub const OUTER_LINE: &'static str = "///";
pub const OUTER_BLOCK: &'static str = "/**";
pub const OCTOTHORPE_BLOCK: &'static str = "#*";
pub const OCTOTHORPE_LINE: &'static str = "##";
pub const OCTOTHROPE_INNER_LINE: &'static str = "#!";
pub const OCTOTHORPE_INNER_BLOCK: &'static str = "#*!";
pub const OCTOTHROPE_OUTER_LINE: &'static str = "###";
pub const OCTOTHORPE_OUTER_BLOCK: &'static str = "#**";

// Comment Token Vector
pub fn comments_vector() -> Vec<&'static str> {
    let comments: Vec<&'static str> = Vec::from([
        BLOCK,
        LINE,
        INNER_LINE,
        INNER_BLOCK,
        OUTER_LINE,
        OUTER_BLOCK,
        OCTOTHORPE_BLOCK,
        OCTOTHORPE_LINE,
        OCTOTHROPE_INNER_LINE,
        OCTOTHORPE_INNER_BLOCK,
        OCTOTHROPE_OUTER_LINE,
        OCTOTHORPE_OUTER_BLOCK,
    ]);

    return comments;
}
