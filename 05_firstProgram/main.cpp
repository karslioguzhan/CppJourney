#include <iostream>
#include<limits>
using namespace std;

// 1.11 - Developing your first program
int main()
{
    // declare necessary variables
    int userInput{};

    // Ask user for input
    std::cout << "Enter an integer: ";
    std::cin >> userInput;

    // calculate the double and output
    std::cout << "Double that number is: " << userInput*2 << "\n";

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
