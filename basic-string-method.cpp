#include <iostream>
#include <string>

int main() {
  std::string username;

  std::cout << "Enter your username: ";
  std::getline(std::cin, username);

  if (username.length() >= 8) {
    std::cout << "Username should be 8 characters long" << std::endl;
  } else if (username.empty()) {
    std::cout << "Username shouldn't be empty" << std::endl;
  } else {
    std::cout << "Hello, " << username << std::endl;
  }

  return 0;
}
