#include <iostream>

namespace ns1 {
  double a = 56.4;
}

namespace ns2 {
  double a = 4.56;
}

int main() {
  std::cout << ns1::a << std::endl;
  std::cout <<  ns2::a << std::endl;

  return 0;
}
