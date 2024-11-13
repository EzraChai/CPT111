#include <iostream>
#include <iomanip>

int main(){

    const double CALORIES_BURN_PER_MINUTE = 3.6;
    for(int i = 5; i <= 30; i+= 5){
        std::cout << std::setw(2) <<i << " minutes: " << i * CALORIES_BURN_PER_MINUTE << " calories burned.\n";
    }

    return 0;
}