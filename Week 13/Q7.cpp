#include <iostream>

using namespace std;

void displayArray7(int[][7], int);

int main()
{
    int size = 5;
    int hours[size][7] = {0};
    displayArray7(hours, size);
    return 0;
}

void displayArray7(int arr[][7], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}