#include <iostream>
#include <string>

class Money {
private:
	int dollars;
	int cents;
public:
	//parameterized constructor
	Money(int newDollars, int newCents);
	//operator overloads
	//TODO: <<, >>
	float operator+(const Money rhs);
	float operator-(const Money rhs);
	bool operator==(const Money rhs);
	bool operator<(const Money rhs);
	bool operator>(const Money rhs);
	bool operator<=(const Money rhs);
	bool operator>=(const Money rhs);
	bool operator!=(const Money rhs);
	
	~Money(); //does nothing
};