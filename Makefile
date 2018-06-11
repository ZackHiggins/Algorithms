test: sortingAlgorithms.o test.o
	g++ -o test sortingAlgorithms.o test.o
	./test

test.o: test.cpp
	g++ -c -g test.cpp

sortingAlgorithms.o: sortingAlgorithms.cpp sortingAlgorithms.h
	g++ -c -g sortingAlgorithms.cpp

clean:
	rm -f *.o test

