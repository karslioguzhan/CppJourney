#include <iostream>
#include<limits>
using namespace std;

int main()
{
    /*
    Initialization  = The object is given a known value at the point of definition.
    Assignment      = The object is given a known value beyond the point of definition.
    Uninitialized   = The object has not been given a known value yet.
    */

    // define an integer variable named x
    int unInit; // this variable is uninitialized because we haven't given it a value
    std::cout << unInit << "\n"; // who knows what we'll get, because x is uninitialized


    // Wait for double Enter to terminate
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
