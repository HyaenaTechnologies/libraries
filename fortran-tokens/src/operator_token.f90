module operator_token
    implicit none

    !> Operator Tokens
    character(len = 1)::ADDITION  = "+"
    character(len = 1)::ANNOTATION  = "@"
    character(len = 1)::ASSIGNMENT  = "="
    character(len = 1)::COLON  = ":"
    character(len = 1)::COMMA  = ","
    character(len = 1)::DIVISION  = "/"
    character(len = 1)::DOLLAR_SIGN  = "$"
    character(len = 1)::EXCLUSIVE_OR  = "^"
    character(len = 1)::FIELD_ACCESS  = "."
    character(len = 1)::GRAVE_ACCENT  = "`"
    character(len = 1)::GREATER_THAN  = ">"
    character(len = 1)::LESS_THAN  = "<"
    character(len = 1)::LOGICAL_CONJUCTION  = "&"
    character(len = 1)::LOGICAL_DISJUNCTION  = "|"
    character(len = 1)::LOGICAL_NEGATION  = "!"
    character(len = 1)::MODULUS  = "%"
    character(len = 1)::MULTIPLICATION  = "*"
    character(len = 1)::NULL_COALESCING  = "?"
    character(len = 1)::OCTOTHORPE  = "#"
    character(len = 1)::SEMI_COLON  = ":"
    character(len = 1)::SUBTRACTION  = "-"
    character(len = 1)::TILDE  = "~"
    character(len = 1)::UNDERSCORE  = "_"

end module operator_token

