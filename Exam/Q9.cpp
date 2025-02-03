#include <iostream>
using namespace std;

void swap(int *, int *);
void swapReference(int &, int &);
void highestTemp(int[][4], int, int);

int main()
{
    int x, y, z;
    x = y = 5;
    x = (y = (z = 5));
    x = 5 + 2 * 10 % 11 + -5 * 7;
    cout << x << " " << y << " " << z;
    cout << endl;
    cout << !('A' > 'Z') << endl;

    int arr[] = {5, 10, 15, 20};
    int *ptr = arr;
    ptr++;
    cout << *ptr << endl;
    for (auto elem : arr)
    {
        elem += 5;
    }
    for (auto elem : arr)
    {
        cout << elem << " ";
    }

    int num1 = 1;
    int num2 = 2;
    swap(&num1, &num2);
    cout << "\n\nNUM: " << num1 << " NUM2: " << num2 << endl;

    swapReference(num1, num2);
    cout << "NUM: " << num1 << " NUM2: " << num2 << endl;

    const int MAX = 4;
    int temperature[][MAX] =
        {{2, 3, 1, 7}, {3, 88, 6, 11}, {77, 33, 99, 1}, {5, 6, 7, 8}};

    highestTemp(temperature, 4, 4);

    string gred;
    int diff;

    int marks;
    cin >> marks;

    switch (marks)
    {
    case 80 ... 100:
        gred = "A";
        diff = 80 - marks;
        break;
    case 70 ... 79:
        gred = "A-";
        diff = 80 - marks;
        break;
    case 64 ... 69:
        gred = "B+";
        diff = 70 - marks;
        break;
    case 58 ... 63:
        gred = "B";
        diff = 64 - marks;
        break;
    default:
        gred = "Error";
        break;
    }

    cout << "The marks's grade is: " << gred << endl;

    if (diff <= 0)
    {
        cout << "You already got the highest grade.";
    }
    else
    {
        cout << "You need " << diff << " marks to move up to the next grade";
    }

    return 0;
}

void highestTemp(int temperature[][4], int rows, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        int max = temperature[0][i];
        for (int j = 0; j < rows; j++)
        {
            if (temperature[j][i] > max)
            {
                max = temperature[j][i];
            }
        }
        cout << max << " ";
    }
    cout << endl;
}

void swap(int *x, int *y)
{
    int z = *y;
    *y = *x;
    *x = z;
}

void swapReference(int &x, int &y)
{
    int z = y;
    y = x;
    x = z;
}