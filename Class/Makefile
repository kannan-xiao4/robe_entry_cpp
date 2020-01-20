.cpp.o:
	g++ -o $@ -c $<

Class.out: Class2.o Test.o
	g++ -o $@ Class2.o Test.o

Class2.o: Test.h
Test.o: Test.h