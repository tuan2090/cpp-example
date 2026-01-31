#include <iostream>

int factorial(int num);

int main() {
  int num;

  std::cout << "Enter your number: ";
  std::cin >> num;

  std::cout << num << "! = " << factorial(num) << std::endl;

  return 0;
}

int factorial(int num) {
  if (num > 1) {
    return num * factorial(num - 1);
  } else {
    return 1;
  }
}
