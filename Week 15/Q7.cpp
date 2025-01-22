/*
7. What is the output of the following program?
#include <iostream>
using namespace std;
int* createArray(int size) {
    int* arr = new int[size];
    // 0 5 10 15 20
    for (int i = 0; i < size; i++) {
        arr[i] = i * 5;
    }
    return arr;
}
int main() {
    int size = 4;
    int* arr = createArray(size);
    //  0 5 10 15 20
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
*/

#include <iostream>
using namespace std;
int *createArray(int size)
{
    int *arr = new int[size];
    // 0 5 10 15
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 5;
    }
    return arr;
}
int main()
{
    int size = 4;
    int *arr = createArray(size);
    //  0 5 10 15
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}