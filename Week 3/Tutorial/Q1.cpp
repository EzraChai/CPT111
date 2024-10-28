#include <iostream>

int main(){


    int cookiesAte = 0;
    std::cout << "How many cookies have you ate? ";
    std::cin >> cookiesAte;

    /**
     * 10 servings = 300 calories
     * 1 serving = 30 calories
     * 30 cookies = 10 servings
     * 3 cookies = 1 serving
     */
    int totalCalories = static_cast<double> (cookiesAte) / 3 * 30;

    std::cout << "You have gained " << totalCalories << " calories by eating " << cookiesAte << " cookies.\n";

    return 0;
}