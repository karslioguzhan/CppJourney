#include <iostream>
#include<limits>

void calculateAndPrint(double firstInput, double secondInput, char operatorInput);

int main()
{
    std::cout << "Enter a double value: ";
    double firstInput{};
    std::cin >> firstInput;
    std::cout << "Enter a double value: ";
    double secondInput{};
    std::cin >> secondInput;
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char operatorInput;
    std::cin >> operatorInput;
    calculateAndPrint(firstInput, secondInput, operatorInput);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}

void calculateAndPrint(double firstInput, double secondInput, char operatorInput)
{
    double result{0};
    bool printResult {false};
    switch (operatorInput)
    {
        case '+':
            result = firstInput + secondInput;
            printResult = true;
            break;
        case '-':
            result  = firstInput - secondInput;
            printResult = true;
            break;
        case '*':
            result = firstInput * secondInput;
            printResult = true;
            break;
        case '/':
            result = firstInput / secondInput;
            printResult = true;
            break;
    }
    if (printResult == true)
        {
            std::cout << firstInput << " " << operatorInput << " " << secondInput << " is " << result << "\n";
        }
}

