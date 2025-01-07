#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int printMenu();
void printBookRating();
void printBookRatingBasedOnBookId();
void printBookRatingBasedOnUsername();
void addReview(string);
void addNewBook();
void printBooks();

int main()
{
    int userChoice = -1;
    string bookId = "";
    string username;

    // Prompt user for their username
    cout << "Please enter your username: ";
    cin >> username;
    cout << "Hello, " << username << "!\n\n";
    while (true)
    {
        userChoice = printMenu(); // Display menu and get the user's choice
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
            addReview(username);
            break;
        case 5:
            addNewBook();
            break;
        case 0:
            cout << "\nBye, " << username << "!\n\n";
            return 0;
        }
    }

    return 0;
}

// Function to add a new book and entering details such as Book ID and Title
void addNewBook()
{
    cout << "=============================================\n";

    fstream bookFile;
    bookFile.open("books.file", ios::in);

    if (bookFile)
    {

        bool bookIdExisted = false;
        string bookId;
        //  Prompt user to enter new book ID
        cout << "New book ID: ";
        cin >> bookId;

        cin.ignore();

        // Check whether the book ID has duplicate or not
        while (bookFile)
        {
            string bookLine[2];
            bookFile >> bookLine[0];
            getline(bookFile, bookLine[1]);
            if (bookLine[0] == bookId)
            {
                cout << "Opps! Book ID [" << bookLine[0] << "] already existed.\n\n";
                bookIdExisted = true;
                bookLine[0] = "";
                break;
            }
        }
        while (bookIdExisted)
        {
            bookFile.seekg(0L, ios::beg);
            bookIdExisted = false;
            //  Prompt user to enter new book ID
            cout << "New book ID: ";
            cin >> bookId;

            cin.ignore();

            while (bookFile)
            {
                string bookLine[2];
                bookFile >> bookLine[0];
                getline(bookFile, bookLine[1]);
                if (bookLine[0] == bookId)
                {
                    cout << "Opps! Book ID [" << bookLine[0] << "] already existed.\n\n";
                    bookIdExisted = true;
                    bookLine[0] = "";
                    break;
                }
            }
        }
        bookFile.close();
        bookFile.open("books.file", ios::app);

        string bookTitle;
        //  Prompt user to enter new book Title
        cout << "New book Title: ";
        getline(cin, bookTitle);

        bookFile << "\n"
                 << bookId << "\t" << bookTitle;

        bookFile.close();

        double goodreadsRating;
        //  Prompt user to enter new book's Goodreads rating
        cout << "Goodreads rating: ";
        cin >> goodreadsRating;

        fstream averageRatingsFile;
        averageRatingsFile.open("average_ratings.file", ios::app);

        // Write the initial data into the average ratings file
        averageRatingsFile << "\n"
                           << bookId << "\t" << 0 << "\t" << 0 << "\t" << goodreadsRating;

        averageRatingsFile.close();
        cout << "\nNew book added.\n";
    }
    else
    {
        cout << "Error opening the books file.\n";
    }
    cout << "\n\n";
}

// Function to add a new review, username is passed into the function
void addReview(string username)
{
    cout << "=============================================\n";

    fstream bookFile;
    bookFile.open("books.file", ios::in);

    if (bookFile)
    {

        // Print Books
        printBooks();

        string userBookId;
        // Prompt user to enter a book ID
        cout << "Please enter the book ID: ";
        cin >> userBookId;

        // Reset the file to check if the book ID exists
        bookFile.clear();
        bookFile.seekg(0L, ios::beg);
        bool isExist = false;
        string bookTitle;

        while (bookFile)
        {
            string bookLine[2];
            bookFile >> bookLine[0];
            bookFile.seekg(1L, ios::cur);
            getline(bookFile, bookLine[1]);
            if (bookLine[0] == userBookId)
            {
                userBookId = bookLine[0];
                bookTitle = bookLine[1];
                isExist = true; // Book found
                break;
            }
        }
        // If book ID does not exist, prompt user again
        while (!isExist)
        {
            cout << "Opps. Book is not found.\n";
            cout << "Please try again.\n";

            printBooks();

            // Prompt user to select a book by ID again
            cout << "Please enter the book ID: ";
            cin >> userBookId;

            bookFile.clear();
            bookFile.seekg(0L, ios::beg);
            while (bookFile)
            {
                string bookLine[2];
                bookFile >> bookLine[0];
                bookFile.seekg(1L, ios::cur);
                getline(bookFile, bookLine[1]);
                if (bookLine[0] == userBookId)
                {
                    userBookId = bookLine[0];
                    bookTitle = bookLine[1];
                    isExist = true; // Book found
                    break;
                }
            }
        }
        bookFile.close();

        // Prompt user for rating and review
        string review;
        cout << "\nBook Title: " << bookTitle << endl;

        int rating;
        cout << "Please rate the book: [1-5] ";
        cin >> rating;

        //  If user entered an invalid rating, the program will repeatedly prompt user to enter a valid rating
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
        if (ratingsFile)
        {
            // Add review to the ratings file
            ratingsFile << "\n"
                        << userBookId << "\t" << username << "\t" << rating << "\t"
                        << review;
            ratingsFile.close();
        }
        fstream averageRatingsFile;
        fstream bufferFile;

        /*
         Create a buffer file and write on the file with changed data.
         Buffer file is then copy and paste to the original file.
        */
        averageRatingsFile.open("average_ratings.file", ios::in);
        bufferFile.open("buffer.file", ios::out);

        if (averageRatingsFile && bufferFile)
        {
            while (averageRatingsFile)
            {
                string id;
                averageRatingsFile >> id;

                int numOfRatings;
                averageRatingsFile >> numOfRatings;
                numOfRatings;
                if (id == userBookId)
                {
                    numOfRatings++;
                }

                double averageRating;
                averageRatingsFile >> averageRating;
                if (id == userBookId)
                {
                    // calculate the average rating
                    averageRating = (averageRating * numOfRatings + rating) / static_cast<double>(numOfRatings);
                }

                double goodreadsRating;
                averageRatingsFile >> goodreadsRating;

                if (id != "")
                {
                    int intOfAverageRating = averageRating;
                    if (intOfAverageRating != averageRating)
                    {
                        bufferFile << id << "\t" << numOfRatings << "\t" << fixed << setprecision(2) << averageRating << "\t" << goodreadsRating << endl;
                    }
                    else
                    {
                        bufferFile << id << "\t" << numOfRatings << "\t" << fixed << setprecision(0) << averageRating << "\t" << goodreadsRating << endl;
                    }
                }
            }
            bufferFile.close();
            averageRatingsFile.close();
            bufferFile.open("buffer.file", ios::in);
            averageRatingsFile.open("average_ratings.file", ios::out);
            string line = "";

            //  write file from buffer file back to average ratings file
            while (getline(bufferFile, line))
            {
                averageRatingsFile << line << endl;
            }
            bufferFile.close();
            averageRatingsFile.close();
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

// Displays all books and their ratings in a table
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
                string bookLine[2];
                bookFile >> bookLine[0];
                bookFile.seekg(1L, ios::cur);
                getline(bookFile, bookLine[1]);
                if (bookRatingId == bookLine[0])
                {
                    cout << bookLine[0] << "\t" << bookLine[1];

                    //  Let the table display neatly
                    if (bookLine[1].length() >= 48)
                    {
                        cout << "\t";
                    }
                    else if (bookLine[1].length() >= 40)
                    {
                        cout << "\t\t";
                    }
                    else if (bookLine[1].length() >= 32)
                    {
                        cout << "\t\t\t";
                    }
                    else if (bookLine[1].length() >= 24)
                    {
                        cout << "\t\t\t\t";
                    }
                    else if (bookLine[1].length() >= 16)
                    {
                        cout << "\t\t\t\t\t";
                    }
                    else if (bookLine[1].length() >= 8)
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
        cout << "Error opening the average ratings file or books file.\n";
    }
    cout << "\n\n";

    averageRatingFile.close();
    bookFile.close();
}

// Print available books with ID and title
void printBooks()
{
    fstream bookFile;
    bookFile.open("books.file", ios::in);
    if (bookFile)
    {

        cout << "\n------------------------------------\n";
        cout << "Book ID\tBook Title\n";
        cout << "------------------------------------\n";

        //  Print available books
        while (bookFile)
        {
            string bookLine[2];
            bookFile >> bookLine[0];
            bookFile.seekg(1L, ios::cur);
            getline(bookFile, bookLine[1]);
            cout << bookLine[0] << "\t" << bookLine[1] << "\n";
            bookLine[0] = "";
            bookLine[1] = "";
        }

        bookFile.close();
    }
    else
    {
        cout << "Error opening the books file.\n";
    }
}

// Displays ratings and reviews for a specific book based on its ID
void printBookRatingBasedOnBookId()
{
    fstream bookFile;
    bookFile.open("books.file", ios::in);

    fstream ratingFile;
    ratingFile.open("ratings.file", ios::in);

    fstream averageRatingsFile;
    averageRatingsFile.open("average_ratings.file", ios::in);

    cout << "=============================================\n";

    printBooks();

    string userBookId;
    // Prompt user to select a book by ID
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
                bookExist = true; // Book found
                bookTitle = bookName;
                break;
            }
        }

        //  Book ID entered by the user is found
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
                    string numOfRatings;
                    averageRatingsFile >> numOfRatings;
                    string averageRating;
                    averageRatingsFile >> averageRating;
                    string goodreadsRating;
                    averageRatingsFile >> goodreadsRating;

                    if (bookId == averageRatingsBookId)
                    {
                        cout << "Number of Ratings: " << numOfRatings << "\n";
                        cout << "Average Ratings: " << averageRating << "\n";
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

                //  Print out username, rating and comments based on the Book ID
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
            cout << "Please try again.\n";
        }
        cout << "\n\n";
    }
    ratingFile.close();
    bookFile.close();
}

// Displays all reviews written by a specific username
void printBookRatingBasedOnUsername()
{
    fstream ratingFile;
    ratingFile.open("ratings.file", ios::in);

    cout << "=============================================\n";

    string userEnteredUsername;

    //  Prompt user to enter the others username
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
                userNameExist = true; // Username found
                break;
            }
        }

        //  Username entered by the user is found
        if (userNameExist == true)
        {
            cout << "\n+-------------------------------------------+\n";
            cout << "|                Book Reviews               |\n";
            cout << "+-------------------------------------------+\n";
            cout << "Reviews written by [" << userEnteredUsername << "]\n\n";

            if (ratingFile)
            {
                ratingFile.seekg(0L, ios::beg);
                string text = "";
                int reviewCount = 0;

                cout << "------------------------------------------------------\n";
                cout << "Book ID" << "\t" << "Rating" << "\t" << "Comments\n";
                cout << "------------------------------------------------------\n";

                //  Print out book ID, rating and comments based on reviews written by the user entered username
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
        ratingFile.close();
    }
    else
    {
        cout << "Error opening the ratings file.\n";
    }
    cout << "\n\n";
}

// Display menu and input validation
int printMenu()
{
    int choice;
    cout << "=============================================\n";
    cout << "             Books Rating System\n";
    cout << "=============================================\n";
    cout << "1 - Read all books ratings\n";
    cout << "2 - Read reviews based on book's ID\n";
    cout << "3 - Read reviews based on reviewer's username\n";
    cout << "4 - Add new review\n";
    cout << "5 - Add new book\n";
    cout << "0 - Quit the program\n\n";
    cout << "Please enter your choice [0-5]: ";
    cin >> choice;

    //  Choice must be [0 - 5].
    while (choice < 0 || choice > 5)
    {
        cout << "\nInvalid choice.\n";
        cout << "Please try again.\n\n";
        cout << "=============================================\n";
        cout << "             Books Rating System\n";
        cout << "=============================================\n";
        cout << "1 - Read all books ratings\n";
        cout << "2 - Read reviews based on book's ID\n";
        cout << "3 - Read reviews based on reviewer's username\n";
        cout << "4 - Add new review\n";
        cout << "5 - Add new book\n";
        cout << "0 - Quit the program\n\n";
        cout << "Please enter your choice [0-5]: ";
        cin >> choice;
    }

    return choice;
}