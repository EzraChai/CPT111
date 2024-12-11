#include <iostream>
using namespace std;

/*
2. Sum of Numbers
Write a program that continue reading a set of integers and then finds and prints the
sum of the odd integers only and count how many digits are odd out of the total
input number.
*/

int main(){

    int notOddNumber = 0;
    int sumOddNumber = 0;
    int totalOddNumber = 0;
    int totalNumbersEntered = 0;
    int num;
    cout << "Please enter a number (Enter 0 to stop the program): ";
    cin >> num;
    while(true){
        if(num == 0){
            break;
        }

        if(num % 2 != 0){
            sumOddNumber += num;
            totalOddNumber++;
        }

        totalNumbersEntered++;

        cout << "Please enter a number (Enter 0 to stop the program): ";
        cin >> num;
    }

    cout << "Sum of odd number: " << sumOddNumber << "\n";
    cout << "Total odd number : " << totalOddNumber << "\n";
    cout << "Total numbers entered : " << totalNumbersEntered << "\n";

    return 0;
}