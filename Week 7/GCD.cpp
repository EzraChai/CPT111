#include <iostream>
using namespace std;

int main(){

    int x = 5;
    int y = 24;
    int gcd = 0;

    x > y ? gcd = y: gcd = x;
    
    while(gcd >= 1){
        if(x % gcd == 0 && y % gcd == 0){
            cout << "The GCD for " << x << " and " << y << " is " << gcd << endl;
            break;
        }
        gcd--;
    }

    return 0;
}