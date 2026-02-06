#include <iostream>

enum Status {
  verygood,
  good,
  normal,
  bad,
  verybad
};

int main() {
  Status status = verygood;

  switch (status) {
    case verygood:
      std::cout << "Status: Very Good" << std::endl;
      break;
    case good:
      std::cout << "Status: Good" << std::endl;
      break;
    case normal:
      std::cout << "Status: Normal" << std::endl;
      break;
    case bad:
      std::cout << "Status: Bad" << std::endl;
      break;
    case verybad:
      std::cout << "Status: Very Bad" << std::endl;
      break;
  };

  return 0;
}
