#include <iostream>

int main(){

    int num, absNum;
    std::cout << "Please enter a number: ";
    std::cin >> num;

    num < 0? absNum = std::abs(num) : absNum = num;

    std::cout << "The absolute of the number " << num << " is " << absNum;

    return 0;
}