#include <iostream>

/*
    A number is called a palindrome if it remains unchanged when its digits are reversed.
    Write a program to accept a nonzero positive number. The program should loop
    until the user inputs a valid number. The program should then generate the reversed
    number. If the reversed number is equal to the original, a message should be
    displayed that the number is a palindrome.
    Hint: To find the reverse of a number, you can follow ths procedure to reverse a
    number n. Initialise reversed number, revno to 0. Divide n by 10 and store the
    remainder in r. Then add the remainder r to revno multiplied by 10. Repeat
    continually until n becomes 0.
*/

int main(){

    int n = 0;
    int norm = 0;

    std::cout << "Please enter a non-zero positive number: ";
    std::cin >> n;
    while (n <= 0){
        std::cout << "Only accept non-zero positive number.";
        std::cout << "Please enter a non-zero positive number: ";
        std::cin >> n;
    }
    norm = n;

    int revno = 0;
    int r = 0;

    while(n != 0){
        r = n % 10;
        revno =  revno * 10 + r;
        n /= 10;
    }

    if(revno == norm ){
        std::cout << norm << " is a palindrome.";
    }else {
        std::cout << norm << " is not a palindrome.";
    }
    
    
    return 0;
}