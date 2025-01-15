/*
The following function uses reference variables as parameters. Modify the function so that it uses pointers
instead of reference variable, then demonstrate the function in a complete program.

// The doSomething function
int doSomething(int &x, int &y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}
*/

#include <iostream>

int doSomething(int *, int *);

int main()
{

    int x = 10;
    int y = 20;

    int ans = doSomething(&x, &y);
    std::cout << ans << std::endl;
    return 0;
}

int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}