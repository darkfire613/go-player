#include "board.h"

//constructors
Board::Board(int x, int y)
{
  xSize = x;
  ySize = y;
  board = new Intersection [xSize];
  for (int i = 0; i < xSize; i++)
    {
      board[i] = new Intersection [ySize]; 
    }

}

Board::~Board()
{
  for (int i = 0; i < xSize; i++)
    {
      delete[] board[i];
    }

  delete[] board;
}
