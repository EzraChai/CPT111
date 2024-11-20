#include <iostream>
#include <fstream>

/*
Write a program that asks the user for the name of a file. If the file cannot be
opened, the program should display an error message; otherwise the program
should display only those words in the file that have at least 10 characters in them.
The program should also display the number of characters alongside each word. As
an end note, the program should display a total number of words printed. The
program should clouse the file before exiting.
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

    std::string text;
    int wordsPrinter = 0;
    while(ifile >> text){
        int wordLength = text.length();

        if(wordLength > 10){
            std::cout << text << "" << wordLength << " ";
            wordsPrinter++;
        }
    }

    std::cout << "\n\nWords Printed: " << wordsPrinter << '\n';
    
    ifile.close();

    return 0;
}