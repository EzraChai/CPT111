/*
 Write a C++ function that takes a 2-D array and its dimensions as arguments and calculates the sum
of the border elements of the array. Border elements include the elements in the first row, last row,
first column, and last column. Check the correctness of your function in a driver function.
*/

#include <iostream>

using namespace std;

int sumBorderElements(int[][5], int, int);

int main()
{
    const int rows = 5;
    const int cols = 5;

    int myMatrix[rows][cols] = {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3, 4, 5, 6, 7},
        {4, 5, 6, 7, 8},
        {5, 6, 7, 8, 9}};
    int sum = sumBorderElements(myMatrix, rows, cols);

    cout << sum << endl;
    return 0;
}

int sumBorderElements(int arr[][5], int rows, int cols)
{
    int sum = 0;

    for (int i = 0; i < cols; i++)
    {
        sum += arr[0][i];
        sum += arr[rows - 1][i];
    }

    for (int i = 1; i < rows - 1; i++)
    {
        sum += arr[i][0];
        sum += arr[i][cols - 1];
    }
    return sum;
}