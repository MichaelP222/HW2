# please write Makefile here
CXX = g++ -Wall -Werror -I include/
all: problem1 problem2

problem1: problem1_main.cpp lib/gen_number.o lib/post_process.o lib/print_menu.o
	$(CXX) problem1_main.cpp lib/gen_number.o lib/post_process.o lib/print_menu.o -o problem1

problem2: problem2_main.cpp lib/matrix.o
	$(CXX) problem2_main.cpp lib/matrix.o -o problem2

lib/gen_number.o: src/gen_number.cpp include/gen_number.h
	$(CXX) -c src/gen_number.cpp -o lib/gen_number.o

lib/post_process.o: src/post_process.cpp include/post_process.h
	$(CXX) -c src/post_process.cpp -o lib/post_process.o

lib/print_menu.o: src/print_menu.cpp include/print_menu.h
	$(CXX) -c src/print_menu.cpp -o lib/print_menu.o

lib/matrix.o: src/matrix.cpp include/matrix.h
	$(CXX) -c src/matrix.cpp -o lib/matrix.o

clean:
	rm -f lib/*.o problem1 problem2