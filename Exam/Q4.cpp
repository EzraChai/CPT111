#include <iostream>

void rotate_array_left(int[], int, int);

int main()
{

    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int k = 2;

    rotate_array_left(arr, size, k);
    return 0;
}

void rotate_array_left(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[(i + k) % n] << " ";
}