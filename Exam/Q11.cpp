/*
Demonstrate a complete C++ program that declares three arrays. The value for
two of the arrays are given as follows:
• array1 = {1, 3, 5, 7}
• array2 = {2, 4, 6, 8}
The third array (i.e., array3) is an empty array of the size 4.
The program must perform element-wise addition between array1 and array2
before inserting the output to same index of the third array. The program then
prints the output as in the example below:
[1] 1 + 2 = 3
[2] 3 + 4 = 7
[3] 5 + 6 = 11
[4] 7 + 8 = 15
The program separates the addition and printing tasks in its codes.
*/

#include <iostream>
using namespace std;

int main()
{
    int array1[4] = {1, 3, 5, 7};
    int array2[4] = {2, 4, 6, 8};
    int array3[4];

    for (int i = 0; i < 4; i++)
    {
        array3[i] = array1[i] + array2[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "[" << i + 1 << "] " << array1[i] << " + " << array2[i] << " = " << array3[i] << endl;
    }

    return 0;
}