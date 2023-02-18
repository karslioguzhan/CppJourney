#include <iostream>
#include<limits>


int main()
{
    int inputValue{0};
    std::cout << "Enter an interger: ";
    std::cin >> inputValue;
    if (inputValue % 2 == 0)
    {
     std::cout << inputValue << " is even";
     return 0;
    }
    std::cout << inputValue << " is odd";
    return 0;
}
