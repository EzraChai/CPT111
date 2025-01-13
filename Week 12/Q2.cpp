/*
Develop a C++ program that lets the user enter 10 values into an array. The program should then display
the largest and smallest values stored in the array. Please process the array content using both normal
for loop and range-based for loop.
 */
#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    cout << "PLease enter 10 numbers: \n";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    int smallestVal = arr[0];
    int largestVal = arr[0];
    for (int val : arr)
    {
        if (smallestVal > val)
        {
            smallestVal = val;
        }
        if (largestVal < val)
        {
            largestVal = val;
        }
    }
    cout << "Smallest: " << smallestVal << endl;
    cout << "Largest: " << largestVal << endl;

    return 0;
}