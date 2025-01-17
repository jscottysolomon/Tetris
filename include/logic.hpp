#ifndef LOGIC_HPP
#define LOGIC_HPP

#include <vector>

enum PieceType {
  empty=0,
  orange_ricky,
  blue_ricky,
  cleveland_z,
  rhode_island_z,
  hero,
  teewee,
  smashboy
};

/**
 * @brief Next Piece in queue
 * @return piece 
 */
PieceType NextPiece();

std::vector<std::vector<char>> GetGrid();


/**
 * @brief If current piece is touching bottom row and time to fix has lapsed
 * @return bool 
 */
bool DropFinished();

#endif