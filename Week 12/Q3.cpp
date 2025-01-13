/*
Develop a C++ program to find Largest and Second Largest Even Numbers in an array and display them
(Only use range-based for loop)
*/

#include <iostream>
using namespace std;

int main()
{

    const int SIZE = 5;
    int arr[SIZE];

    int largestEvenNumber = -999999;
    int secondLargestEvenNumber = -999999;

    for (int &val : arr)
    {
        cin >> val;
    }
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << "\n";

    for (int val : arr)
    {
        if (val % 2 == 0)
        {
            if (val > largestEvenNumber)
            {
                secondLargestEvenNumber = largestEvenNumber;
                largestEvenNumber = val;
            }
            else if (val > secondLargestEvenNumber)
            {
                secondLargestEvenNumber = val;
            }
        }
    }
    cout << largestEvenNumber << " " << secondLargestEvenNumber;
}