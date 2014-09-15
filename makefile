all: boardtest

boardtest: boardtest.o Board.o Intersection.o
	g++ boardtest.o Board.o Intersection.o -o bin/boardTest

boardtest.o: boardtest.cpp
	g++ -c boardtest.cpp

Board.o: Board.cpp
	g++ -c Board.cpp

Intersection.o: Intersection.cpp
	g++ -c Intersection.cpp

clean:
	rm -rf *o bin/boardTest
