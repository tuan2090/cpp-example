#include <iostream>

int main() {
  char *pchr = NULL;
  int size;

  std::cout << "Size? ";
  std::cin >> size;

  pchr = new char[size];

  for (int i = 0; i < size; i++) {
    std::cout << "Enter the character #" << i+1 << ": ";
    std::cin >> pchr[i];
  }

  for (int i = 0; i < size; i++) {
    std::cout << "Character #" << i+1 << ": " << pchr[i] << std::endl;
  }

  delete[] pchr;

  return 0;
}
