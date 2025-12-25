module comment_token
    implicit none

    !> Comment Tokens
    character(len = 2)::BLOCK = "/*"
    character(len = 2)::LINE = "//"
    character(len = 3)::INNER_LINE = "//!"
    character(len = 3)::INNER_BLOCK = "/*!"
    character(len = 3)::OUTER_LINE = "///"
    character(len = 3)::OUTER_BLOCK = "/**"
    character(len = 2)::OCTOTHORPE_BLOCK = "#*"
    character(len = 2)::OCTOTHORPE_LINE = "##"
    character(len = 2)::OCTOTHROPE_INNER_LINE = "#!"
    character(len = 3)::OCTOTHORPE_INNER_BLOCK = "#*!"
    character(len = 3)::OCTOTHROPE_OUTER_LINE = "###"
    character(len = 3)::OCTOTHORPE_OUTER_BLOCK = "#**"

end module comment_token

