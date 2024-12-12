#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int printMenu();
void printBookRating();
void printBookRatingBasedOnBookId();
void printBookRatingBasedOnUsername();

int main()
{
    int userChoice = -1;
    string bookId = "";
    while (true)
    {
        userChoice = printMenu();
        switch (userChoice)
        {
        case 1:
            printBookRating();
            break;
        case 2:
            printBookRatingBasedOnBookId();
            break;
        case 3:
            printBookRatingBasedOnUsername();
            break;
        case 0:
            return 0;
        }
    }

    return 0;
}

void printBookRating()
{
    fstream ratingFile;
    ratingFile.open("ratings.file", ios::in);
    cout << "\n\n";

    if (ratingFile)
    {
        string text = "";
        cout << "+-------------------------------------------+\n";
        cout << "|                Books Review               |\n";
        cout << "+-------------------------------------------+\n";

        while (getline(ratingFile, text))
        {
            cout << text << "\n";
        }
    }
    else
    {
        cout << "Error opening the ratings file.\n";
    }
    cout << "\n\n";

    ratingFile.close();
}

void printBookRatingBasedOnBookId()
{
    fstream bookFile;
    bookFile.open("books.file", ios::in);

    fstream ratingFile;
    ratingFile.open("ratings.file", ios::in);

    cout << "=============================================\n";

    string userBookId;
    cout << "What's the book ID? ";
    cin >> userBookId;

    if (bookFile)
    {
        bool bookExist = false;
        string bookTitle = "";
        while (bookFile)
        {
            string bookId;
            bookFile >> bookId;
            bookFile.seekg(6L, ios::cur);
            string bookName;
            getline(bookFile, bookName);
            if (userBookId == bookId)
            {
                bookExist = true;
                bookTitle = bookName;
                break;
            }
        }

        if (bookExist == true)
        {
            cout << "\nBook's title: " << bookTitle << "\n";

            if (ratingFile)
            {
                string text = "";
                int reviewCount = 0;
                cout << "+-------------------------------------------+\n";
                cout << "|                Book Reviews               |\n";
                cout << "+-------------------------------------------+\n";
                cout << "Username" << "\t" << "Rating" << "\t" << "Comments\n";
                while (ratingFile)
                {
                    string bookId;
                    ratingFile >> bookId;
                    string username;
                    ratingFile >> username;
                    string rating;
                    ratingFile >> rating;
                    ratingFile.seekg(7L, ios::cur);
                    string comment;
                    getline(ratingFile, comment);
                    if (bookId == userBookId)
                    {
                        if (username.length() > 8)
                        {
                            cout << username << "\t";
                        }
                        else
                        {
                            cout << username << "\t\t";
                        }
                        cout << rating << "\t" << comment << " \n";
                    }
                }
            }
        }
        else
        {
            cout << "\nOpps! Book ID not found.\n";
        }
        cout << "\n\n";
    }
    ratingFile.close();
    bookFile.close();
}

void printBookRatingBasedOnUsername()
{
    fstream ratingFile;
    ratingFile.open("ratings.file", ios::in);

    cout << "=============================================\n";

    string userEnteredUsername;
    cout << "What's the username? ";
    cin >> userEnteredUsername;

    if (ratingFile)
    {
        bool userNameExist = false;
        while (ratingFile)
        {
            string bookId;
            ratingFile >> bookId;
            string username;
            ratingFile >> username;
            string rating;
            ratingFile >> rating;
            ratingFile.seekg(7L, ios::cur);
            string comment;
            getline(ratingFile, comment);
            if (userEnteredUsername == username)
            {
                userNameExist = true;
                break;
            }
        }

        if (userNameExist == true)
        {
            cout << "\nReviews written by " << userEnteredUsername << "\n";

            if (ratingFile)
            {
                ratingFile.seekg(0L, ios::beg);
                string text = "";
                int reviewCount = 0;
                cout << "+-------------------------------------------+\n";
                cout << "|                Book Reviews               |\n";
                cout << "+-------------------------------------------+\n";
                cout << "Book ID" << "\t\t" << "Rating" << "\t" << "Comments\n";
                while (ratingFile)
                {
                    string bookId;
                    ratingFile >> bookId;
                    string username;
                    ratingFile >> username;
                    string rating;
                    ratingFile >> rating;
                    ratingFile.seekg(7L, ios::cur);
                    string comment;
                    getline(ratingFile, comment);
                    if (userEnteredUsername == username)
                    {

                        cout << bookId << "\t\t" << rating << "\t" << comment << " \n";
                    }
                }
            }
        }
        else
        {
            cout << "\nOpps! Username not found.\n";
        }
        cout << "\n\n";
    }
    ratingFile.close();
}

int printMenu()
{
    int choice = -1;
    cout << "=============================================\n";
    cout << "             Books Rating System\n";
    cout << "=============================================\n";
    cout << "1 - Read all books reviews\n";
    cout << "2 - Read reviews based on book's ID\n";
    cout << "3 - Read reviews based on reviewer's username\n";
    cout << "4 - \n";
    cout << "0 - Quit the program\n\n";
    cout << "Please enter your choice [0-4]: ";
    cin >> choice;

    while (choice < 0 || choice > 4)
    {
        cout << "\nPlease enter only [0-4].\n";
        cout << "Please try again.\n\n";
        cout << "=============================================\n";
        cout << "             Books Rating System\n";
        cout << "=============================================\n";
        cout << "1 - Read all books reviews\n";
        cout << "2 - Read reviews based on book's ID\n";
        cout << "3 - Read reviews based on reviewer's username\n";
        cout << "4 - \n";
        cout << "0 - Quit the program\n\n";
        cout << "Please enter your choice [0-4]: ";
        cin >> choice;
    }

    return choice;
}