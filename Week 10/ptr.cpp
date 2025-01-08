#include <iostream>

int main()
{
    double *ptr = nullptr;
    double reading[4];

    ptr = reading;

    for (int i = 0; i < 4; i++)
    {
        std::cin >> *(ptr + i);
    }
    for (int i = 0; i < 4; i++)
    {
        std::cout << *(ptr) << " ";
        ptr++;
    }
    std::cout << "\n\n";
    for (int i = 0; i < 4; i++)
    {
        ptr--;
        std::cout << *(ptr) << " ";
    }
    std::cout << "\n";

    int size = 5;
    short numbers[size];

    for (int i = 0; i < size; i++)
    {
        std::cin >> *(numbers + i);
    }

    for (int j = 0; j < size; j++)
    {
        std::cout << *(numbers + j) << " ";
    }

    std::cout << "\n"
              << *numbers << std::endl;
    std::cout << *(numbers + 1) << std::endl;
    std::cout << *(numbers + 2) << std::endl;

    return 0;
}