#include <iostream>

int main() {
  int vec2_pos[][2] = {
    {0, 0}, {1, 1}, {2, 0}, {3, 1}
  };

  int row = sizeof(vec2_pos)/sizeof(vec2_pos[0]);
  int column = sizeof(vec2_pos[0])/sizeof(vec2_pos[0][0]);

  for (int i = 0; i < row; i++) {
    std::cout << "(";
    for (int j = 0; j < column; j++) {
      std::cout << " " << vec2_pos[i][j];
    }
    std::cout << ")" << std::endl;
  }

  return 0;
}
