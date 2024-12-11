#include <iostream>
#include <cmath>

/*
Sum of Numbers
Write a program that reads a set of integers and then finds and prints the sum of the
even numbers amongst them and odd integers amongst them only.
*/

int main(){
    int num;
    int evenSum = 0;
    std::cout << std::sqrt(7);
    int oddSum = 0;
    for(int i = 0; i < 10; i++){
        std::cout << "Please enter a number: ";
        std::cin >> num;
        if(num % 2 == 0){
            evenSum += num; 
        }else{
            oddSum += num;
        }
    }
    std::cout << "Even sum: " << evenSum << std::endl;
    std::cout << "Odd sum: " << oddSum << std::endl;

    return 0;
}