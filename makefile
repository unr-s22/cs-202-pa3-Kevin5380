pa3: Money.o Account.o main.o
	g++ Money.o Account.o main.o -o pa3 -std=c++11
main.o: main.cpp
	g++ main.cpp -c -std=c++11
Money.o: Money.cpp Money.h
	g++ Money.cpp -c -std=c++11
Account.o: Account.cpp Account.h
	g++ Account.cpp -c -std=c++11
clean: 
	rm *.o pa3