#include <iostream>
#include <fstream>

/*
Write a program that reads and prints a joke and its punch line from two different
files. The first file contains a joke, but not its punch line. The second file has the
punch line as its last line, preceded by “garbage”. Your program should open the two
files then do the processing. The program should read and display each line in the
file it is passed (the joke file). The second function should display only the last line of
the file it is passed (the punch line file). It should find this line by seeking to the end
of the file and then backing up to the beginning of the last line.
Data to test your program can be found in joke.txt and punchline.txt files.
 */

int main(){

    std::fstream file1;
    file1.open("joke.txt", std::ios::in);

    std::fstream file2;
    file2.open("punchline.txt", std::ios::in);

    std::string out;

    while(getline(file1, out)){
        std::cout << out << "\n";
    }
    file1.close();

    file2.seekg(-36L, std::ios::end);
    getline(file2, out);

    std::cout << out << "\n";

    file2.close();

    return 0;
}