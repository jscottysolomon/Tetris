#include "display.hpp"

#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <TFT_ILI9163C.h>
#include <vector>

#include "logic.hpp"

TFT_ILI9163C tft = TFT_ILI9163C(__CS, __DC);

void SetUp() {
  tft.begin();
  tft.fillScreen(BLACK);
  tft.fillRect(0, -31, 150, 32, BLACK);
}

void DisplayGrid(std::vector<std::vector<char>> grid) {
  int x = LEFT_BOUND;
  int y = UPPER_BOUND;

  for(int vv = 0; vv < 14; vv++) {
    for(int hh = 0; hh < 10; hh++) {
      uint16_t color;
      
      PieceType temp = (PieceType) grid[vv][hh];

      switch(temp) {
        case orange_ricky:
          color = ORANGE;
          break;
        case blue_ricky:
          color = BLUE;
          break;
        case cleveland_z:
          color = RED;
          break;
        case rhode_island_z:
          color = GREEN;
          break;
        case hero:
          color = LIGHT_BLUE;
          break;
        case teewee:
          color = PURPLE;
          break;
        case smashboy:
          color = YELLOW;
          break;
        default:
          color = BLACK;
          break;
      }

      tft.fillRect(x, y, RECTANGLE_WIDTH, RECTANGLE_WIDTH, color);
      x += RECTANGLE_WIDTH;
    }

    x = LEFT_BOUND;
    y += RECTANGLE_WIDTH;
  }
}