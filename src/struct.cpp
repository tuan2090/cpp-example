#include <iostream>

struct Book {
  std::string name;
  double rate;
};

int main() {
  Book book1;
  book1.name = "The C Programming Language";
  book1.rate = 4.8;

  Book book2;
  book2.name = "Learn C++: The Hard Way";
  book2.rate = 4.6;

  std::cout << "Book 1 name: " << book1.name << std::endl;
  std::cout << "Book 1 rate: " << book1.rate << std::endl;

  std::cout << "Book 2 name: " << book2.name << std::endl;
  std::cout << "Book 1 rate: " << book2.rate << std::endl;

  return 0;
}
