#include <iostream>

int main(){

    int sum = 0;
    int num;
    std::cout << "Please enter a number: ";
    std::cin >> num;

    while(num <= 0){
        std::cout << "Please enter only positive number.\n";
        std::cout << "Please enter a number: ";
        std::cin >> num;
    }

    for(int i = num; i > 0; --i){
        sum+= i;
    }

    std::cout << "Sum of the integers is " << sum;

    return 0;
}