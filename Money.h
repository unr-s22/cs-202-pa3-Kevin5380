#include <iostream>
#include <string>

#ifndef MONEY_H
#define MONEY_H

class Money {
private:
	int dollars;
	int cents;
	bool neg;
public:
	//default constructor
    Money();
	//parameterized constructor
	Money(int newDollars, int newCents);
	//parameterized constructor with bool
	Money(int newDollars, int newCents, bool n);
	//operator overloads
	Money operator+(const Money rhs);
	Money operator-(const Money rhs);
	bool operator==(const Money rhs);
	bool operator<(const Money rhs);
	bool operator>(const Money rhs);
	bool operator<=(const Money rhs);
	bool operator>=(const Money rhs);
	bool operator!=(const Money rhs);
	//friend overload of <<
    friend std::ostream& operator << (std::ostream& out, const Money& money);
	//destructor
	~Money(); //does nothing
};

#endif //MONEY_H