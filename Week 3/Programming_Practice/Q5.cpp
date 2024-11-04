#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

  const double PI = 3.14159;
	const double SLICE = 14.125;

  double diameter = 25;
  double radius;
  double area;
  double slices;

  radius = diameter /2;
  area = PI * radius * radius;
  slices = area / SLICE;

     cout << "A " << fixed << showpoint << setprecision(1) << diameter << " inch pizza contains about " << slices << " slices\n";
  return 0;        
}
