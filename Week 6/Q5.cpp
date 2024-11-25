#include <iostream>
#include <fstream>

/*
Write a program that asks the user for the name of a file. The program should
display the contents of the fil on the screen. Each line of screen output should be
preceded with a line number, followed by a colon. The line numbering should start at
1. Here is an example:
1:George Rolland
2:127 Academy Street
3:Brasstown, NC 28706
If the file’s contents won’t fit on a single screen, the program should display 24 lines
of output at a time, then pause. Each time the program pauses, it should wait for the
user to strike a key before the next 24 lines are displayed. (You can modify the
program from Q2)
*/

int main(){

    std::string nameOfFile = "";
    std::cout << "Please enter the file name: ";
    std::cin >> nameOfFile;

    std::ifstream ifile;

    ifile.open(nameOfFile);

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
        std::cout << lineNumber << ":" << line << "\n";
        lineNumber++;
    }

    ifile.close();

    return 0;
}
