#include <iostream>
#include <vector>

std::vector<int> sortValues(int firstInput, int secondInput);

int main()
{
    std::cout << "Enter an integer: ";
    int firstInput{0};
    std::cin >> firstInput;
    std::cout << "Enter a larger integer: ";
    int secondInput{0};
    std::cin >> secondInput;
    std::vector<int> sortedVector{ sortValues(firstInput, secondInput)};

    std::cout << "The smaller value is " << sortedVector.at(0) << std::endl;
    std::cout << "The larger value is " << sortedVector.at(1) << std::endl;
    return 0;
}

std::vector<int> sortValues(int firstInput, int secondInput)
{
    std::vector<int> temp; //temp is created
    if (firstInput < secondInput)
    {
        temp.push_back(firstInput);
        temp.push_back(secondInput);
    }
    else
    {
        std::cout << "Swapping the values\n";
        temp.push_back(secondInput);
        temp.push_back(firstInput);
    }
    return temp;
} // temp, firstInput and secondInput will be destroyed
