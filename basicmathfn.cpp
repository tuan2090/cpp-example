#include <iostream>
#include <cmath>

int main() {
  double a = 5, b = 3;
  std::cout << "a, b = " << a << ", " << b << std::endl;

  std::cout << "min(a, b) = " << std::min(a, b) << std::endl;
  std::cout << "max(a, b) = " << std::max(a, b) << std::endl;
 
  std::cout << "a^b = " << pow(a, b) << std::endl;
  std::cout << "sqrt(a+4) = " << sqrt(a+4) << std::endl;

  return 0;
}
