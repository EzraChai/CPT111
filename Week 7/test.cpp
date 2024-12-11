#include <iostream>

int main(){

  int x {10};
  int y(12);
  int z = {14};
  const double NUMBER_OF_MINUTES_IN_A_YEAR = 5.256E5; 
  int score = 100;
  std::cout << "Your grade is: " << (score < 60) ? "Fail." : "Pass.";
  if (x = y);
  {
      // This block will always execute, regardless of x and y
      std::cout << "This will always print.\n";
  }
  std::cout << x << y << z;

  x = 10;
  if(x++ > 10)
    std::cout << "\nx is greater than 10";

    do{
      std::cout << "Hello";
      x--;
    } while(x > 10);
  return 0;
}