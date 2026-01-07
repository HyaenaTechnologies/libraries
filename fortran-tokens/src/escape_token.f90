module escape_token
  implicit none
    
  !> Escape Tokens
  character(len=1), parameter :: APOSTROPHE = "\'"
  character(len=1), parameter :: BACKSLASH = '\\'
  character(len=1), parameter :: CARRIAGE_RETURN = '\r'
  character(len=1), parameter :: NEW_LINE = '\n'
  character(len=1), parameter :: NULL_CHARACTER = '\0'
  character(len=1), parameter :: QUOTATION_MARK = '\"'
  character(len=1), parameter :: TAB = '\t'

end module escape_token

