#include <iostream>

void getNumber(int *);
void doubleValue(int *);

int main()
{

    int number;
    getNumber(&number);
    doubleValue(&number);

    std::cout << "Value: " << number;
    return 0;
}

void getNumber(int *num)
{
    std::cout << "Enter a number: ";
    std::cin >> *num;
}

void doubleValue(int *num)
{
    *num *= 2;
}