#include <iostream>

int main(){

    int rows;
    std::cout << "Please enter the number of rows: ";
    std::cin >> rows;

    for(int i = 1; i <= rows; i++){
        for(int j = i; j > 0; j--){
            std::cout << "+";
        }
        std::cout << "\n";
    }
    for(int i = rows; i > 0; i--){
        for(int j = i; j > 0; j--){
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}