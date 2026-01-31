#include <iostream>

int main() {
  const double PI = 3.14;
  double const TAU = PI * 2;

  // error // PI = 3.23;

  std::cout << "PI ≈ " << PI << std::endl;
  std::cout << "TAU ≈ " << TAU << std::endl;

  return 0;
}
