#include "Board.h"

//constructors
Board::Board(int x, int y)
{
  xSize = x;
  ySize = y;

  //initializes board as a 2d array of Intersections
  board = new Intersection* [xSize];
  for (int i = 0; i < xSize; ++i)
  {
    board[i] = new Intersection [ySize];
  }

  //Goes through board, assigning each Intersection its coords
  for (int i = 0; i < xSize; ++i)
  {
    for (int j = 0; j < ySize; ++j)
    {
      board[i][j].setPos(i + 1, j + 1);
    }
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

Intersection Board::getInter(int x, int y)
{
  Intersection emptyInter;
  if (x > xSize || y > ySize)
    {
      std::cout << "Requested intersection is out of bounds" << std::endl;
      return emptyInter;
    }
  else
    {
      return board[x][y];
    }
}
