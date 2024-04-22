test.exe: Movie.o test.o
	g++ Movie.o test.o -o test.exe

Movie.o: Movie.h Movie.cpp
	g++ -c -g Movie.cpp

test.o: Movie.h test.cpp
	g++ -c -g test.cpp

clean:
	del *.o test.exe