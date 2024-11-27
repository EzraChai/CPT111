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
  return 0;
}