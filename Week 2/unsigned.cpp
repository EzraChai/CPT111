#include <iostream>

int main(){
  unsigned int x = 4096;

  std::cout << sizeof(x) << " " << x << "\n";

  x++;
  std::cout << x << "\n"; 



  return 0;
}
