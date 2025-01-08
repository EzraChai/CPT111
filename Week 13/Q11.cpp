/*
The Lo Shu Magic Square is a grid with 3 rows and 3 columns shown in below. The Lo Shu Magic
Square has the following properties:
• The grid contains the numbers 1 through 9 exactly.
• The sum of each row, each column, and each diagonal all add up to the same number.
In a program you can simulate a magic square using a two-dimensional array. Define a function
definition that accepts a two-dimensional array as an argument and determines whether the array is a
Lo Shu Magic Square. Test the function in a program.
*/

#include <iostream>

using namespace std;

bool findLoShuMagicSquare(int[3][3]);

int main()
{
    int magicSquare[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};

    bool isLoShuMagicSquare = findLoShuMagicSquare(magicSquare);
    cout << isLoShuMagicSquare;
    return 0;
}

bool findLoShuMagicSquare(int arr[3][3])
{
    //  Check whether elements are between 1 and 9
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < 1 || arr[i][j] > 9)
            {
                return false;
            }
        }
    }

    int sum = arr[0][0] + arr[0][1] + arr[0][2];
    //  Check Rows
    for (int i = 1; i < 3; i++)
    {
        if (arr[i][0] + arr[i][1] + arr[i][2] != sum)
        {
            return false;
        }
    }

    //  Check Columns
    for (int i = 0; i < 3; i++)
    {
        if (arr[0][i] + arr[1][i] + arr[2][i] != sum)
        {
            return false;
        }
    }

    //  Check Diagonals
    if (arr[0][0] + arr[1][1] + arr[2][2] != sum)
    {
        return false;
    }
    return true;
}