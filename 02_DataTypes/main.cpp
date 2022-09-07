#include <iostream>
#include<limits>
using namespace std;

int main()
{
    // Storing integers values from -2147483648 to 2147483647
    int testInt = 3;
    // Storing floating point double values from 1.7E - 308 to 1.7E + 308
    double testDouble = 1.5;
    // Declaring multiple variable at once
    int testInt2, testInt3;
    // Copy initialization (mostly not recommended for C++)
    int copyWidth = 5;
    // Direct initialization (mostly not recommended for C++)
    int directWidth(5);
    // Brace initialization (modern way to initialize)
    int braceWidth { 5 }; // direct brace initialization of value 5 into variable braceWidth (preferred)
    int braceHeight = { 6 }; // copy brace initialization of value 6 into variable braceHeight
    int braceDepth {}; // value initialization (see next section (1.5))

    // Zero initialization
    int zeroWidth {}; // zero initialization to value 0 (only when planning to replace the value)

    // Multiple initialization
    int a = 5, b = 6; // copy initialization
    int c( 7 ), d( 8 ); // direct initialization
    int e { 9 }, f { 10 }; // brace initialization (preferred)


    // Wait for double Enter to terminate
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
