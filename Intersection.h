//Intersection.h
#ifndef INTERSECTION_H
#define INTERSECTION_H

class Intersection
{
  private:
    char status;
    int xPos;
    int yPos;
    bool inGroup;
    const char EMPTY = '+';
    const char BLACK = 'X';
    const char WHITE = 'O';

  public:
    //constructors
    Intersection ();
    Intersection (int, int);
    Intersection (int, int, char);

    //setters
    void setPos (int, int);
    void setXPos (int);
    void setYPos (int);
    void setInGroup (bool);
    void setStatusBlack ();
    void setStatusWhite ();
    void setStatusEmpty ();

    //getters
    int getXPos ();
    int getYPos ();
    char getStatus ();

    //functions

};
