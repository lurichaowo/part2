CXXFLAGS=-std=c++14

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h

tests.o: tests.cpp unindent.h indent.h

main.o: main.cpp unindent.h indent.h

main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

tests: tests.o unindent.o indent.o
	g++ -o tests tests. unindent.o indent.o
	
clean:
	rm -f main.o unindent.o indent.o tests.o main tests