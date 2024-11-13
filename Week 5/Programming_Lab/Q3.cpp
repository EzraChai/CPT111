#include <iostream>

/*
Write a program that let’s the user enter a number and then displays the
multiplication table till 10 for that number
*/

int main(){

    int num = 0;
    std::cout << "Please enter a number: ";
    std::cin >> num;

    std::cout << "\n";
    for(int i = 1; i <= 10; i++){
        std::cout << num << " x " << i << " = " << num*i << "\n";
    }

    return 0;
}