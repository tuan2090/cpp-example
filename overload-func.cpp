#include <iostream>

void buy(std::string product);
void buy(std::string product1, std::string product2);

int main() {
  buy("Apple");
  buy("Pizza", "Soda");

  return 0;
}

void buy(std::string product) {
  std::cout << "You buying " << product << std::endl;
}
void buy(std::string product1, std::string product2) {
  std::cout << "You buying " << product1 << " and " << product2 << std::endl;
}
