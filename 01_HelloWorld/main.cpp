#include <iostream>
#include<limits>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    // Wait for double Enter to terminate
    string test = "test";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
