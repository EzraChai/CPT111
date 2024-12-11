#include <iostream>
using namespace std;

/*
break and continue Statement
Using a break statement, write a program to sum a list of ten negative numbers
entered iteratively.
Change break to continue. What can you conclude continue doing?
*/

int main(){

    int count = 0;
    int sum = 0;
    int num;
    while(true){
        if(count == 10){
            break;
        }

        cout << "Please enter a negative number: ";
        cin >> num;

        sum+= num;
        
        count++;
    }

    cout << "\nSum: " << sum << endl;

    return 0;
}