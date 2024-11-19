#include <iostream>
using namespace std;

int lcm(int a, int b){


    int num = 0;
    (b > a )? num = b: num = a;

    while(true){
        if(num % a == 0 && num % b == 0){
            break;
        }
        num++;
    }
    cout << "LCM of " << a << " and " << b << " is " << num << endl;
    return num;
}

int gcd(int num1, int num2){
    return num1 * num2 / static_cast<double>( lcm(num1, num2));
}

/*
int gcd(int a, int b) {
    // Find Minimum of a and b
    int res = min(a, b);

      // Testing divisiblity with all numbers starting from
    // min(a, b) to 1

    while (res > 1) {

        // If any number divide both a and b, so we
        // got the answer
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
    return res;
*/

int main(){
    int num1 = 2;
    int num2 = 1;
    int gcdNum = gcd(num1,num2);

    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is " << gcdNum;
}