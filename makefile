CC = g++
6_4: 6_4.cpp Set.o
	$(CC) 6_4.cpp Set.o -o 6_4
Set.o: Set.cpp
	$(CC) -c Set.cpp
clean:
	rm *.o 6_4 *.exe