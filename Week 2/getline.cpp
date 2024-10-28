#include <iostream>

int main(){

  std::string name;
  std::string city;

  std::cout << "Please enter your full name: ";
  std::getline(std::cin, name);

  std::cout << "Enter the city you live in: ";
  // std::cin >> city;
  std::getline(std::cin, city);

  std::cout << "Hello, " << name << std::endl;
  std::cout << "You live in " << city << std::endl;

  return 0;
}
