#include <iostream>

int main() {
  std::string players[] = { "Alice", "Bob", "John", "Jack", "Kate" };

  for (std::string player : players) {
    std::cout << player << std::endl;
  }

  return 0;
}
