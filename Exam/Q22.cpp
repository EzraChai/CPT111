#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int dif = num2 - num1;
    for (int i = 0; i < 5; i++)
    {
        cout << num1 + (i * dif) << " ";
    }
    return 0;
}