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
  for (int i = 0; i < xSize; i++)
    {
      delete[] board[i];
    }

  delete[] board;
}
