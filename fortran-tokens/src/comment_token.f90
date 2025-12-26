module comment_token
  implicit none

  !> Comment Tokens
  character(len=2), parameter :: BLOCK = "/*"
  character(len=2), parameter :: LINE = "//"
  character(len=3), parameter :: INNER_LINE = "//!"
  character(len=3), parameter :: INNER_BLOCK = "/*!"
  character(len=3), parameter :: OUTER_LINE = "///"
  character(len=3), parameter :: OUTER_BLOCK = "/**"
  character(len=2), parameter :: OCTOTHORPE_BLOCK = "#*"
  character(len=2), parameter :: OCTOTHORPE_LINE = "##"
  character(len=2), parameter :: OCTOTHROPE_INNER_LINE = "#!"
  character(len=3), parameter :: OCTOTHORPE_INNER_BLOCK = "#*!"
  character(len=3), parameter :: OCTOTHROPE_OUTER_LINE = "###"
  character(len=3), parameter :: OCTOTHORPE_OUTER_BLOCK = "#**"

end module comment_token

