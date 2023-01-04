#include <iostream>
#include<limits>


int main()
{
    std::string userName{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, userName);
    std::cout << "Enter your Age: ";
    int userAge{0};
    std::cin >> userAge;

    std::cout << "Your age + length of name is: " << (userAge + userName.length()-1);


    // Wait for double Enter to terminate
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
