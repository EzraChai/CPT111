#include <iostream>
using namespace std;

double celcius(double);

int main(){

    int temperature_in_celcius = celcius(100);
    cout << temperature_in_celcius;
    return 0;
}

double celcius(double temperature_in_fahrenheit){
    return 5 / 9.0 * (temperature_in_fahrenheit - 32);
}