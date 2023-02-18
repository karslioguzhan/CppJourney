#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // set to viewed
    myArticleFlags |= option_viewed;
    // check if article is deleted
    std::cout << "Article is" << ( (myArticleFlags & option_deleted) ? " deleted\n" : " not deleted\n");
    // unfavorite article
    (myArticleFlags & option_favorited) ? (myArticleFlags ^= option_favorited) : myArticleFlags;
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';


    return 0;
}
