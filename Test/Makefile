Hello: Hello.cpp
	g++ -o Hello.out Hello.cpp

Include1: Include1.cpp Include1.h
	g++ -o Include1.out Include1.cpp

Internal: Internal1.o Internal2.o
	g++ -o Internal.out Internal1.o Internal2.o

Internal1.o: Internal1.cpp
	g++ -c Internal1.o

Internal2.o: Internal2.cpp
	g++ -c Internal2.o