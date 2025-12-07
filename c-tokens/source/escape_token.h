#ifndef ESCAPE_TOKEN_H
#define ESCAPE_TOKEN_H

// Escape Token Defintion
typedef char EscapeToken;

// Escape Tokens
extern const EscapeToken APOSTROPHE;
extern const EscapeToken BACKSLASH;
extern const EscapeToken CARRIAGE_RETURN;
extern const EscapeToken NEW_LINE;
extern const EscapeToken NULL_CHARACTER;
extern const EscapeToken QUOTATION_MARK;
extern const EscapeToken TAB;

// Escape Token Vector
const EscapeToken escapes_vector();

#endif