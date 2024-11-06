#include <iostream>

int main(){

    int num1, num2;
    std::cout << "Please enter two numbers: ";
    std::cin >> num1 >> num2;

    num1 > num2 ? std::cout << num1 << " is smaller than " << num2: 

    num1 < num2 ? std::cout << num1 << " is smaller than " << num2 :std::cout << num1 << " is larger than " << num2 ;
    
    return 0;
}