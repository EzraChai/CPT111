#include <iostream>
using namespace std;

void displayStars(int);

int main()
{
    displayStars(10);
    cout << endl;
    displayStars(3);
    displayStars(3);
    displayStars(3);
    cout << endl;
    displayStars(6);
    displayStars(6);

    return 0;
}

void displayStars(int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "*";
    }
    cout << endl;
}