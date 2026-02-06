#include <iostream>

class Book {
  public:
    std::string name;
    double stars;
    double price_in_usd;

    void print_book_info() {
      std::cout << "Book Info" << std::endl;
      std::cout << "=========" << std::endl;
      std::cout << "Book name: " << name << std::endl;
      std::cout << "Book rate: " << stars << " stars" << std::endl;
      std::cout << "Book price: $" << price_in_usd << std::endl;
    }
};

int main() {
  Book book1;
  book1.name = "The C Programming Language";
  book1.stars = 4.5;
  book1.price_in_usd = 5.9;
  book1.print_book_info();

  Book book2;
  book2.name = "C++ Is Easy";
  book2.stars = 4.8;
  book2.price_in_usd = 8.9;
  book2.print_book_info();

  return 0;
}
