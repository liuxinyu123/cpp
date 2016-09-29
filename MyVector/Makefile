main : main.o 
	g++ -o main main.o 
main.o: main.cpp vector.h vector_impl.h
	g++ -c main.cpp

clean:
	rm *.o main 
