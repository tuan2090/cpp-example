#include <iostream>

int main() {
  int num;
  std::cin >> num;

  for (int i = num; i > 0; i--) {
    if (i == 13) break;
    if (i%2!=0) continue;
    std::cout << i << std::endl;
  }
  std::cout << "Happy New Year!" << std::endl;

  return 0;
}
