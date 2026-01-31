#include <iostream>

int main() {
  int *pointer = nullptr;
  int a = 555;

  pointer = &a;

  if (pointer == NULL) {
    std::cout << "Address is not assigned" << std::endl;
  } else {
    std::cout << "Address is assigned" << std::endl;
    std::cout << "Address: " << pointer << std::endl;
    std::cout << "Address value: " << *pointer << std::endl;
  }

  return 0;
}
