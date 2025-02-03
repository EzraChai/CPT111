#include <iostream>
using namespace std;

int main()
{

    int x = 1;
    int i = 0;

    for (int i = 0, j = 10; i < 10, j > 5; i++, j--)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else if (j == 4)
        {
            break;
        }
        else
            cout << "Current i is " << i << " and j is " << j << endl;
    }
    int age = 20;
}