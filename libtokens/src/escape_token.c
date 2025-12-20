#include "escape_token.h"

// Escape Tokens
const char APOSTROPHE = '\'';
const char BACKSLASH = '\\';
const char CARRIAGE_RETURN = '\r';
const char NEW_LINE = '\n';
const char NULL_CHARACTER = '\0';
const char QUOTATION_MARK = '\"';
const char TAB = '\t';

// Escape Token Array
const char escapes_array() {
  const char strings[7] = {
      APOSTROPHE,     BACKSLASH, CARRIAGE_RETURN, NEW_LINE, NULL_CHARACTER,
      QUOTATION_MARK, TAB,
  };

  return *strings;
}
