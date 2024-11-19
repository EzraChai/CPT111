#include <iostream>
#include <fstream>

/*
Write a program that asks the user for the name of a file. If no such file exists, the
program should display an error message; otherwise it should display the alternate
lines in the file (the lines with the numbers 1, 3, 5 …). The corresponding line number
should be displayed before each line.
Note: create a simple text file to test this program.
*/

int main(){

    std::string nameOfFile = "";
    std::cout << "Please enter the file name: ";
    std::cin >> nameOfFile;

    std::ifstream file;

    file.open(nameOfFile);

    if(file.fail()){
        std::cout << "The file is nor exists.";
    }

    int line_number = 1;
    std::string out;
    while(std::getline(file, out)){
        if(line_number % 2 != 0){
            std::cout << line_number << " " << out << std::endl;
        }
        ++line_number;
    }

    return 0;
}