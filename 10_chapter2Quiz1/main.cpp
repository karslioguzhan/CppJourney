#include <iostream>
#include <limits>
#include "readNumber.h"
#include "writeAnswer.h"

int main()
{
    int x{readNumber()};
    int y{readNumber()};
    writeAnswer(x+y);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
