/*
. Write a C++ function that takes an integer n and an integer array of size n as parameters. The function
should:
A. Dynamically allocate memory for a new array of size n.
B. Modify the new array such that:
a. If the element in the original array is even, set the corresponding element in the new
array to its double.
b. If the element in the original array is odd, set the corresponding element in the new
array to its triple.
C. Return a pointer to the new array.
D. Check your program in a driver function
*/
#include <iostream>
using namespace std;

int *modify(int, int[]);

int main()
{

    int n = 10;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    arr = modify(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}

int *modify(int n, int arr[])
{
    int *newArr = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            newArr[i] = arr[i] * 2;
        }
        else
        {
            newArr[i] = arr[i] * 3;
        }
    }
    return newArr;
}