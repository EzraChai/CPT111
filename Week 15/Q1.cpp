/*
Write a C++ program to dynamically allocate memory for an integer array of size n, where n is input by
the user.
A. Populate the array with the squares of integers starting from 1 up to n.
B. Create a user-defined function named resizeArray that resizes the array to double its original size.
C. Populate the extended part of the array with the squares of integers starting from n+1 up to 2n.
D. Print the entire array after resizing and free the allocated memory.
*/
#include <iostream>

using namespace std;

int *resizeArray(int *, int n);

int main()
{
    int n = 10;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        *(arr + i) = (i + 1) * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    arr = resizeArray(arr, n);

    for (int i = 0; i < 2 * n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    for (int i = n; i < 2 * n; i++)
    {
        arr[i] = (i + 1) * (i + 1);
    }

    for (int i = 0; i < 2 * n; i++)
    {
        cout << *(arr + i) << " ";
    }

    delete[] arr;
    arr = nullptr;
}

int *resizeArray(int *arr, int n)
{
    int *newArr = new int[2 * n];
    for (int i = 0; i < n; i++)
    {
        newArr[i] = arr[i];
    }

    return newArr;
}
