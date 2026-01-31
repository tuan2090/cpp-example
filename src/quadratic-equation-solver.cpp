#include <iostream>
#include <cmath>

void show_logo() {
  std::cout << "@    |    @" << std::endl;
  std::cout << "@    |    @    Quaratic" << std::endl;
  std::cout << " @  QES  @     Equation" << std::endl;
  std::cout << " @   |   @     Solver" << std::endl;
  std::cout << "  @  |  @" << std::endl;
  std::cout << "   @@|@@" << std::endl;
}

int main() {
  double a, b, c;
  double discriminant;
  double sum_of_root;
  double prod_of_root;
  double solution_1, solution_2;

  show_logo();

  std::cout << "Enter value a: ";
  std::cin >> a;
  std::cout <<"Enter value b: ";
  std::cin >> b;
  std::cout << "Enter value c: ";
  std::cin >> c;

  discriminant = sqrt(pow(b, 2) - 4*a*c);
  sum_of_root = -b/a;
  prod_of_root = c/a;
  solution_1 = (-b - discriminant) / (2*a);
  solution_2 = (-b + discriminant) / (2*a);

  std::cout << "\nResult" << std::endl;
  std::cout << "Equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
  std::cout << "Discriminant (b^2 - 4ac): " << pow(discriminant, 2) << std::endl;
  std::cout << "Sum of roots (-b/a): " << sum_of_root << std::endl;
  std::cout << "Product of roots (c/a): " << prod_of_root << std::endl;
  std::cout << "Solution 1: " << solution_1 << std::endl;
  std::cout << "Solution 2: " << solution_2 << std::endl;

  return 0;
}
