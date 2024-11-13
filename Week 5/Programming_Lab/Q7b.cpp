#include <iostream>
#include <cmath>

/*
Alternate Version: Write a program that takes as the third value an upper limit for
the series. If the user enters 100 as the third value, the series stop as soon as it equals
or exceed 100.
*/

int main(){
    int first,second, num;
    std::cout << "Initial value for an arithmetic series: ";
    std::cin >> first;
    while(first < 0 ){
        std::cout << "Value should be positive.\n";
        std::cout << "Initial value for an arithmetic series: ";
        std::cin >> first;
    }
    std::cout << "Second value for the series: ";
    std::cin >> second;
    while(second < 0 ){
        std::cout << "Value should be positive.\n";
        std::cout << "Second value for the series: ";
        std::cin >> second;
    }
    std::cout << "Stops at: ";
    std::cin >> num;
    while(num < 0){
        std::cout << "Value should be positive.\n";
        std::cout << "Stops at: ";
        std::cin >> num;
    }

    int dif = second - first;

    int value = first;
    int i = 1;
    while(value < num){
        value = first + (i - 1) * dif;
        if(value > num){
            break;
        }
        ++i;
        std::cout << value << " ";
    }
    

    return 0;
}