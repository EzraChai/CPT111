#include <iostream>

 /**
    A bag of cookies holds 30 cookies. The calorie information on the bag claims there are 10
    "servings" in the bag and that a serving equals 300 calories. Write a program that asks the
    user to input how cookies as the input of the cookies he or she actually ate, then report how
    many total calories were consumed.

     * 10 servings = 300 calories
     * 1 serving = 30 calories
     * 30 cookies = 10 servings
     * 3 cookies = 1 serving
     
     */
int main(){

    int cookiesAte = 0;
    std::cout << "How many cookies have you ate? ";
    std::cin >> cookiesAte;

    int totalCalories = static_cast<double> (cookiesAte) / 3 * 30;

    std::cout << "You have gained " << totalCalories << " calories by eating " << cookiesAte << " cookies.\n";

    return 0;
}