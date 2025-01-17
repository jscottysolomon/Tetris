#include <SPI.h>
#include <Adafruit_GFX.h>
#include <TFT_ILI9163C.h>


// Color definitions
#define	BLACK   0x0000
#define	BLUE    0x001F
#define	RED     0xF800
#define	GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0  
#define WHITE   0xFFFF

#define LEFT_BOUND 3
#define UPPER_BOUND -31
#define RECTANGLE_WIDTH 9

/*
Teensy3.x and Arduino's
You are using 4 wire SPI here, so:
 MOSI:  11//Teensy3.x/Arduino UNO (for MEGA/DUE refere to arduino site)
 MISO:  12//Teensy3.x/Arduino UNO (for MEGA/DUE refere to arduino site)
 SCK:   13//Teensy3.x/Arduino UNO (for MEGA/DUE refere to arduino site)
 the rest of pin below:
 */
#define __CS 10
#define __DC 9
/*
Teensy 3.x can use: 2,6,9,10,15,20,21,22,23
Arduino's 8 bit: any
DUE: check arduino site
If you do not use reset, tie it to +3V3
*/


TFT_ILI9163C tft = TFT_ILI9163C(__CS, __DC);

void setup() {
  tft.begin();
  tft.fillScreen(BLACK);
  tft.fillRect(0, -31, 150, 32, BLACK);

  tft.fillRect(3, 50, 13, 13, CYAN);
  tft.fillRect(20, 50, 13, 13, BLUE);

   tft.fillRect(3, 70, 13, 13, YELLOW);
  tft.fillRect(20, 70, 13, 13, WHITE);

  int x = LEFT_BOUND;
  int y = UPPER_BOUND;
  int temp = 0;
  for (int vv = 0; vv < 20; vv++) {
    for(int ii = 0; ii < 10; ii++) {
      tft.fillRect(x, y, RECTANGLE_WIDTH, RECTANGLE_WIDTH, BLUE+temp);
      x += RECTANGLE_WIDTH;
      temp+=10;
    }
    x = LEFT_BOUND;
    y += RECTANGLE_WIDTH;
  }
  
}

void loop(){

  int x = 0;
  x++;
}