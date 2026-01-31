#include <iostream>

int main() {
  int num = 8888;
  std::string name = "Bob";

  std::cout << "The address of num is " << &num << std::endl;
  std::cout << "The address of " << name << " is " << &name << std::endl;

  return 0;
}
