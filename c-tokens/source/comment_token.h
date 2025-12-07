#ifndef COMMENT_TOKEN_H
#define COMMENT_TOKEN_H

// Comment Token Defintion
typedef char CommentToken;

// Comment Tokens
extern const CommentToken BLOCK[3];
extern const CommentToken LINE[3];
extern const CommentToken INNER_LINE[4];
extern const CommentToken INNER_BLOCK[4];
extern const CommentToken OUTER_LINE[4];
extern const CommentToken OUTER_BLOCK[4];
extern const CommentToken OCTOTHORPE_BLOCK[3];
extern const CommentToken OCTOTHORPE_LINE[3];
extern const CommentToken OCTOTHROPE_INNER_LINE[3];
extern const CommentToken OCTOTHORPE_INNER_BLOCK[4];
extern const CommentToken OCTOTHROPE_OUTER_LINE[4];
extern const CommentToken OCTOTHORPE_OUTER_BLOCK[4];

// Comment Token Vector
const CommentToken comments_vector();

#endif