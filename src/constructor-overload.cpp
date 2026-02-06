#include <iostream>

class Pizza {
  public:
    std::string topping1;
    std::string topping2;

    void show_topping_list() {
      std::cout << "Topping List" << std::endl;
      std::cout << "============" << std::endl;
      std::cout << "Topping 1: " << topping1 << std::endl;
      std::cout << "Topping 2: " << topping2 << std::endl;
    }

  Pizza(std::string topping1) {
    this->topping1 = topping1;
    this->topping2 = "None";
  }

  Pizza(std::string topping1, std::string topping2) {
    this->topping1 = topping1;
    this->topping2 = topping2;
  }
};

int main() {
  Pizza pizza1("mushrooms");
  Pizza pizza2("cheese", "pepperoni");

  pizza1.show_topping_list();
  pizza2.show_topping_list();

  return 0;
}
