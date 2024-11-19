#include <iostream>

using namespace std;

int main(){

    int num = 11;
    bool isPrime = true;

    if( num == 0 || num == 1){
        isPrime = false;
    }

    for(int i = 2; i < num/2; i++){
        if(num % i == 0){
            isPrime = false;
        }
    }

    if(isPrime){
        cout << num << " is prime number."; 
    }else {
        cout << num << " is not prime number."; 
    }


}