#include <iostream>
using namespace std;

int main()
{
    int testScore;
    cout << "Enter your test score: ";
    cin >> testScore;

    switch (testScore)
    {
    case 90 ... 100:
        cout << "That is A+ grade.\n";
        break;
    case 80 ... 89:
        cout << "That is A grade.\n";
    case 70 ... 79:
        cout << "That is B+ grade.\n";
        break;
    default:
        cout << "Out of range.\n";
    }

    return 0;
}