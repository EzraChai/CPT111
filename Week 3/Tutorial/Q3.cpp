#include <iostream>

/*
    Malaysian identity card (IC) consists of 12 digit number in which, the first 6 digits represent
    the date of birth of a citizen in the following format: YYMMDDxxXXXX, and the next 6 digit x
    represents the ID with no specific meaning.
    Without using array, loop, conditions, substr function or any string manipulation
    function, get the age of the IC owners using what you have learned up until this week.
    Note: calculate based only on the year portion in the ID card. No need to consider the
    month.
    Assumption: All IC cardholders were born earlier than the year 2000.

    Example: 950522050274
    29 years old
*/

int main(){

    unsigned long IC;
    int age, year;

    std::cout << "Please enter your IC number: ";
    std::cin >> IC;

    year = 1900 + IC / 1e10 ;
    age = 2024 - year;

    std::cout << "You are "<< age << " years old. \n";

    return 0;
}