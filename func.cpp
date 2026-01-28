#include <iostream>

void hello(std::string name) {
  std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
  hello("World");
  hello("John");
  hello("Alice");
  hello("Bob");
}
