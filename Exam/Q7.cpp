#include <iostream>

int sum(int = 20);

int a = 10;

int main()
{
    sum();
    std::cout << a;
    return 0;
}

int sum(int b)
{
    a = 12;
    std::cout << b << std::endl;
    return 0;
}