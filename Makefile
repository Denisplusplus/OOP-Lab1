CC = g++
FLAGS = -std=c++11
FILES = *.cpp
PROG = exec

all:
	$(CC) $(FLAGS) -o $(PROG) $(FILES)

clean:
	rm -f *.o exec
