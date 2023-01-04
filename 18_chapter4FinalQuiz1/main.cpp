#include <iostream>
#include<limits>
using namespace std;
double getDoubleValue();
char getMathOperation();
bool doCalculation(double firstInput, double secondInput, char mathOperation);

int main()
{
    double firstInput{getDoubleValue()};
    double secondInput{getDoubleValue()};
    char mathOperation{getMathOperation()};
    doCalculation(firstInput, secondInput, mathOperation);
    return 0;
}

double getDoubleValue()
{
    double returnDoubleValue{0};
    std::cout << "Enter a double value: ";
    std::cin >> returnDoubleValue;
    return returnDoubleValue;
}

char getMathOperation()
{
    char returnMathOperation{' '};
    std::cout << "Enter one of the following: +, -, * or /: ";
    std::cin >> returnMathOperation;
    return returnMathOperation;
}

bool doCalculation(double firstInput, double secondInput, char mathOperation)
{
    double resultCalculation{0};
    bool printResult{false};
    switch (mathOperation)
    {
        case '+':
            resultCalculation = firstInput + secondInput;
            printResult = true;
            break;
        case '-':
            resultCalculation = firstInput - secondInput;
            printResult = true;
            break;
        case '*':
            resultCalculation = firstInput * secondInput;
            printResult = true;
            break;
        case '/':
            resultCalculation = firstInput  / secondInput;
            printResult = true;
            break;
    }
    if (printResult == true)
    {
        std::cout << firstInput << " " << mathOperation << " " << secondInput << " is " << resultCalculation << "\n";
    }

}
