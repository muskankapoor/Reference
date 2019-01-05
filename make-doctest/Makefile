tests:tests.o sum.o
	g++ -o tests tests.o sum.o

testso:tests.cpp sum.h

main.o:main.cpp sum.h

sum.o:sum.cpp sum.h

clean:
	rm sum.o main.o
