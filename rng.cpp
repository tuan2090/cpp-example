#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  srand(time(NULL));

  int rn1 = (rand() % 100) + 1;
  int rn2 = (rand() % 100) + 1;
  int rn3 = (rand() % 100) + 1;

  std::cout << rn1 << " " << rn2 << " " << rn3 << std::endl;
}
