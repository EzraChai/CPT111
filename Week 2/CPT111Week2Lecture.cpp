#include <iostream>
#include <string>
#include <iomanip>      

int main(){
     int x = 0;
     int *ptr = &x;

     int num1=  075;    // octadecimal

     int num2 = 0x75A;  // hexadecimal

    std::cout << ptr;

    std::cout << "\n" << num1 << " " << num2;

    std::cout << "\n";

    char char1 = 65;    // ASCII
    char char2 = 'B';

    char1 += 4;

    std::string addr = "sdsd dsds";

    std::cout << char1 << " " << char2 << "\n";

    std::cout << addr;

    int num = 12;
    //  sizeof()
    std::cout << "\nSize of variable num is "<< sizeof(num) << " bytes\n";

    std::cout << 4.343E2 << "\n\n";

    const double PI = 3.1415926; 
    std::cout  << std::setprecision(2) << PI << "\n";

    auto name = "sdsd";
    //  Use of auto
    std::cout << sizeof(name) << " " << name << "\n";

    //Unary
    int num3 = 4;

    //Binary 
    int num4 = 13 - 7;

    // Ternary
    num > 21 ? std::cout << "Num > 21\n" : std::cout << "Num < 21\n";

/*
    Comments
*/

//  Comments

    return 0;
}