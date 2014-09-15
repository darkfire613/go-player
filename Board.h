//Board.h

#ifndef BOARD_H
#define BOARD_H

#include "Intersection.h"
#include <iostream>

class Board
{
  private:
    int xSize;
    int ySize;
    Intersection** board;

  public:
    //constructors
    Board(int, int);

    //destructor
    ~Board();

    //setters
    void setInter (int x, int y, char c);
    
    //getters
    Intersection getInter(int x, int y);
};

#endif
