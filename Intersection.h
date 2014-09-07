//Intersection.h

class Intersection
{
  private:
    char status;
    int xPos;
    int yPos;
    static char EMPTY;
    static char BLACK;
    static char WHITE;

  public:
    //constructors
    Intersection (int, int);
    Intersection (int, int, char);

    //setters
    void setPos (int, int);
    void setXPos (int);
    void setYPos (int);
    void setStatusBlack ();
    void setStatusWhite ();
    void setStatusEmpty ();

    //getters
    int getXPos ();
    int getYPos ();
    char getStatus ();

    //functions

};
