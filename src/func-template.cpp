#include <iostream>

template <typename MATH_T>
MATH_T addnum(MATH_T a, MATH_T b) {
  return a + b;
}

int main() {
  std::cout << addnum<int>(6, 3) << std::endl;
  std::cout << addnum<float>(6.3, 3.1) << std::endl;

  return 0;
}
