#include <iostream>

int main() {
  int numx, numy;

  std::cout << "X value: ";
  std::cin >> numx;

  std::cout << "Y value: ";
  std::cin >> numy;

  if (numx == numy) {
    std::cout << "X = Y" << std::endl;
  } else if (numx > numy) {
    std::cout << "X > Y" << std::endl;
  } else if (numx < numy) {
    std::cout << "X < Y" << std::endl;
  } else {
    std::cout << "X and y is not a number" << std::endl;
  }

  return 0;
}
