/*
 myMatrix is a two-dimensional array with 10 rows and 10 columns. Describe C++ code to find the
sum of the elements of its main diagonal from top-left to bottom-right
*/

#include <iostream>
using namespace std;

int main()
{

    int rows = 10;
    int cols = 10;
    int myMatrix[rows][cols] = {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3, 4, 5, 6, 7},
        {4, 5, 6, 7, 8},
        {5, 6, 7, 8, 9}};

    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        sum += myMatrix[i][i];
    }

    cout << "Sum: " << sum << endl;

    return 0;
}