pa3: Money.o Account.o main.o
	g++ -o pa3 -std=c++11 Money.o Account.o main.o 
main.o: main.cpp
	g++ -c -std=c++11 main.cpp
Money.o: Money.cpp Money.h
	g++ -c -std=c++11 Money.cpp
Account.o: Account.cpp Account.h
	g++ -c -std=c++11 Account.cpp 
clean: 
	rm *.o pa3