#include "escape_token.h"

// Escape Tokens
const EscapeToken APOSTROPHE = '\'';
const EscapeToken BACKSLASH = '\\';
const EscapeToken CARRIAGE_RETURN = '\r';
const EscapeToken NEW_LINE = '\n';
const EscapeToken NULL_CHARACTER = '\0';
const EscapeToken QUOTATION_MARK = '\"';
const EscapeToken TAB = '\t';

// Escape Token Vector
const EscapeToken escapes_vector() {
    const EscapeToken strings[7] = {
        APOSTROPHE,
        BACKSLASH,
        CARRIAGE_RETURN,
        NEW_LINE,
        NULL_CHARACTER,
        QUOTATION_MARK,
        TAB,
    };

    return *strings;
}
