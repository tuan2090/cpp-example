#include <iostream>
#include <string>

int main() {
  std::string username;

  while (username.empty()) {
    std::cout << "Enter your username: ";
    std::getline(std::cin, username);
  }

  std::cout << "Hello, " << username << std::endl;
}
