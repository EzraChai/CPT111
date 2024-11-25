#include <iostream>
#include <fstream>

/*
. Write a program that asks the user for the name of a file. The program should
display the following data about the file:
• Number of words (each word is preceded by a bank space or newline.)
• Number of sentences (Each sentence is terminated by a period.)
Create your own file to test the program
*/

int main(){

    std::string nameOfFile;
    int numberOfWords = 0;
    int numberOfSentences = 0;

    std::ifstream file;
    std::cout << "Name of file: ";
    std::cin >> nameOfFile;
    file.open(nameOfFile);

    if(file.fail()){
        std::cout << "File not exist.";
        return 0;
    }

    std::string line, text;


    while(file >> text){
        numberOfWords++;
    }

    std::cout << numberOfWords << '\n';

    file.clear();
    file.seekg(0L, std::ios::beg);

    char c;

    while(file.get(c)){
        if(c == '.'){
            file.get(c);
            numberOfSentences++;
        }
    }

    std::cout << numberOfSentences << '\n';

    return 0;
}