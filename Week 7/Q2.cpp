#include <iostream>
#include <fstream>

/*
Write a program that asks the user for the name of a file. The program should
display the contens of the file on the screen. If the file’s contents won’t fit on a single
screen, the program should display 24 lines of output at a time, then pause. Each
time the program pauses, it should wait for the user to strike a key before the next
24 lines are displayed.
Note: create a simple text file to test this program.
*/

int main(){

    std::ifstream ifile;

    ifile.open("example_sentences.txt");

    if(ifile.fail()){
        std::cout << "Error: File not existed.";
        return 0;
    }

    std::string line = "";
    int lineNumber = 1;
    while(std::getline(ifile, line)){
        if(lineNumber % 24 == 0){
            char continueFlag = 'n';
            std::cout << "\nWould you like to continue? [Y/n] ";
            std::cin >> continueFlag;
            std::cout << "\n";
            if(continueFlag != 'Y' && continueFlag != 'y'){
                return 0;
            }
        }
        std::cout << line << "\n";
        lineNumber++;
    }

    ifile.close();

    return 0;
}