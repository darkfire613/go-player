#include "board.h"

//constructors
Board::Board(int x, int y)
{
  int xSize = x;
  int ySize = y;
  board = new Intersection [xSize][ySize];

}

Board::~Board()
{

}
