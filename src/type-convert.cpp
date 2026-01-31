#include <iostream>

int main() {
  double a = 888, b = 7;
  double calc = a / b;
  int result = (int)calc;

  std::cout << "double a, b = " << a << ", " << b << std::endl;
  std::cout << "double calc = " << calc << "; int result = " << result << std::endl;

  return 0;
}
