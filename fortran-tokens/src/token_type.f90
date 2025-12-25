module token_type
  implicit none

  !> Token Types
  character(len=10) :: ALPHABETIC = "ALPHABETIC"
  character(len=7) :: COMMENT = "COMMENT"
  character(len=9) :: DELIMITER = "DELIMITER"
  character(len=3) :: END_OF_FILE = "EOF"
  character(len=6) :: ESCAPE = "ESCAPE"
  character(len=7) :: KEYWORD = "KEYWORD"
  character(len=6) :: NUMBER = "NUMBER"
  character(len=8) :: OPERATOR = "OPERATOR"

end module token_type

