module escape_token
  implicit none
    
  !> Escape Tokens
  character(len=1) :: APOSTROPHE = "\'"
  character(len=1) :: BACKSLASH = "\\"
  character(len=1) :: CARRIAGE_RETURN = "\r"
  character(len=1) :: NEW_LINE = "\n"
  character(len=1) :: NULL_CHARACTER = "\0"
  character(len=1) :: QUOTATION_MARK = '\"'
  character(len=1) :: TAB = "\t"

end module escape_token

