#include "./comment_token.h"

// Comment Tokens
const char BLOCK[3] = "/*";
const char LINE[3] = "//";
const char INNER_LINE[4] = "//!";
const char INNER_BLOCK[4] = "/*!";
const char OUTER_LINE[4] = "///";
const char OUTER_BLOCK[4] = "/**";
const char OCTOTHORPE_BLOCK[3] = "#*";
const char OCTOTHORPE_LINE[3] = "##";
const char OCTOTHROPE_INNER_LINE[3] = "#!";
const char OCTOTHORPE_INNER_BLOCK[4] = "#*!";
const char OCTOTHROPE_OUTER_LINE[4] = "###";
const char OCTOTHORPE_OUTER_BLOCK[4] = "#**";

// Comment Token Array
const char comments_array() {
    const char comments[12] = {
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
