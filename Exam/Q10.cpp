#include <iostream>
using namespace std;

const int COLS = 6;

void print_Transpose_Array2D(int[][COLS]);
int SumArray2D(int[][COLS]);

int main()
{

    int Array2D[][COLS] = {{34, 67, 54, 98, 20, 11}, {10, 20, 20, 40, 60, 80}, {15, 75, 50, 85, 64, 36}};

    print_Transpose_Array2D(Array2D);
    int totalSum = SumArray2D(Array2D);
    cout << totalSum;
    return 0;
}

void print_Transpose_Array2D(int arr[][COLS])
{
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int SumArray2D(int arr[][COLS])
{
    int totalSum = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < COLS; j++)
        {
            sum += arr[i][j];
        }
        totalSum += 2 * sum;
    }
    return totalSum;
}