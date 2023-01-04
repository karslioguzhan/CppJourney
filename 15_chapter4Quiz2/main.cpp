#include <iostream>
#include<limits>

int main()
{
    std::cout << "Enter a single character: ";
    char inputChar{0};
    std::cin >> inputChar;
    std::cout << "You entered '" << inputChar << "' which has ASCII code " << static_cast<int>(inputChar) << ".\n";
    // Wait for double Enter to terminate


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
