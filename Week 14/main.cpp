#include <iostream>

int main()
{

    int s = 10;
    int *ptr = &s;
    std::cout << ptr << std::endl;
    ptr += 10;
    std::cout << ptr << std::endl;
    int nums[50], *iptr = nums;
    std::cout << "\n";
    std::cout << iptr;
    /*
    OUTPUT:
    0x7fffffffd9b4
    0x7fffffffd9dc

    0x7fffffffd8e0
    */

    int x = 10, y = 20;
    const int *ptr1 = &x;
    // *ptr1 = 15;
    ptr1 = &y;
    int *const ptr2 = &x;
    *ptr2 = 15;
    // ptr2 = &y;
    std::cout << "\n\nPointer to constant: " << *ptr1 << std::endl;
    std::cout << "Constant pointer: " << *ptr2 << std::endl;

    /*
    Pointer to constant: 20
    Constant pointer: 15
    */
    return 0;
}