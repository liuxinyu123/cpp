main : main.o list.o
	g++  -lstdc++ -o main main.o list.o
main.o : main.cpp list.h  
	g++ -lstdc++ -c main.cpp
list.o : list.h	list.cpp
	g++ -lstdc++ -c list.cpp
clean:
	rm *.o main
