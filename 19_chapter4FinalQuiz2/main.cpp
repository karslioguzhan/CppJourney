#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

void aboveGround(double height);

// gravitational acceleration in m/s^2
const double gravity{9.81};

int main()
{

    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;
    aboveGround(height);
    // Wait for double Enter to terminate

    return 0;
}

void aboveGround(double height)
{
    for (int numSec=0; numSec<=5;  numSec++)
    {
        double distanceFallen = gravity * pow(numSec, 2) / 2;
        if (distanceFallen >= height)
        {
            std::cout << "At " << numSec << " seconds, the ball is on the ground.\n";
            break;
        }
        else
        {
            std::cout << std::fixed;
            std::cout << std::setprecision(1);
            std::cout << "At " << numSec << " seconds, the ball is at height: " << height - distanceFallen << " meters\n";
        }
    }
}





