CXXFLAGS=-std=c++14

.PHONY: all

all: main

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h

main.o: main.cpp unindent.h indent.h

main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o
	
clean:
	rm -f main.o unindent.o indent.o tests.o main tests