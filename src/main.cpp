#include <SPI.h>
#include <Adafruit_GFX.h>
#include <TFT_ILI9163C.h>

#include "display.hpp"
#include "logic.hpp"

void setup() {
  SetUp();
}

void loop(){
  DisplayGrid(GetGrid());
  delay(1000);
}