/*
Develop a C++ program that lets the user enter the total rainfall for each of 12 months into an array of
doubles. The program should calculate and display the total rainfall for the year (1st function), the
average monthly rainfall (2nd function), and the months with the highest (3rd function) and lowest
amounts (4th function). The program must have input validation and does not let the user enter negative
numbers.
*/
#include <iostream>

using namespace std;
const int SIZE = 12;

void displayTotalRainfall(double[SIZE]);
void displayAverageMonthlyRainfall(double[SIZE]);
void displayHighestRainfall(double[SIZE]);
void displayLowestRainfall(double[SIZE]);

int main()
{
    double rainfall[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Rainfall for month " << i + 1 << ": ";
        cin >> rainfall[i];
        while (rainfall[i] < 0)
        {
            cout << "Please try again. Rainfall should be in positive number.";
            cout << "Rainfall for month " << i + 1 << ": ";
            cin >> rainfall[i];
        }
    }

    cout << "\n";
    displayTotalRainfall(rainfall);
    displayAverageMonthlyRainfall(rainfall);
    displayHighestRainfall(rainfall);
    displayLowestRainfall(rainfall);

    return 0;
}

void displayTotalRainfall(double rainfall[SIZE])
{
    double sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += rainfall[i];
    }
    cout << "Total rainfall for the year: " << sum << endl;
}

void displayAverageMonthlyRainfall(double rainfall[SIZE])
{
    double sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += rainfall[i];
    }
    cout << "Average rainfall for the year: " << sum / 12 << endl;
}

void displayHighestRainfall(double rainfall[SIZE])
{
    double highest = rainfall[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (rainfall[i] > highest)
        {
            highest = rainfall[i];
        }
    }
    cout << "Highest rainfall for the year: " << highest << endl;
}
void displayLowestRainfall(double rainfall[SIZE])
{
    double lowest = rainfall[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (rainfall[i] < lowest)
        {
            lowest = rainfall[i];
        }
    }
    cout << "Lowest rainfall for the year: " << lowest << endl;
}