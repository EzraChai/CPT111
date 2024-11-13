#include <iostream>
#include <iomanip>

int main(){
    int speed = 0;
    int hours = 0;
    std::cout << "What is the speed of the vehicle in mph? ";
    std::cin >> speed;

    while(speed < 0){
        std::cout << "Speed must be postive.\n";
        std::cout << "What is the speed of the vehicle in mph? ";
        std::cin >> speed;
    }

    std::cout << "How many hours has it traveled? ";
    std::cin >> hours;
    
    while(hours <=1){
        std::cout << "Hours must be more than one.\n";
        std::cout << "How many hours has it traveled? ";
        std::cin >> hours;
    }

    std::cout << "Hour Distance Traveled\n--------------------------------\n";

    for( int i = 1; i <= hours; ++i){
        std::cout << std::setw(5) << i << std::setw(5) << i * speed << std::endl;

    }

    return 0;
}