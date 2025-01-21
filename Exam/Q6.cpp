#include <iostream>

int unique_array(int[], int);

int main()
{

    const int size = 7;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7};

    int unique = unique_array(arr, size);
    std::cout << unique;

    return 0;
}

int unique_array(int arr[], int size)
{
    int uniqueNum = 0;
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            uniqueNum++;
        }
    }
    return uniqueNum;
}