#include <iostream>

int main() {
  double num = 50;
  std::cout << "The value of num is: " << num << std::endl;
  
  num += 50;
  std::cout << "The new value of num when using += op is: " << num << std::endl;

  num -= 20;
  std::cout << "The new value of num when using -= op is: " << num << std::endl;

  num *= 2;
  std::cout << "The new value of num when using *= op is: " << num << std::endl;

  num /= 10;
  std::cout << "The new value of num when using /= op is: " << num << std::endl;

  return 0;
}
