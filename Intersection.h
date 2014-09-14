//Intersection.h
<<<<<<< HEAD
=======
#ifndef INTERSECTION_H
#define INTERSECTION_H
>>>>>>> gh-pages

class Intersection
{
  private:
    char status;
    int xPos;
    int yPos;
    bool inGroup;
<<<<<<< HEAD
    static char EMPTY;
    static char BLACK;
    static char WHITE;

  public:
    //constructors
=======
    const char EMPTY = '+';
    const char BLACK = 'X';
    const char WHITE = 'O';

  public:
    //constructors
    Intersection ();
>>>>>>> gh-pages
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
