#include <iostream>

int main(){

    double budget, total;

    std::cout << "Please enter your budget for a month: RM";
    std::cin >> budget;

    bool isStop = false;

    
    double expenses;
    while (expenses != 0){
        std::cout << "Please enter your expenses [0 to stop]: RM";
        std::cin >> expenses;
        total += expenses;
    }

    std::cout << "\n\nYour budget is RM" << budget << "\n";
    std::cout << "Your expenses is RM" << total << "\n";
    if(total > budget){
        std::cout << "Your expenses is over the budget.";
    }else {
        std::cout << "Your expenses is under the budget.";
    }
    
}