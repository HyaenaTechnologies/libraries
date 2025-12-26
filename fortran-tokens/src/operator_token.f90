module operator_token
  implicit none

  !> Operator Tokens
  character(len=1), parameter :: ADDITION  = "+"
  character(len=1), parameter :: ANNOTATION  = "@"
  character(len=1), parameter :: ASSIGNMENT  = "="
  character(len=1), parameter :: COLON  = ":"
  character(len=1), parameter :: COMMA  = ","
  character(len=1), parameter :: DIVISION  = "/"
  character(len=1), parameter :: DOLLAR_SIGN  = "$"
  character(len=1), parameter :: EXCLUSIVE_OR  = "^"
  character(len=1), parameter :: FIELD_ACCESS  = "."
  character(len=1), parameter :: GRAVE_ACCENT  = "`"
  character(len=1), parameter :: GREATER_THAN  = ">"
  character(len=1), parameter :: LESS_THAN  = "<"
  character(len=1), parameter :: LOGICAL_CONJUCTION  = "&"
  character(len=1), parameter :: LOGICAL_DISJUNCTION  = "|"
  character(len=1), parameter :: LOGICAL_NEGATION  = "!"
  character(len=1), parameter :: MODULUS  = "%"
  character(len=1), parameter :: MULTIPLICATION  = "*"
  character(len=1), parameter :: NULL_COALESCING  = "?"
  character(len=1), parameter :: OCTOTHORPE  = "#"
  character(len=1), parameter :: SEMI_COLON  = ":"
  character(len=1), parameter :: SUBTRACTION  = "-"
  character(len=1), parameter :: TILDE  = "~"
  character(len=1), parameter :: UNDERSCORE  = "_"

end module operator_token

