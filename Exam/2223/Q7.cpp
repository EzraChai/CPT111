#include <iostream>
using namespace std;

int flipNumber(int);
string flipText(string);
void move(int[], int);
void moveReverse(int[], int);
int unique_elements_count(int[], int);

int main()
{
    cout << flipNumber(2025) << endl;
    cout << flipText("2025") << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    move(arr, 2);
    moveReverse(arr, 2);

    int newArr[] = {1, 2, 2, 2, 3, 4, 4, 5};
    int ele = unique_elements_count(newArr, 8);
    cout << "Unique: " << ele << endl;
    return 0;
}

int unique_elements_count(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                isUnique = false;
            }
        }
        if (isUnique)
        {
            count++;
        }
    }
    return count;
}

string
flipText(string text)
{

    string flipped = "";

    for (int i = text.length() - 1; i >= 0; i--)
    {
        flipped += text[i];
    }
    return flipped;
}

void move(int arr[5], int k)
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[(i + k) % 5] << " ";
    }
    cout << endl;
}

void moveReverse(int arr[5], int k)
{
    // 1 2 3 4 5
    // 4 5 1 2 3
    for (int i = 0; i < 5; i++)
    {
        cout << arr[(i + 5 - k) % 5] << " ";
    }
    cout << endl;
}

int flipNumber(int num)
{
    int flipped = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;           // get the last digit
        flipped = flipped * 10 + lastDigit; // append the number
        num /= 10;
    }

    // while (num != 0)
    // {
    //     int lastDigit = num % 10;
    //     flipped = flipped * 10 + lastDigit;
    //     num /= 10;
    // }
    return flipped;
}