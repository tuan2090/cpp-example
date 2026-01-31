#include <iostream>

int main() {
  int choice;

  std::cout << "Enter your choice: ";
  std::cin >> choice;

  switch (choice) {
    case 1:
      std::cout << "You choice 1!" << std::endl;
      break;
    case 2:
      std::cout << "You choice 2!" << std::endl;
      break;
    case 3:
      std::cout << "You choice 3!" << std::endl;
      break;
    default:
      std::cout << "CHOICE NOT FOUND!" << std::endl;
  }

  return 0;
}
