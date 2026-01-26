#include <iostream>

int main() {
  int width, height;

  std::cout << "Width: ";
  std::cin >> width;

  std::cout << "Height: ";
  std::cin >> height;

  for (int y = 1; y <= height; y++) {
    for (int x = 1; x <= width; x++) {
      if (y%2==0) {
        std::cout << "@";
      } else {
        std::cout << "_";
      }
    }
    std::cout << " | " << y << std::endl;
  }
}
