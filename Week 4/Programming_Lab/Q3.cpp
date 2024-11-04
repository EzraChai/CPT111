#include <iostream>

int main(){

    unsigned int currentYear, bornYear;
    std::cout << "What's the current year? ";
    std::cin >> currentYear;

    std::cout << "What year did you born? ";
    std::cin >> bornYear;

    int age = currentYear - bornYear;

    if (age > 18 && age < 28 ){
        std::cout << "You are eligible to join our company.";
    }else {
        std::cout << "Sorry, you are not eligible to join our company.";
    }

    return 0;
}