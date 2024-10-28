#include <iostream>

/*
    As one goes higher up the mountains, the temperature decreases. The rate at which this
    occurs is called the lapse rate. The actual value depends on the humidity of the air. We can
    easily use the typical value of around 5°C/km or 2.7°F/1000ft.
    Write a program that asks the user for the temperature at sea level in degrees Celcius and
    displays the following :

    The temperature at sea level (for reference) in Fahrenheit.
    The temperature at 1000, 2000 and 3000m
    The temperature at the top of Mount Everest (8.848 km)
    The height at which the temperature is 0°C.

    As an additional exercise, show also the temperatures in degrees Fahrenheit and the height
    in feet. To convert temperatures in degrees Celcius to degrees Fahrenheit, multiply by 1.8
    (or 9/5) and add 32; to convert meters to feet, multiply by 3.28.
*/

int main(){

    double tempSeaLevel, temp1000m, temp2000m, temp3000m, tempInFahrenheit, tempMountEverest, heightWhenTempIsEqual0; 
    std::cout << "Please enter the temperature at sea level in degrees Celcius: ";
    std::cin >> tempSeaLevel;

    tempInFahrenheit = tempSeaLevel * 1.8;
    temp1000m = tempSeaLevel - 1 * 5;
    temp2000m = tempSeaLevel - 2 * 5;
    temp3000m = tempSeaLevel - 3 * 5;
    tempMountEverest = tempSeaLevel - 8.848 * 5;
    heightWhenTempIsEqual0 = (tempSeaLevel / 5 ) * 1000;

    std::cout << "\n---------------------------------------------------------------\n";
    
    std::cout << "The temperature at sea level (for reference) in Fahrenheit. \n";
    std::cout << tempInFahrenheit <<"°F\n\n";

    std::cout << "The temperature at 1000, 2000 and 3000m. \n";
    std::cout << temp1000m << "°C(" << temp1000m * 1.8 << "°F), " << temp2000m << "°C(" << temp2000m * 1.8 << "°F) and " << temp3000m << "°C(" << temp3000m * 1.8 << "°F)\n\n";

    std::cout << "The temperature at the top of Mount Everest (8.848 km). \n";
    std::cout << tempMountEverest <<"°C("<< tempMountEverest * 1.8 <<"°F)\n\n";

    std::cout << "The height at which the temperature is 0°C. \n";
    std::cout << heightWhenTempIsEqual0 <<"m(" << heightWhenTempIsEqual0 * 3.28 << "ft)\n\n";

    return 0;
}