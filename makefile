all: main

main: main.o
	g++ -o main main.o -I include

main.o: src/main.cpp include/Queue.h
	g++ -c src/main.cpp -I include

clean:
	rm -f *.o main
