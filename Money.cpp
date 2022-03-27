#include "Money.h"
//default constructor
Money::Money(){
    dollars = 0;
    cents = 0;
}
//parameterized constructor
Money::Money(int newDollars, int newCents) {
	dollars = newDollars;
	cents = newCents;
}
//destructor
Money::~Money() {}
//operator overloads
Money Money::operator+(const Money rhs) {
	int new_cents = cents + rhs.cents;
	int new_dollars = dollars + rhs.dollars;
	if (new_cents > 100) {
		new_cents -= 100;
		new_dollars += 1;
	}
	return Money(new_dollars, new_cents);
}
//TODO: round off the value to 2 decimal places
Money Money::operator-(const Money rhs) {
	/*
	int amt1 = 100*dollars + cents;
	int amt2 = 100*rhs.dollars + rhs.cents;
	return (float(amt1) - amt2)/100*/
	int new_cents = cents - rhs.cents;
	int new_dollars = dollars - rhs.dollars;
	if (new_cents < 0) {
		new_cents += 100;
		new_dollars -= 1;
	}
	return Money(new_dollars, new_cents);
}
bool Money::operator==(const Money rhs) {
	int amt1 = 100*dollars + cents;
	int amt2 = 100*rhs.dollars + rhs.cents;
	if (amt1 == amt2) {
		return true;
	}
	else {
		return false;
	}
}
bool Money::operator<(const Money rhs) {
	int amt1 = 100*dollars + cents;
	int amt2 = 100*rhs.dollars + rhs.cents;
	if (amt1 < amt2) {
		return true;
	}
	else {
		return false;
	}
}
bool Money::operator>(const Money rhs) {
	int amt1 = 100*dollars + cents;
	int amt2 = 100*rhs.dollars + rhs.cents;
	if (amt1 > amt2) {
		return true;
	}
	else {
		return false;
	}
}
bool Money::operator<=(const Money rhs) {
	if (*this < rhs || *this == rhs) {
		return true;
	}
	else {
		return false;
	}
}
bool Money::operator>=(const Money rhs) {
	if (*this > rhs || *this == rhs) {
		return true;
	}
	else {
		return false;
	}
}
bool Money::operator!=(const Money rhs) {
	if (!(*this == rhs)) {
		return true;
	}
	else {
		return false;
	}
}

std::ostream& operator << (std::ostream& out, const Money& money){
    out << "$" << money.dollars << "." << money.cents;
    return out;
}