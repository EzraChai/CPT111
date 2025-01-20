#include <iostream>

void transpose_matrix(int[][3], int, int);

int main()
{

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    transpose_matrix(matrix, 2, 3);

    return 0;
}

void transpose_matrix(int matrix[][3], int n, int m)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << "\n";
    }
}