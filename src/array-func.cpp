#include <iostream>

double sum(double arr[], int size);

int main() {
  double players_score[] = { 3.25, 6.5, 8.0, 8.5, 2.5 };
  int len_of_players_score = sizeof(players_score)/sizeof(double);
  
  double total_score = sum(players_score, len_of_players_score);

  std::cout << "Total score: " << total_score << std::endl;

  return 0;
}

double sum(double arr[], int size) {
  double num = 0;

  for (int i = 0; i < size; i++) {
    num += arr[i];
  }

  return num;
}
