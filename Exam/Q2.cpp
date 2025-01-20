#include <iostream>

int find_max_product(int[], int);

int main()
{

    int arr[] = {-7, -5, 3, -4, 3, 2};

    int max = find_max_product(arr, 6);

    std::cout << max;

    return 0;
}

int find_max_product(int arr[], int size)
{
    if (size < 2)
    {
        return arr[0];
    }
    
    int maxProd = arr[0] * arr[1];
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i] * arr[j] > maxProd)
                {
                    maxProd = arr[i] * arr[j];
                }
            }
        }
    }
    return maxProd;
}