#include <iostream>

int main() {
  int numa, numb;

  std::cout << "A value: ";
  std::cin >> numa;

  std::cout << "B value: ";
  std::cin >> numb;

  if (numa >= 0 && numa > numb) {
    std::cout << "numa >= 0 and numa > numb" << std::endl;
  } else if (numa == 5 || numb == 3) {
    std::cout << "numa == 5 or numb == 3" << std::endl;
  } else if (!(numa == numb)) {
    std::cout << "numa != numb" << std::endl;
  }
}
