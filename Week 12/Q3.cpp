/*
Develop a C++ program to find Largest and Second Largest Even Numbers in an array and display them
(Only use range-based for loop)
*/

#include <iostream>
using namespace std;

int main()
{

    const int SIZE = 10;
    int arr[SIZE];

    int largestEvenNumber = -999999;
    int secondLargestEvenNumber = -999999;

    for (int &val : arr)
    {
        cin >> val;
    }

    cout << "\n\n";

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
    if (largestEvenNumber == -999999)
    {
        cout << "No even numbers found";
    }
    else if (secondLargestEvenNumber == -999999)
    {
        cout << "Largest Even Number: " << largestEvenNumber << "\n";
        cout << "Second Largest Even Number: Not found" << endl;
    }
    else
    {
        cout << "Largest Even Number: " << largestEvenNumber << endl;
        cout << "Second Largest Even Number: " << secondLargestEvenNumber << endl;
    }
}