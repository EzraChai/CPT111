#include <iostream>
#include <iomanip>

int main(){

    double weight, distance, charges;

    std::cout << "Weight (kg): ";
    std::cin >> weight;

    while(weight <=0 || weight >20 ){
        std::cout << "Sorry. The weight of the parcel must be between 0kg to 20kg.\n";

        std::cout << "Weight (kg): ";
        std::cin >> weight;
    }

    std::cout << "Distance (miles): ";
    std::cin >> distance;

    while(distance <= 0 || distance > 3000 ){
        std::cout << "Sorry. The shipping distance must be between 10 miles to 3000 miles.\n";

        std::cout << "Distance (miles): ";
        std::cin >> distance;
    }

    if(weight > 10){
        charges = 4.8 * distance / 500;
    }else if(weight > 6){
        charges = 3.7 * distance / 500;
    }else if(weight > 2){
        charges = 2.2 * distance / 500;
    }else {
        charges = 1.1 * distance / 500;
    }

    std::cout << "---------------------\n";
    std::cout << "Charges: $" << std::fixed << std::setprecision(2) << charges << "\n";
    
    return 0;
}