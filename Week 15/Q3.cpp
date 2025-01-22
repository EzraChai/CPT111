/*
3. Write a C++ function that swaps the contents of two integer arrays using pointer by reference.
A. The function should take two arrays and their size as parameters by reference.
B. The function should swap the elements of the two arrays such that the first array contains the elements
of the second array and vice versa.
C. Print the arrays before and after the swap in the main function.
D. Test your function in a program.
*/

#include <iostream>
using namespace std;

void swap(int *&, int *&, int);

int main()
{
    int n = 10;
    int *arr1 = new int[n];
    int *arr2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr1[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = n - i;
    }

    cout << "ARR 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nARR 2: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\n";

    swap(arr1, arr2, n);

    cout << "\n\nARR 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nARR 2: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    delete[] arr1;
    delete[] arr2;
    arr1 = nullptr;
    arr2 = nullptr;
    return 0;
}

void swap(int *&arr1Ptr, int *&arr2Ptr, int n)
{
    int *buffer = new int[n];
    buffer = arr2Ptr;
    arr2Ptr = arr1Ptr;
    arr1Ptr = buffer;
}