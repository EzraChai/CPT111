#include <iostream>
using namespace std;

void square(int *);

int main()
{
    int num1;
    cin >> num1;

    square(&num1);
    cout << num1;
    return 0;
}

void square(int *num)
{
    *num *= *num;
}