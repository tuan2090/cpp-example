#include <iostream>

int main() {
  std::string fullname;
  int age;

  std::cout << "What's your age? ";
  std::cin >> age;

  std::cout << "What's your full name?\n[fullname]";
  std::getline(std::cin >> std::ws, fullname);

  std::cout << "Hello, " << fullname << std::endl;
  std::cout << "Your age is: " << age << std::endl;

  return 0;
}
