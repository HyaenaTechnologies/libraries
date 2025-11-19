use std::{primitive::str, vec::Vec};

// Comment Token Defintion
pub type CommentToken = &'static str;

// Comment Tokens
pub const BLOCK: CommentToken = "/*";
pub const LINE: CommentToken = "//";
pub const INNER_LINE: CommentToken = "//!";
pub const INNER_BLOCK: CommentToken = "/*!";
pub const OUTER_LINE: CommentToken = "///";
pub const OUTER_BLOCK: CommentToken = "/**";
pub const OCTOTHORPE_BLOCK: CommentToken = "#*";
pub const OCTOTHORPE_LINE: CommentToken = "#";
pub const OCTOTHROPE_INNER_LINE: CommentToken = "#!";
pub const OCTOTHORPE_INNER_BLOCK: CommentToken = "#*!";
pub const OCTOTHROPE_OUTER_LINE: CommentToken = "###";
pub const OCTOTHORPE_OUTER_BLOCK: CommentToken = "#**";

// Comment Token Vector
pub fn comments_vector() -> Vec<CommentToken> {
    let comments: Vec<CommentToken> = Vec::from([
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
