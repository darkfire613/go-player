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

  public:
    //constants
    static const char EMPTY = '+';
    static const char BLACK = 'X';
    static const char WHITE = 'O';

    //constructors
    Intersection ();
    Intersection (int x, int y);
    Intersection (int x, int y, char c);

    //setters
    void setPos (int x, int y);
    void setXPos (int x);
    void setYPos (int y);
    void setInGroup (bool b);
    void setStatus(char c);
    void setStatusBlack ();
    void setStatusWhite ();
    void setStatusEmpty ();

    //getters
    int getXPos ();
    int getYPos ();
    char getStatus ();

    //functions

};

#endif
