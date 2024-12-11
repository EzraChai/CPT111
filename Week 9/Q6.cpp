#include <iostream>
using namespace std;
// You must write definitions for the two functions qualify and noQualify.
void qualify();
void noQualify();

int main(){
    double salary;
    int years;
    cout << "This program will determine if you qualify\n";
    cout << "for our credit card.\n"; cout << "What is your annual salary? ";
    cin >> salary;
    cout << "How many years have you worked at your "; cout << "current job? ";
    cin >> years;
    if (salary >= 17000.0 && years >= 2)
    qualify();
    else
    noQualify();
    return 0;
}

void qualify(){
    cout << "You are qualify for the card.\nThe annual interest rate is 12%.\n";
}

void noQualify(){
    cout << "You are not qualify for the card.\nYour annual salary is lower than RM17000.0 or your current job working years is lower than 2 years.";  
}