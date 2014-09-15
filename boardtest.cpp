#include "Board.h"
#include "Intersection.h"
#include <iostream>

using namespace std;

int main()
{
  int x = 13;
  int y = 13;
  Board gameboard (x,y);
  for (int i = 0; i < x; i++)
    {
      for (int j = 0; j < y; j++)
      {
        cout << gameboard.getInter(i,j).getStatus() << " ";
      }
      cout << endl;
    }
  return 0;
}
