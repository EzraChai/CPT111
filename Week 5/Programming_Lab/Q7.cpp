#include <iostream>
#include <cmath>

/*
Write a program that asks the user for three values: an initial value for an arithmetic
series, a second value for the series, and the number of values that should be
calculated and displayed. The difference between the second and the first value
determines the increment for the series.
Input Validation: The number of values has to be greater than 0.
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
    while(second < 0){
        std::cout << "Value should be positive.\n";
        std::cout << "Second value for the series: ";
        std::cin >> second;
    }
    std::cout << "Number of values that should be calculated and displayed: ";
    std::cin >> num;
    while(num < 0){
        std::cout << "Value should be positive.\n";
        std::cout << "Number of values that should be calculated and displayed: ";
        std::cin >> num;
    }

    int dif = second - first;

    for(int i = 1; i <= num; i++){
        std::cout << first + (i - 1) * dif << " ";
    }

    return 0;
}