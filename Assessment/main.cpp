#include <iostream>
#include <fstream>
using namespace std;

int printMenu();

int main(){

    fstream bookFile;
    bookFile.open("books.file", ios::app | ios::in);

    int choice = printMenu();

    string text = "";
    getline(bookFile, text, '\n');
    // cout << text << endl;
    while(bookFile){
        string bookId = ""; 
        bookFile >> bookId;   
        // getline(bookFile,bookId, '\t');
        cout << bookId;
        string bookName = "";
        // bookFile >> bookName;
        getline(bookFile,bookName);

        cout << bookName << endl;
    }

    bookFile.close();

    return 0;
}

int printMenu(){
    int choices = -1;
    while(choices < 1 || choices > 4){
        cout << "=======================================\n";
        cout << "              Book Rating\n";
        cout << "=======================================\n";
        cout << "1 - Read book reviews\n";
        cout << "2 - Read book reviews\n";
        cout << "3 - Read book reviews\n";
        cout << "4 - Read book reviews\n\n";
        cout << "Please enter your choice [1-4]: ";
        cin >> choices;
    }

    return 1;
}