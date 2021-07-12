
CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Shape.o

all: hw09

hw09: hw09.cpp Shape.o
	$(CC) $(FLAGS) hw09.cpp -o hw09 $(OBJS)

Shape.o: Shape.cpp Shape.h
	$(CC) $(FLAGS) -c Shape.cpp -o Shape.o

clean:
	rm *.o hw09 hw09.tar hw09.scr

tar:
	tar cf hw09.tar hw09.scr Makefile hw09.cpp Shape.h Shape.cpp