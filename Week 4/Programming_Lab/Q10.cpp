#include <iostream>

int main(){
    int gasSelection;
    double travelSeconds;
    double travelMeters;
    std::cout << "------------------------\nMedium\n------------------------\n";
    std::cout << "1. Carbon Dioxide\n2. Air\n3. Helium\n4. Hydrogen\n------------------------\n";
    std::cout << "Please choose a gas (1-4): ";
    std::cin >> gasSelection;

    while(gasSelection <= 0 || gasSelection > 4){
        std::cout << "Please choose only 1 - 4\n";
        std::cout << "Please choose a gas (1-4): ";
        std::cin >> gasSelection;
    }

    std::cout << "Number of seconds it took for the sound to travel in this medium (s): ";
    std::cin >> travelSeconds;
    while(travelSeconds <= 0 || travelSeconds > 30){
        std::cout << "Only 0s - 30s is allow.";
        std::cout << "Number of seconds it took for the sound to travel in this medium (s): ";
        std::cin >> travelSeconds;
    }

    // if(gasSelection == 1){
    //     travelMeters = travelSeconds * 258.0;
    // }else if(gasSelection == 2){
    //     travelMeters = travelSeconds * 331.5;
    // }else if(gasSelection == 3){
    //     travelMeters = travelSeconds * 972.0;
    // }else if(gasSelection == 4){
    //     travelMeters = travelSeconds * 1270.0;
    // }

    switch(gasSelection){
        case 1:
            travelMeters = travelSeconds * 258.0;
            break;
        case 2:
            travelMeters = travelSeconds * 331.5;
            break;
        case 3:
            travelMeters = travelSeconds * 972.0;
            break;
        case 4:
            travelMeters = travelSeconds * 1270.0;   
            break;
    }

    std::cout << "Distance(meters) : " << travelMeters << " meters";

    return 0;
}