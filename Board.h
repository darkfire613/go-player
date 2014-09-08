//Board.h
#include "Intersection.h"

class Board
{
  private:
    int xSize;
    int ySize;
    Intersection *board;

  public:
    //constructors
    Board(int, int);

    //destructor
    ~Board();
};
