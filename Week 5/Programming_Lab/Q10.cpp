#include <iostream>
#include <ctime>

int main(){
    std::srand(std::time(0)); // Seed the random number generator with the current time
    int randNumber = rand() % 10;
    int guessNumber; 
    int guessCout = 0;

    std::cout << "Please pick a number [0-10]: ";
    std::cin >> guessNumber;
    ++guessCout;
    while(randNumber != guessNumber ){
        if(randNumber < guessNumber){
            std::cout << "Too high, try again.\n";
        }else {
            std::cout << "Too low, try again.\n";
        }
        ++guessCout;
        std::cout << "Please pick a number [1-10]: ";
        std::cin >> guessNumber;
    }

    std::cout << "\nCorrect! The number is " << guessNumber << ".\nYou had took " << guessCout << " guesses to guess the number.";



    return 0;
}