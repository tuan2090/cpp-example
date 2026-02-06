// You need raylib for this example

#include <iostream>
#include "raylib.h"

void draw_pattern(int posx, int posy, int width, int height) {
  for (int x = 0; x < width; x++) {
    for (int y = 0; y < height; y++) {
      if (x%2==0) {
        DrawPixel(x+posx, y+posy, RED);
      } else if (y%2==0) {
        DrawPixel(x+posx, y+posy, GREEN); 
      }
    }
  }
}

int main() {
  int WIDTH;
  int HEIGHT;

  std::cout << "Width? ";
  std::cin >> WIDTH;

  std::cout << "Height? ";
  std::cin >> HEIGHT;

  InitWindow(WIDTH, HEIGHT, "Raylib C++");
  SetTargetFPS(30);

  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(BLACK);
      DrawRectangle(10, 10, WIDTH-20, HEIGHT-20, WHITE);
      draw_pattern(30, 30, WIDTH-60, HEIGHT-60);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
