module token_type
  implicit none

  !> Token Types
  character(len=10), parameter :: ALPHABETIC = "ALPHABETIC"
  character(len=7), parameter :: COMMENT = "COMMENT"
  character(len=9), parameter :: DELIMITER = "DELIMITER"
  character(len=3), parameter :: END_OF_FILE = "EOF"
  character(len=6), parameter :: ESCAPE = "ESCAPE"
  character(len=7), parameter :: KEYWORD = "KEYWORD"
  character(len=6), parameter :: NUMBER = "NUMBER"
  character(len=8), parameter :: OPERATOR = "OPERATOR"

end module token_type

