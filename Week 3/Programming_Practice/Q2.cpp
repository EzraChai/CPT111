#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float value1 = 1000;
    float value2 = 3000;
    float value3 = 500;

    cout << "There are 30 days for first value, 31 days for 2nd value and 15 days for 3rd value.\n";
        //fill your program in the answer box

    cout << "Average of 1st value is: " << value1/30 << endl;
    cout << "Average of 2nd value is: " << value2/31 << endl;
    cout << "Average of 3rd value is: " << value3/15 << endl;
    cout << "Average of the 3 months is: " << (value1 + value2 + value3) / 3 << endl;

    return 0;
}