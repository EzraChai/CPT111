#include <iostream>

void sort_descending(int[], int);

int main()
{

    const int size = 5;
    int arr[] = {1, 2, 5, -2, 6};

    sort_descending(arr, size);

    return 0;
}

void sort_descending(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}