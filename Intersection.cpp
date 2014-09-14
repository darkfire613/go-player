//Intersection.cpp

#include "Intersection.h"

//constructors
Intersection::Intersection()
{
  setPos (0,0);
  setStatus (Intersection::EMPTY);
  setInGroup (false);
}

Intersection::Intersection (int x, int y)
{
  setPos (x, y);
  setStatus (Intersection::EMPTY);
  setInGroup (false);
}

Intersection::Intersection (int x, int y, char c)
{
  setPos (x,y);
  setStatus (c);
  setInGroup (false);
}

//setters
void Intersection::setPos (int x, int y)
{
  xPos = x;
  yPos = y;
}

void Intersection::setXPos (int x)
{
  xPos = x;
}

void Intersection::setYPos (int y)
{
  yPos = y;
}

void Intersection::setInGroup (bool b)
{
  inGroup = b;
}

void Intersection::setStatus(char c)
{
  status = c;
}

void Intersection::setStatusBlack ()
{
  status = Intersection::BLACK;
}

void Intersection::setStatusWhite ()
{
  status = Intersection::WHITE;
}

void Intersection::setStatusEmpty ()
{
  status = Intersection::EMPTY;
}

//getters
int Intersection::getXPos ()
{
  return xPos;
}

int Intersection::getYPos()
{
  return yPos;
}

char Intersection::getStatus()
{
  return status;
}

//functions
