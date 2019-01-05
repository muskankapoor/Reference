CXXFLAGS=-std=c++14
LDFLAGS=-lm 

main: main.o funcs.o
 g++ $(LDFLAGS)  $(CXXFLAGS) -o main main.o fact.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

tests.o: tests.cpp funcs.h

main.o: main.cpp funcs.h

fact.o: funcs.cpp funcs.h

clean:
	rm fact.o main.o
