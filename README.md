go-player
=========

An attempt at creating a learning Go-playing algorithm.

Right now, all the program is draw an empty board to the terminal. An empty board is represented by an x by y array of plusses, looking something like the following:

    + + + + + + + + + + + + +
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 
    + + + + + + + + + + + + + 

To get this yourself, do the following (OSX and Linux):

1. Fork this repo and pull it to your computer.
2. From Terminal, cd into the directory and type:
    g++ boardtest.cpp Intersection.cpp Board.cpp
3. run the program by typing:
    ./a.out
4. You should see something similar to above. Modifying the x and y values in boardtest.cpp to change the dimension of the board.
