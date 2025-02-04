#include <iostream>
#include <iomanip>
using namespace std;

double average_temperature(double[7]);

int main()
{

    double penangTemp[7] = {25.2, 30.4, 28.7, 31.0, 24.8, 25.7, 26.7};
    double perakTemp[7] = {26.3, 31.3, 28.4, 30.2, 27.6, 26.0, 27.6};
    double kedahTemp[7] = {28.4, 32.1, 28.4, 30.9, 25.4, 27.2, 28.7};

    double aveTemp[3] = {0};
    aveTemp[0] = average_temperature(penangTemp);
    aveTemp[1] = average_temperature(perakTemp);
    aveTemp[2] = average_temperature(kedahTemp);

    for (int i = 0; i < 3; i++)
    {
        cout << fixed << showpoint << setprecision(2) << aveTemp[i] << "C ";
    }

    return 0;
}

double average_temperature(double arr[7])
{
    double sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += *(arr + i);
    }
    return sum / 7;
}