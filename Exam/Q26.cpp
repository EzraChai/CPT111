#include <iostream>
using namespace std;

int main()
{

    int num = 1234567;
    int lastDigit = num % 10;
    int secondLastDigit = (num % 100 - num % 10) / 10;
    int firstThreeDigit = num / 10000;
    int fourfive = (num % 10000 - num % 100) / 100;
    cout << firstThreeDigit << fourfive << secondLastDigit << lastDigit;

    return 0;
}