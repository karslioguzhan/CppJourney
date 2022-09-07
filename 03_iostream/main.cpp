// this includes the input/output library
#include <iostream>
#include<limits>

int main()
{
    // cout
    {
        // Printing "Hello world!" to the console (character output)
        std::cout << "Character output (cout)!" << std::endl;

        // cout can print numbers
        std::cout << 4 << std::endl;

        // cout can print variables
        int testPrint{1};
        std::cout << testPrint << std::endl;

        // linking is possible with the insertion operator
        std::cout << "Here a Value: " << testPrint << std::endl;

        // Alternative to endl is \n (preferred)
        std::cout << "End line with \n";
    }

    // cin for character input
    {
        std::cout << "\n\nCharacter input\n";
        std::cout << "Input a number";
        int number{};
        // extraction operator (>>).
        std::cin >> number;
        std::cout << "You entered " << number << "\n";

        std::cout << "Input two numbers with a space between: ";
        int firstNumber{}, secondNumber{};
        std::cin >> firstNumber >> secondNumber;
        std::cout << "You entered " << firstNumber << " and " << secondNumber << "\n";

    }


    // Wait for double Enter to terminate
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
