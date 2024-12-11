#include <iostream>
#include <cmath>
using namespace std;

/*
Prime Number
Write a program that prompts the user to input a positive integer. It should then
output a message indicating whether the number is a prime number.
Hints: An even number is prime if it is 2. An odd integer is prime if it is not divisible by
any odd integer less than or equal to the square root of the number.
*/

int main(){
    int num;
    bool isPrimeNumber = true;
    cout << "Please enter a positive integer: ";
    cin >> num;

    if(num != 2){
        if(num == 1){
            isPrimeNumber = false;
        }
        
        if(num % 2 == 0){
            isPrimeNumber = false;
        }else {
            int div = 3;
            int sqrtNum = static_cast<int>(sqrt(num));   
            while(div <= sqrtNum){
                if(num % div == 0){
                    isPrimeNumber = false;
                    break;
                }
                div+= 2;
            }     
        }
    }

    isPrimeNumber ? cout << num << " is a prime number." : cout << num << " is not a prime number.";

    return 0;
}