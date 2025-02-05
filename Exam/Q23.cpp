#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int number;
    cin >> number;
    bool isTrue = true;
    int d = 3;

    if (number == 1 || number < 0)
        cout << "You must enter an integer greater that 1";
    else if (number == 2)
        cout << "It is a true number";
    else if (number % 2 == 0)
        cout << "It is not a true number";
    else
    {
        int sqrtNum = static_cast<int>(sqrt(static_cast<double>(number)));

        if ((d <= sqrtNum && number % d == 0) || (d + 2 <= sqrtNum && number % (d + 2) == 0) || (d + 4 <= sqrtNum && number % (d + 4) == 0))
        {
            cout << "It is not a true number.\n";
            isTrue = false;
        }
        if (isTrue)
        {
            cout << "It is a true number";
        }
    }

    return 0;
}