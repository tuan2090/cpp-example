#include <iostream>

int main() {
  std::string fruits[] = { "Apple", "Banana", "Cherry"};
  size_t size_of_fruits = sizeof(fruits)/sizeof(std::string);

  // sizeof() function
  std::cout << size_of_fruits << std::endl;

  // array iteration
  // with for loop
  for (size_t i = 0; i < size_of_fruits-1; i++) {
    std::cout << fruits[i] << std::endl;
  }
  std::cout << "Done!" << std::endl;
  // with while loop
  size_t i = 0;
  do {
    std::cout << fruits[i] << std::endl;
    i++;
  } while(i < size_of_fruits-1);
  std::cout << "Done!" << std::endl;

  return 0;
}
