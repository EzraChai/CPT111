#include <iostream>
using namespace std;
void printArray(const int *const ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    const int *const ptr = arr;
    printArray(ptr, 5);
    return 0;
}