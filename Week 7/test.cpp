#include <iostream>

int main(){

  int x {10};
  int y(12);
  if (x = y);
  {
      // This block will always execute, regardless of x and y
      std::cout << "This will always print.\n";
  }
  return 0;
}