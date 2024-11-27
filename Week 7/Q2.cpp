#include <iostream>
#include <cmath>
using namespace std;

/*
Prime Number
Write a program that prompts the user to input a positive integer less than 50. Let's
call it n-th value. Using the n-th value, as the basis, find a series of the first n-th
(positive) number series which is not a prime number.
Hints: An even number is prime if it is 2. An odd integer is prime if it is not divisible by
any odd integer less than or equal to the square root of the number.
Hints 2: if the n-th value is 5, the answer should be: 1, 4, 6, 8, 9.
*/

int main(){
    int num = 0;
    cout << "Please enter a postive integer: ";
    cin >> num;

    int notPrime = 1;
    int i = 1;

    for (int i = 1; i <= num;){
        if(notPrime == 1){
            cout << 1;
            notPrime++;
            i++;
        }else if(notPrime == 2){
            notPrime++;
        }else if(notPrime % 2 == 0){
            cout << ", " << notPrime;
            notPrime++;
            i++;
        }else {
            int oddNum = 3;
            int sqrNum = static_cast<int>(sqrt(notPrime));
            while(oddNum <= sqrNum){
                if(notPrime % oddNum == 0){
                    cout << ", " <<notPrime;
                    i++;
                    notPrime++;
                }else {
                    oddNum+=2;
                }
            }
            notPrime++;
        }
    }

    return 0;
}