#include <iostream>
using namespace std;

int main()
{
    string inputWord, reverseWord;

    cout << "Enter a word: ";
    cin >> inputWord;

    for (int i = inputWord.length() - 1; i >= 0; i--)
    {
        reverseWord += inputWord[i];
    }

    if (reverseWord == inputWord)
    {
        cout << inputWord << " is a palindrome." << endl;
    }
    else
    {
        cout << inputWord << " is not a palindrome." << endl;
    }
}