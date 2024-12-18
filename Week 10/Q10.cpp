#include <iostream>
using namespace std;

/*
Days Out - Write a program that calculates the average number of days a company’s employees are
absent. The program should have the following functions:
• A function called by main that asks the user for the number of employees in the company. This
value should be returned as an int. (The function accepts no arguments.)
• A function called by main that accepts one argument: the number of employees in the company.
The function should ask the user to enter the number of days each employee missed during the past
year. The total of these days should be returned as an int.
• A function called by main that takes two arguments: the number of employees in the company and
the total number of days absent for all employees during the year. The function should return, as a
double, the average number of days absent. (This function does not perform screen output and
does not ask the user for input.)
Input Validation: Do not accept a number less than 1 for the number of employees. Do not accept a
negative number for the days any employee missed.
*/
int numOfEmployees();
int numOfDaysMissed(int);
double averageNumOfDaysAbsent(int, int);

int main()
{
    int numEmployees = numOfEmployees();
    int numDaysMissed = numOfDaysMissed(numEmployees);
    double avgDayMissed = averageNumOfDaysAbsent(numEmployees, numDaysMissed);
    cout << "Average Day Missed: " << avgDayMissed << endl;
    return 0;
}

int numOfEmployees()
{
    int num;
    cout << "Number of employees: ";
    cin >> num;

    while (num < 1)
    {
        cout << "Employees cannot be less than 1\n";
        cout << "Number of employees: ";
        cin >> num;
    }
    cout << endl;
    return num;
}

int numOfDaysMissed(int numOfEmployees)
{
    int totalSum = 0;
    cout << "Number of days missed\n";
    for (int i = 1; i <= numOfEmployees; i++)
    {
        int num;
        cout << "Employee " << i << ": ";
        cin >> num;
        while (num < 0)
        {
            cout << "Day missed cannot be a negative number.\n";
            cout << "Employee " << i << ": ";
            cin >> num;
        }
        totalSum += num;
    }

    return totalSum;
}

double averageNumOfDaysAbsent(int numOfEmployees, int numOfDaysMissed)
{
    return numOfDaysMissed / static_cast<double>(numOfEmployees);
}