/*
6. What is the output of the following C++ program?
#include <iostream>
using namespace std;
int main() {
    int size = 5;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        *(arr + i) = i * 2;
    }
    // 0 2 4 6 8
    *(arr + 2) = *(arr + 0) + *(arr + 1);
    // 0 2 2 6 8
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    // 0 2 2 6 8
    delete[] arr;
    return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int *arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        *(arr + i) = i * 2;
    }
    // 0 2 4 6 8
    *(arr + 2) = *(arr + 0) + *(arr + 1);
    // 0 2 2 6 8
    for (int i = 0; i < size; ++i)
    {
        cout << *(arr + i) << " ";
    }
    // 0 2 2 6 8
    delete[] arr;
    return 0;
}