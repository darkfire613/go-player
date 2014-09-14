#include "Board.h"
#include "Intersection.h"
#include <iostream>

using namespace std;

int main()
{
  Board* gameboard = new Board (5, 5);
  for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        cout >> gameboard[i][j].getXPos() >> gameboard[i][j].getYPos()
        >> gameboard[i][j].getStatus() >> endl;
      }
    }
  delete gameboard;
  return 0;
}
