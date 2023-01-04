#include <iostream>
#include<limits>


int main()
{
    std::cout << "Enter an number between 0 and 9: ";
    int enteredNumber{0};
    std::cin >> enteredNumber;

    // Check if input is a prime number
    if ((enteredNumber == 2) || (enteredNumber == 3) ||(enteredNumber == 5) || (enteredNumber == 7))
    {
        std::cout << "The digit is prime\n";
    }
    else
    {
        std::cout << "The digit is not prime\n";
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
