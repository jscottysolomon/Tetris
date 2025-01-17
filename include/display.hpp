#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include <vector>

#define	BLACK   0x0000
#define	BLUE    0x00F0
#define	RED     0xe800
#define	GREEN   0x0760
#define PURPLE  0x981d
#define YELLOW  0xef60  
#define ORANGE  0xed00
#define LIGHT_BLUE 0x077d

#define LEFT_BOUND 3
#define UPPER_BOUND -31
#define RECTANGLE_WIDTH 9

#define __CS 10
#define __DC 9

#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define WHITE   0xFFFF

void DisplayGrid(std::vector<std::vector<char>> grid);
void SetUp();

#endif