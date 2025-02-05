#include <iostream>
using namespace std;

/*
1. Write a C++ program to dynamically allocate memory for an integer array of size n, where n is input by
the user.
A. Populate the array with the squares of integers starting from 1 up to n.
B. Create a user-defined function named resizeArray that resizes the array to double its original size.
C. Populate the extended part of the array with the squares of integers starting from n+1 up to 2n.
D. Print the entire array after resizing and free the allocated memory.
*/

int *resizeArray(int *, int);
int reverseNumber(int);

int main()
{
    int n;
    cin >> n;
    int *arrPtr = new int[n];

    for (int i = 0; i < n; i++)
    {
        *(arrPtr + i) = (i + 1) * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << *(arrPtr + i) << " ";
    }
    cout << endl;

    arrPtr = resizeArray(arrPtr, n);

    for (int i = 0; i < 2 * n; i++)
    {
        cout << *(arrPtr + i) << " ";
    }
    cout << endl;

    int num = 123;
    int reverseNum = reverseNumber(num);
    cout << "The reverse of number: " << num << " is " << reverseNum << endl;

    delete[] arrPtr;
    arrPtr = nullptr;
    return 0;
}

int *resizeArray(int *arrPtr, int n)
{
    int *newArrPtr = new int[n * 2];

    for (int i = 0; i < n; i++)
    {
        *(newArrPtr + i) = *(arrPtr + i);
    }

    for (int i = n; i <= 2 * n; i++)
    {
        *(newArrPtr + i) = (i + 1) * (i + 1);
    }

    return newArrPtr;
}

int reverseNumber(int num)
{
    int reverse = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num /= 10;
    }

    return reverse;
}