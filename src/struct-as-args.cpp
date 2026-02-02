#include <iostream>

struct Fruit {
  std::string name;
  double price_per_kg;
};
void print_fruit_info(Fruit &fruit);
void change_fruit_price(Fruit &fruit, double price_per_kg);

int main() {
  Fruit fruit1;
  fruit1.name = "Banana";
  fruit1.price_per_kg = 4.99;

  Fruit fruit2;
  fruit2.name = "Apple";
  fruit2.price_per_kg = 6.99;

  print_fruit_info(fruit1);
  print_fruit_info(fruit2);

  change_fruit_price(fruit1, 3.99);

  print_fruit_info(fruit1);

  return 0;
}

void print_fruit_info(Fruit &fruit) {
  std::cout << "Fruit " << fruit.name << " info" << std::endl;
  std::cout << "Price (per kg): $" << fruit.price_per_kg << std::endl;
}

void change_fruit_price(Fruit &fruit, double price_per_kg) {
  std::cout << "The price of " << fruit.name << " fruit change from $" << fruit.price_per_kg << " to $";
  fruit.price_per_kg = price_per_kg;
  std::cout << fruit.price_per_kg << std::endl;
}

