#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    std::bitset<4> tempBits{0b0000};
    for (int numBit = 0; numBit < 4; ++numBit)
    {
        bool actualBit {bits.test(numBit)};
        if (numBit == 3)
        {
            if (actualBit)
            {
                tempBits.set(0);
            }
            return tempBits;
        }
        if (actualBit)
        {
            tempBits.set(numBit+1);
        }
    }
    return tempBits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}
