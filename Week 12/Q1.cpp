#include <iostream>

using namespace std;

double avgArray(int *arr, int size);

int main()
{
    const int SIZE = 10;
    int userNums[SIZE];
    cout << "Enter 10 numbers: ";
    for (int count = 0; count < SIZE; count++)
    {
        cout << "#" << (count + 1) << " ";
        cin >> userNums[count];
    }
    cout << "The average of those numbers is ";
    cout << avgArray(userNums, SIZE) << endl; // function call
    return 0;
}

double avgArray(int *arr, int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += *(arr + i);
    }
    return static_cast<double>(total) / size;
}