#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double quotient, number1 = 788.98, number2 = 3;
    quotient = number1 / number2;

    cout <<  setprecision(6) << quotient << endl;
    cout << setprecision(5) << quotient << endl;
    cout << setprecision(4) << quotient << endl;
    cout << setprecision(3) << quotient << endl;
    cout << setprecision(2) << quotient << endl;
    cout << setprecision(1) << quotient << endl;

    return 0;        
}