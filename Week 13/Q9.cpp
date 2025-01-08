#include <iostream>

int main()
{

    float values[10][20];
    float total = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            total += values[i][j];
        }
    }

    return 0;
}