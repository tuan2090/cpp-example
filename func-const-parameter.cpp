#include <iostream>

void printinfo(const std::string name);

int main() {
  std::string name = "John";

  printinfo(name);

  return 0;
}

void printinfo(const std::string name) {
  // name = "Bob"; //  error 
  std::cout << "Name: " << name << std::endl;
}
