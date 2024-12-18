#include <iostream>
using namespace std;

/*
isPrime Function - A prime number is a number that is only evenly divisible by itself and 1. For
example, the number 5 is prime because it can only be evenly divided by 1 and 5. The number 6,
however, is not prime because it can be divided evenly by 1, 2, 3, and 6.
Describe a function name isPrime, which takes an integer as an argument and returns true if the
argument is a prime number, or false otherwise. Demonstrate the function in a complete program.
*/

bool isPrime(int);

int main()
{

    int num = 11;
    bool isPrimeFlag = isPrime(num);
    if (isPrimeFlag)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}