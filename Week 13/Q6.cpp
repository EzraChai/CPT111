#include <iostream>
#include <iomanip>

int main()
{
    int settings[3][5] = {
        {12, 24, 32, 21, 42},
        {14, 67, 87, 65, 90},
        {19, 1, 24, 12, 8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << std::setw(4) << settings[i][j] << " ";
        }
        std::cout << std::endl;
    }
}