/*
Define a function definition that accepts three arguments: an array, the size of the array, and a number
n. Assume that the array contains integers. The function should display all of the numbers in the array
that are greater than the number n. Test your function in a program
*/
#include <iostream>
using namespace std;

void displayNum(int[], int, int);

int main()
{
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    displayNum(arr, SIZE, 3);
    return 0;
}

void displayNum(int arr[], int SIZE, int n)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > n)
        {
            cout << arr[i] << " ";
        }
    }
}
