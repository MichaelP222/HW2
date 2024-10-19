# please write Makefile here
CXX = g++ -Wall -Werror -I include/
all: problem1 problem2

problem1: problem1_main.cpp lib/object1.o lib/object2.o
    $(CXX) problem1_main.cpp lib/object1.o lib/object2.o -o problem1

problem2: problem2_main.cpp lib/object1.o lib/object2.o
    $(CXX) problem2_main.cpp lib/object1.o lib/object2.o -o problem2

lib/object1.o: src/object1.cpp include/object1.h
    $(CXX) -c src/object1.cpp -o lib/object1.o

lib/object2.o: src/object2.cpp include/object2.h
    $(CXX) -c src/object2.cpp -o lib/object2.o

clean:
    rm -f lib/*.o problem1 problem2