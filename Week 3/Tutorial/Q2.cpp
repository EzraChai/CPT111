#include <iostream>
#include <string>
#include <iomanip>

/**
    Write a program that calculates the average rainfall for three months. The program should
    ask the user to enter the name of each month such as June or July, and the amount of rain
    (in inches) that fell each month. The program should display a message similar to the
    following:
    The average rainfall for June, July and August is x.xx inches.
 */
int main(){

    double averageRainfall = 0.0;

    std::string month[3];
    double totalRainfall = 0.0;

    for (int i = 1; i <= 3; i++){
        double rainfall = 0.0;
        std::cout << "Please enter the name of the month: ";
        std::cin >> month[i-1];
        std::cout << "Please enter the amount of rain fell (in inches): ";
        std::cin >> rainfall;

        totalRainfall += rainfall;
        std::cout << "\n";
    }

    averageRainfall = totalRainfall / 3;

    std::cout << "The average rainfall for " << month[0] << ", " << month[1] << " and " << month[2] << " is " << std::fixed << std::setprecision(2) << averageRainfall << " inches.";

    return 0;
}