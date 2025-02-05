#include <iostream>
using namespace std;

int main()
{

    int input;

    int var[10];
    int i = 0;

    do
    {
        cout << "Please enter a value: ";
        cin >> input;

        if (input % 3 == 0 || input % 5 == 0 || input & 7 == 0)
        {
            continue;
        }
        else
        {
            var[i] = input;
            i++;
        }

    } while (input != 0 && input != 99 && i != 10);

    for (int j = 0; j <= 10 && var[j] != 0; j++)
    {
        cout << var[j] << endl;
    }

    return 0;
}