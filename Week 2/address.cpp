#include <iostream>

using namespace std;

int main(){

  int x = 25;               // int variable
  int *ptr = nullptr;       // Pointer variable, can point to an int

  ptr = &x;   // store the address of x in ptr

  cout << "The value in x is " << x <<endl;
  cout << "The value pointed by ptr is " << ptr << endl;

  return 0;
}
