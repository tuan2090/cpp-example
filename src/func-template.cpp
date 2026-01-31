#include <iostream>

template <typename T>
T addnum(T a, T b) {
  return a + b;
}

int main() {
  std::cout << addnum(6, 3) << std::endl;
  std::cout << addnum(6.3, 3.1) << std::endl;

  return 0;
}
