#include <iostream>

int main(){

    double weight, height;
    std::cout << "Weight (pounds): ";
    std::cin >> weight;

    std::cout << "Height (inches): ";
    std::cin >> height;

    double Bmi = weight * 703 / (height * height);

    if(Bmi > 25){
        std::cout << "\nOverweight";
    }else if(Bmi >= 18.5){
        std::cout << "\nOptimal.";
    }else {
        std::cout << "\nUnderweight.";
    }

    return 0;
}