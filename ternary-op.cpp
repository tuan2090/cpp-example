#include <iostream>

int main() {
  int num;

  std::cout << "Enter your number: ";
  std::cin >> num;

  (num < 5) ? std::cout << "num < 5" << std::endl : (num > 5) ? std::cout << "num > 5" << std::endl : std::cout << "num = 5" << std::endl;

  return 0;
}
