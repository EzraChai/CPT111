/*
In a C++ program, given an array arr of integers of size N, the task is to find the count of positive numbers and
negative numbers in the array. Define two function definitions countPositiveNum and
countNegativeNumb, each accept two arguments: an array and the size of the array and each return the
number of positive and negative values respectively. You need to define another function that prints the content
of the array too. Test all your function in a driver function.
*/

#include <iostream>
using namespace std;

int countPositiveNum(int[], int);
int countNegativeNumb(int[], int);
void printArr(int[], int);

int main()
{
    const int SIZE = 5;
    int arr[5] = {1, 2, 3, 5, 6};
    int posNum = countPositiveNum(arr, SIZE);
    int negNum = countNegativeNumb(arr, SIZE);
    printArr(arr, SIZE);
    cout << "\n\n";
    cout << "Positive number count: " << posNum << endl;
    cout << "Negative number count: " << negNum << endl;
    return 0;
}

int countPositiveNum(int arr[], int SIZE)
{
    int posNum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0)
        {
            posNum++;
        }
    }
    return posNum;
}
int countNegativeNumb(int arr[], int SIZE)
{
    int negNum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            negNum++;
        }
    }
    return negNum;
}

void printArr(int arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}