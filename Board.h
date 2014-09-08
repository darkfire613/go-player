//Board.h
#include "Intersection.h"

class Board
{
  private:
    int xSize;
    int ySize;
    Intersection ** boardArr;

  public:
    //constructors
    Board(int, int);

    //destructor
    ~Board();
};
