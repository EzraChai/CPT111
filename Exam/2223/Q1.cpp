#include <iostream>
using namespace std;

/*
0 - 24
25 - 49
50 - 74
75 - 99
100 - 124
125 - 149
150 - 174
175 - 200

0 3 8 15 24

**************************************************************************************

******

*/

int main()
{
    // Q1
    // a)
    // i)
    // for (int j = 0; j < 8; j++)
    // {
    //     cout << j * 25 << " - ";
    //     if (j != 7)
    //         cout << (j + 1) * 25 - 1 << endl;
    //     else
    //         cout << (j + 1) * 25 << endl;
    // }

    // ii)
    // int count = 1;
    // while (count++ <= 5)
    //     cout << count * (count - 2) << " ";
    // cout << endl;

    // iii)
    // for (int i = 1; i <= 1; i--)
    //     cout << "*";
    // cout << endl;

    // iv)
    // for (int i = 0; i <= 5; i++)
    //     cout << "*";
    // cout << endl;

    string word = "worse", reveredWord;
    for (int i = word.length() - 1; i >= 0; i--)
    {
        reveredWord += word[i];
    }
    cout << reveredWord << " " << word;

    return 0;
}