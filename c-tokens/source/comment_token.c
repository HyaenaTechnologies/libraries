#include "./comment_token.h"

// Comment Tokens
const CommentToken BLOCK[3] = "/*";
const CommentToken LINE[3] = "//";
const CommentToken INNER_LINE[4] = "//!";
const CommentToken INNER_BLOCK[4] = "/*!";
const CommentToken OUTER_LINE[4] = "///";
const CommentToken OUTER_BLOCK[4] = "/**";
const CommentToken OCTOTHORPE_BLOCK[3] = "#*";
const CommentToken OCTOTHORPE_LINE[3] = "##";
const CommentToken OCTOTHROPE_INNER_LINE[3] = "#!";
const CommentToken OCTOTHORPE_INNER_BLOCK[4] = "#*!";
const CommentToken OCTOTHROPE_OUTER_LINE[4] = "###";
const CommentToken OCTOTHORPE_OUTER_BLOCK[4] = "#**";

// Comment Token Vector
const CommentToken comments_vector() {
    const CommentToken comments[12] = {
        BLOCK[3],
        LINE[3],
        INNER_LINE[4],
        INNER_BLOCK[4],
        OUTER_LINE[4],
        OUTER_BLOCK[4],
        OCTOTHORPE_BLOCK[3],
        OCTOTHORPE_LINE[3],
        OCTOTHROPE_INNER_LINE[3],
        OCTOTHORPE_INNER_BLOCK[4],
        OCTOTHROPE_OUTER_LINE[4],
        OCTOTHORPE_OUTER_BLOCK[4],
    };

    return *comments;
}
