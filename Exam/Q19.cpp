#include <iostream>
using namespace std;

void swap(int *&, int *&);
void swapv2(int *, int *);

int main()
{

    int num1 = 1;
    int *ptr1 = &num1;
    int num2 = 2;
    int *ptr2 = &num2;
    cout << *ptr1 << " " << *ptr2 << endl;
    cout << ptr1 << " " << ptr2 << endl;

    swap(ptr1, ptr2);

    cout << "\n"
         << *ptr1 << " " << *ptr2 << endl;
    cout << ptr1 << " " << ptr2 << endl;

    return 0;
}

void swap(int *&ptr1, int *&ptr2)
{
    int *buf = ptr1;
    ptr1 = ptr2;
    ptr2 = buf;
}

void swapv2(int *ptr1, int *ptr2)
{
    int buf = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = buf;
}