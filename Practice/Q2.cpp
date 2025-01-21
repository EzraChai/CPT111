#include <iostream>

void getValue(int *, int);

int main()
{

    int secondVal = 23;
    int value = 22;
    int *ptr = new int;

    *ptr = 24;

    int *arrPtr = new int[10];
    getValue(arrPtr, 10);

    for (int i = 0; i < 10; i++)
    {
        std::cout << *(arrPtr + i) << " ";
    }
    std::cout << "\n";

    std::cout << *ptr;

    delete ptr;
    delete[] arrPtr;
    arrPtr = nullptr;
    return 0;
}

void getValue(int *arrPtr, int size)
{
    for (int i = 0; i < size; i++)
    {

        std::cout << "Num " << (i + 1) << ": ";
        std::cin >> *(arrPtr + i);
    }
}