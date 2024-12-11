#include <iostream>
using namespace std;

/*
Count Positive and Negative Numbers
Write a program that ask the user for a positive integer n within 10 to 20. The
program should loop till the user inputs a valid number. After receiving a valid input,
it should prompt the user to enter n numbers within a loop and count the total
number of positive and negative numbers separately.
*/

int main(){

    int num = 0;
    int numPositive = 0;
    int numNegative = 0;
    cout << "Please enter a number within 10 to 20: ";
    cin >> num;

    while (num < 10 || num > 20){
        cout << "Please enter a number within 10 to 20: ";
        cin >> num;
    }

    int userNumber;

    while(userNumber != 0){
        cout << "Please enter a number: (enter 0 to stop the program) ";
        cin >> userNumber;
        if(userNumber > 0){
            ++numPositive;
        }else if (userNumber < 0){
            ++numNegative;
        }
    }
    
    cout << "Total positive number: " << numPositive << "\n";
    cout << "Total negative number: " << numNegative << "\n";

    return 0;
}