#include <iostream>

int addnum(int a, int b);

int main() {
  std::cout << "555 + 888 = " << addnum(555, 888) << std::endl;

  return 0;
}

int addnum(int a, int b) {
  return a + b;
}
