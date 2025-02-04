#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    int count = 0;
    int sum = 0;
    int max = 0;
    int min = 100000;
    double sumSquaredDifferences = 0.0;

    double avg = 0;
    double std = 0;

    cin >> number;
    while (number != -99)
    {
        if (number < 0)
        {
            cout << "Number must be positive";
            cin >> number;
            continue;
        }

        sum += number;
        count++;
        if (max < number)
        {
            max = number;
        }
        if (min > number)
        {
            min = number;
        }

        sumSquaredDifferences += pow(number - static_cast<double>(sum) / count, 2);

        cin >> number;
    }

    avg = static_cast<double>(sum) / count;
    std = sqrt(sumSquaredDifferences) / count;

    cout << "MAX: " << max << " MIN: " << min << endl;
    cout << "AVG: " << avg << " STD: " << std << endl;

    return 0;
}