#include <iostream>

int main() {
  int num = 5;
  int *pnum = &num;

  std::cout << "num = " << num << std::endl;
  std::cout << "*pnum = " << pnum << " = " << *pnum << std::endl;

  return 0;
}
