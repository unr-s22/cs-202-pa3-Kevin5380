#include <iostream>
#include <string>

#ifndef MONEY_H
#define MONEY_H

class Money {
private:
	int dollars;
	int cents;
public:
    Money();
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

    friend std::ostream& operator << (std::ostream& out, const Money& money);
	
	~Money(); //does nothing
};

#endif //MONEY_H