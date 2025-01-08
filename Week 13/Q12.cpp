/*
Write a C++ function that takes a 2-D array and its dimensions as arguments and finds the maximum
element in each column. Print the results in the main function.
 */

#include <iostream>

using namespace std;

int *findMax(int[][5], int, int);

int main()
{

    const int rows = 5;
    const int cols = 5;
    int arr[rows][cols] = {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3, 4, 5, 6, 7},
        {4, 5, 6, 7, 8},
        {5, 65, 54, 23, 23}};
    int *ptr = findMax(arr, rows, cols);
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + 4) << endl;
}

int *findMax(int arr[][5], int rows, int cols)
{
    int *arrPtr = new int[cols];

    for (int i = 0; i < cols; i++)
    {
        int max = arr[0][i];
        for (int j = 1; j < rows; j++)
        {
            if (arr[j][i] > max)
            {
                max = arr[j][i];
                arrPtr[i] = max;
            }
        }
    }

    return arrPtr;
}