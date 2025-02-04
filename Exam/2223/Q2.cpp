#include <iostream>
using namespace std;

void func4()
{
}
void func2()
{
    func4();
}
void func3()
{
    func2();
}
void func1()
{
    func3();
}

int main()
{
    func1();
    func2();
    func3();
    func4();
    return 0;
}