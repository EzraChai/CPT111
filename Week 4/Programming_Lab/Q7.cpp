#include <iostream>
#include <stdlib.h>     
#include <iomanip>

int main(){

    srand (time(NULL));

    int userAns;
    int randomNum1 = rand() % 1000;
    int randomNum2 = rand() % 1000;

    int ans = randomNum1 + randomNum2;

    std::cout << " " << std::setw(4) << randomNum1 << "\n";
    std::cout << "+" << std::setw(4) << randomNum2 << "\n";
    std::cout << "-----" << "\n\n";
    std::cout << "What's the answer? ";
    std::cin >> userAns;

    if(userAns == ans){
        std::cout << "Congratulations! Your answer is correct.";
    }else {
        std::cout << "Sorry. Your answer is wrong. The correct answer is " << ans;
    }

    return 0;
}