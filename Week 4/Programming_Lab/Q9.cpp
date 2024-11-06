#include <iostream>

int main(){

    double firstHalf, totalTime;

    std::cout << "First half (s): ";
    std::cin >> firstHalf;

    while(firstHalf <= 0){
        std::cout << "Please insert a valid first half time.\n";
        std::cout << "First half (s): ";
        std::cin >> firstHalf;
    }

    std::cout << "Total time (s): ";
    std::cin >> totalTime;

    while(totalTime <= 0 || firstHalf > totalTime){
        std::cout << "Please insert a valid total time.\n";
        std::cout << "Total time (s): ";
        std::cin >> totalTime;
    }

    if(totalTime < 2 * firstHalf){
        std::cout << "Congratulations! Negative split.";
    }

    return 0;
}