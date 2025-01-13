/*
Develop a C++ program that lets a maker of chips and salsa keep track of sales for five different types of
salsa: mild, medium, sweet, hot, and zesty. The program should use two parallel 5-element arrays: an
array of strings that holds the five salsa names and an array of integers that holds the number of jars sold
during the past month for each salsa type. The salsa names should be stored using an initialization list at
the time the name array is created. The program should prompt the user to enter the number of jars
sold for each type. Once this sales data has been entered, the program should produce a report that
displays sales for each salsa type, total sales, and the names of the highest selling and lowest selling
product.
*/

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;

    string salsa[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    int salsaSold[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << salsa[i] << endl;
        cout << "Number of jars sold: ";
        cin >> salsaSold[i];
    }

    cout << "\n\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Total Sales for " << salsa[i] << ": " << salsaSold[i] << endl;
    }
    cout << "\n\n";

    int low = salsaSold[0];
    int lowIndex = 0;
    int high = salsaSold[0];
    int highIndex = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (salsaSold[i] < low)
        {
            low = salsaSold[i];
            lowIndex = i;
        }
        if (salsaSold[i] > high)
        {
            high = salsaSold[i];
            highIndex = i;
        }
    }

    cout << "Highest sales: " << high << "(" << salsa[highIndex] << ")" << endl;
    cout << "Lowest sales: " << low << "(" << salsa[lowIndex] << ")" << endl;
    return 0;
}