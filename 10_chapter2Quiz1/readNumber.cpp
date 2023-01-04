#include "readNumber.h"
#include <iostream>

int readNumber()
{
    int input{};
    std::cout << "Please enter an integer: ";
    std::cin >> input;

    return input;
}
