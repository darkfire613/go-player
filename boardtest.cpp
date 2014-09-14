#include "Board.h"
#include "Intersection.h"
#include <iostream>

using namespace std;

int main()
{
  Board gameboard (5,5);
  for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        cout << gameboard.getInter(i,j).getXPos() << gameboard.getInter(i,j).getYPos()
        << gameboard.getInter(i,j).getStatus() << endl;
      }
    }
  return 0;
}
