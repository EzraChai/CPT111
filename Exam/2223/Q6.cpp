#include <iostream>
using namespace std;

int sum(int, int);
int sum(int, int, int, int);
double sum(double, double);
double sum(double, double, double, double);

int main()
{
    int a = 4, b = 3, c = 4, d = 7;
    double e = 3.2, f = 3.2, g = 4.3, h = 1.2;

    // Summing up two integers
    cout << sum(a, c) << endl;
    // Summing up two doubles
    cout << sum(e, g) << endl;
    // Summing up four integers
    cout << sum(a, b, a, b) << endl;
    // Summing up four doubles
    cout << sum(e, f, g, h) << endl;
}

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}
double sum(double a, double b)
{
    return a + b;
}
double sum(double a, double b, double c, double d)
{
    return a + b + c + d;
}