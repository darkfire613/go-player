//Intersection.cpp

#include "Intersection.h"

char Intersection::EMPTY = '+';
char Intersection::BLACK = 'X';
char Intersection::WHITE = 'O';

//constructors
Intersection::Intersection (int x, int y)
{
  setPos (x, y);
  setStatus (EMPTY);
  setInGroup (false);
}

Intersection::Intersection (int x, int y, char c)
{
  setPos (x,y);
  setStatus (c);
  setInGroup (false);
}

//setters
void setPos (int x, int y)
{
  xPos = x;
  yPos = y;
}

void setXPos (int x)
{
  xPos = x;
}

void setYPos (int y)
{
  yPos = y;
}

void setInGroup (bool b)
{
  inGroup = b;
}

void setStatusBlack ()
{
  status = BLACK;
}

void setStatusWhite ()
{
  status = WHITE;
}

void setStatusEmpty ()
{
  status = EMPTY;
}

//getters
int getXPos ()
{
  return xPos;
}

int getYPos()
{
  return yPos;
}

char getStatus()
{
  return status;
}

//functions
