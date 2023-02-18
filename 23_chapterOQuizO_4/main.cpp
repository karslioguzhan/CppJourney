#include <iostream>
#include<limits>
#include<cmath>

int correctValue();
void print8Bit(int inputValue);

int main()
{

    int inputValue {correctValue()};
    print8Bit(inputValue);

    std::cin.get();
    return 0;
}

int correctValue()
{
    int inputValue {};
    bool legitInput {false};
    do
    {
        std::cout << "Please enter an value between 0 and 255: ";
        std::cin >> inputValue;
        legitInput = (inputValue >= 0 && inputValue <=255);
        if (!legitInput)
        {
            std::cout << "Wrong input please Try again\n";
        }

    }while(!legitInput);
    return inputValue;
}

void print8Bit(int inputValue)
{
   for(int numBit = 7; numBit >= 0; --numBit)
   {
       if (numBit == 3)
       {
           std::cout << " ";
       }
        if (inputValue >= std::pow(2, numBit))
        {
            std::cout << "1";
            inputValue -= std::pow(2, numBit);
        }
        else
        {
            std::cout << "0";
        }
   }
}
