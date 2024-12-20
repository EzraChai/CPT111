#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int printMenu();
void printBookRating();
void printBookRatingBasedOnBookId();
void printBookRatingBasedOnUsername();
void addReview();

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
        case 4:
            addReview();
            break;
        case 0:
            return 0;
        }
    }

    return 0;
}

void addReview()
{
    cout << "=============================================\n";

    string username;
    cout << "What's your username? ";
    cin >> username;

    fstream bookFile;
    bookFile.open("books.file", ios::in);

    if (bookFile)
    {
        cout << "\n------------------------------------\n";
        cout << "Book ID\tBook Title\n";
        cout << "------------------------------------\n";

        while (bookFile)
        {
            string bookId;
            bookFile >> bookId;
            bookFile.seekg(1L, ios::cur);
            string bookTitle;
            getline(bookFile, bookTitle);
            cout << bookId << "\t" << bookTitle << "\n";
            bookTitle = "";
            bookId = "";
        }
        string userBookId;
        cout << "Please enter the book ID: ";
        cin >> userBookId;

        bookFile.clear();
        bookFile.seekg(0L, ios::beg);
        bool isExist = false;
        string bookTitle;

        while (bookFile)
        {
            string bookId;
            bookFile >> bookId;
            bookFile.seekg(1L, ios::cur);
            getline(bookFile, bookTitle);
            if (bookId == userBookId)
            {
                isExist = true;
                break;
            }
        }
        while (isExist == false)
        {
            cout << "Opps. Book is not found.\n";
            cout << "Please try again.\n";

            bookFile.clear();
            bookFile.seekg(0L, ios::beg);
            cout << "\n------------------------------------\n";
            cout << "Book ID\tBook Title\n";
            cout << "------------------------------------\n";

            while (bookFile)
            {
                string bookId;
                bookFile >> bookId;
                bookFile.seekg(1L, ios::cur);
                getline(bookFile, bookTitle);
                cout << bookId << "\t" << bookTitle << "\n";
                bookTitle = "";
                bookId = "";
            }

            string userBookId;
            cout << "Please enter the book ID: ";
            cin >> userBookId;

            bookFile.clear();
            bookFile.seekg(0L, ios::beg);
            while (bookFile)
            {
                string bookId;
                bookFile >> bookId;
                bookFile.seekg(1L, ios::cur);
                getline(bookFile, bookTitle);
                if (bookId == userBookId)
                {
                    isExist = true;
                    break;
                }
            }
        }
        bookFile.close();
        string review;
        cout << "\nBook Title: " << bookTitle << endl;

        int rating;
        cout << "Please rate the book: [1-5] ";
        cin >> rating;
        while (rating > 5 || rating < 1)
        {
            cout << "1 - 5 only.\n";
            cout << "Please rate the book: [1-5] ";
            cin >> rating;
        }

        cin.ignore();
        cout << "Please add a review: ";
        getline(cin, review);

        fstream ratingsFile;
        ratingsFile.open("ratings.file", ios::app);

        ratingsFile << "\n"
                    << userBookId << "\t" << username << "\t" << rating << "\t"
                    << review;
        ratingsFile.close();

        fstream averageRatingsFile;

        averageRatingsFile.open("average_ratings.file", ios::in | ios::app);

        if (averageRatingsFile)
        {
            while (averageRatingsFile)
            {
                string id;
                averageRatingsFile >> id;

                int numOfRatings;
                averageRatingsFile >> numOfRatings;

                int averageRating;
                averageRatingsFile >> averageRating;

                int goodreadsRating;
                averageRatingsFile >> goodreadsRating;

                if (id == userBookId)
                {
                    cout << id << " " << numOfRatings << " " << averageRating << " " << goodreadsRating << endl;
                }
            }
        }
        else
        {
            cout << "Error opening the books file.\n";
        }

        cout << "\nReview added.\n";
    }
    else
    {
        cout << "Error opening the books file.\n";
    }

    cout << "\n\n";

    bookFile.close();
}

void printBookRating()
{
    fstream averageRatingFile;
    averageRatingFile.open("average_ratings.file", ios::in);

    fstream bookFile;
    bookFile.open("books.file", ios::in);

    cout << "\n";
    if (averageRatingFile && bookFile)
    {
        cout << "+-------------------------------------------+\n";
        cout << "|                    Books                  |\n";
        cout << "+-------------------------------------------+\n\n";
        cout << "------------------------------------------------------------------------------------------------------------------------\n";
        cout << "Book ID" << "\t" << "Book Title" << "\t\t\t\t\t\t" << "Number of Ratings" << "\t" << "Average Rating" << "\t" << "Goodreads Rating\n";
        cout << "------------------------------------------------------------------------------------------------------------------------\n";

        while (averageRatingFile)
        {
            string bookRatingId;
            averageRatingFile >> bookRatingId;

            while (bookFile)
            {
                string bookId;
                bookFile >> bookId;
                string bookTitle;
                bookFile.seekg(1L, ios::cur);
                getline(bookFile, bookTitle);
                if (bookRatingId == bookId)
                {
                    cout << bookId << "\t" << bookTitle;
                    if (bookTitle.length() > 48)
                    {
                        cout << "\t";
                    }
                    else if (bookTitle.length() > 40)
                    {
                        cout << "\t\t";
                    }
                    else if (bookTitle.length() > 32)
                    {
                        cout << "\t\t\t";
                    }
                    else if (bookTitle.length() > 24)
                    {
                        cout << "\t\t\t\t";
                    }
                    else if (bookTitle.length() > 16)
                    {
                        cout << "\t\t\t\t\t";
                    }
                    else if (bookTitle.length() > 8)
                    {
                        cout << "\t\t\t\t\t\t";
                    }
                    else
                    {
                        cout << "\t\t\t\t\t\t\t";
                    }
                    bookFile.seekg(0L, ios::beg);
                    break;
                }
            }
            string numOfRatings;
            averageRatingFile >> numOfRatings;
            string averageRating;
            averageRatingFile >> averageRating;
            string goodReadsRating;
            averageRatingFile >> goodReadsRating;

            cout << numOfRatings << "\t\t\t" << averageRating << "\t\t" << goodReadsRating << "\n";
            numOfRatings = "";
            averageRating = "";
            goodReadsRating = "";
        }
    }
    else
    {
        cout << "Error opening the average ratings file.\n";
    }
    cout << "\n\n";

    averageRatingFile.close();
    bookFile.close();
}

void printBookRatingBasedOnBookId()
{
    fstream bookFile;
    bookFile.open("books.file", ios::in);

    fstream ratingFile;
    ratingFile.open("ratings.file", ios::in);

    fstream averageRatingsFile;
    averageRatingsFile.open("average_ratings.file", ios::in);

    cout << "=============================================\n";

    string userBookId;
    cout << "What's the book ID? ";
    cin >> userBookId;

    if (bookFile)
    {
        bool bookExist = false;
        string bookTitle = "";
        string bookId;

        while (bookFile)
        {
            bookFile >> bookId;
            bookFile.seekg(1L, ios::cur);
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
            cout << "\n+-------------------------------------------+\n";
            cout << "|                Book Reviews               |\n";
            cout << "+-------------------------------------------+\n";
            cout << "\nBook's title: " << bookTitle << "\n";

            if (averageRatingsFile)
            {
                while (averageRatingsFile)
                {
                    string averageRatingsBookId;
                    averageRatingsFile >> averageRatingsBookId;
                    // Number of Ratings Average Rating Goodreads Rating
                    string numOfRatings;
                    averageRatingsFile >> numOfRatings;
                    string averageRating;
                    averageRatingsFile >> averageRating;
                    string goodreadsRating;
                    averageRatingsFile >> goodreadsRating;

                    if (bookId == averageRatingsBookId)
                    {
                        cout << "Average Ratings: " << averageRating << "\n";
                        cout << "Number of Ratings: " << numOfRatings << "\n";
                        cout << "Goodreads Rating: " << goodreadsRating << "\n";
                    }
                }
            }

            if (ratingFile)
            {
                string text = "";
                int reviewCount = 0;

                cout << "------------------------------------------------------------\n";
                cout << "Username" << "\t" << "Rating" << "\t" << "Comments\n";
                cout << "------------------------------------------------------------\n";

                while (ratingFile)
                {
                    string bookId;
                    ratingFile >> bookId;
                    string username;
                    ratingFile >> username;
                    string rating;
                    ratingFile >> rating;
                    ratingFile.seekg(1L, ios::cur);
                    string comment;
                    getline(ratingFile, comment);
                    if (bookId == userBookId)
                    {
                        if (username.length() >= 8)
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
            ratingFile.seekg(1L, ios::cur);
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
            cout << "\n+-------------------------------------------+\n";
            cout << "|                Book Reviews               |\n";
            cout << "+-------------------------------------------+\n";
            cout << "Reviews written by " << userEnteredUsername << "\n\n";

            if (ratingFile)
            {
                ratingFile.seekg(0L, ios::beg);
                string text = "";
                int reviewCount = 0;

                cout << "------------------------------------------------------\n";
                cout << "Book ID" << "\t" << "Rating" << "\t" << "Comments\n";
                cout << "------------------------------------------------------\n";

                while (ratingFile)
                {
                    string bookId;
                    ratingFile >> bookId;
                    string username;
                    ratingFile >> username;
                    string rating;
                    ratingFile >> rating;
                    ratingFile.seekg(1L, ios::cur);
                    string comment;
                    getline(ratingFile, comment);
                    if (userEnteredUsername == username)
                    {

                        cout << bookId << "\t" << rating << "\t" << comment << "\n";
                    }
                }
            }
        }
        else
        {
            cout << "\nOpps! User with the username [" << userEnteredUsername << "] is not found.\n";
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
    cout << "1 - Read all books ratings\n";
    cout << "2 - Read reviews based on book's ID\n";
    cout << "3 - Read reviews based on reviewer's username\n";
    cout << "4 - Add new review\n";
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
        cout << "1 - Read all books ratings\n";
        cout << "2 - Read reviews based on book's ID\n";
        cout << "3 - Read reviews based on reviewer's username\n";
        cout << "4 - Add new review\n";
        cout << "0 - Quit the program\n\n";
        cout << "Please enter your choice [0-4]: ";
        cin >> choice;
    }

    return choice;
}