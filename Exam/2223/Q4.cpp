#include <iostream>
using namespace std;

void square(int *);

int main()
{

    int num;
    cin >> num;
    square(&num);
    cout << num << endl;

    return 0;
}

void square(int *num)
{
    *num *= *num;
}