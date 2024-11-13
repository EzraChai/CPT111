#include <iostream>
#include <iomanip>

int main(){

    std::cout << "+----------+----------+\n";
    for (int i = 0; i <= 90; i+= 10){
        std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << std::fixed << std::setprecision(5) << i /180.0 *  3.141593 << "|\n";
    }
    std::cout << "+----------+----------+\n";
    return 0;
}