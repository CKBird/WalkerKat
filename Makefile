#Christopher Bird
#14 October 2015
#main.cpp, Walker.h, Walker.cpp Makefile

Walker : walk.o Walker.o
	g++ -o Walker walk.o Walker.o -Wall -g
	
walk.o : walk.cpp
	g++ -c walk.cpp -Wall -g -o walk.o
	
Walker.o : Walker.cpp Walker.h
	g++ -c Walker.cpp -Wall -g -o Walker.o
	
clean :
	rm *.o