#include "Money.h"
#include <iomanip>
//default constructor
Money::Money(){
    dollars = 0;
    cents = 0;
	neg = false;
}
//parameterized constructor
Money::Money(int newDollars, int newCents) {
	dollars = newDollars;
	cents = newCents;
	neg = false;
}
//parameterized constructor with bool
Money::Money(int newDollars, int newCents, bool n) {
	dollars = newDollars;
	cents = newCents;
	neg = n;
}
//destructor
Money::~Money() {}
//operator overloads
Money Money::operator+(const Money rhs) {
	int amt1, amt2, resultDollars, resultCents, resultAmt;
	bool resultBool;
	//fancy logic to determine the sum, considering that the result and/or input(s) could be negative
	amt1 = 100*dollars + cents;
	if (neg) {amt1 *= -1;}
	amt2 = 100*rhs.dollars + rhs.cents;
	if (rhs.neg) {amt2 *= -1;}
	resultAmt = amt1 + amt2;
	resultBool = resultAmt < 0;
	//force it to be positive
	if (resultBool) {resultAmt *= -1;}
	resultDollars = resultAmt / 100;	
	resultCents = resultAmt % 100;
	return Money(resultDollars, resultCents, resultBool);
}
Money Money::operator-(const Money rhs) {
	int amt1, amt2, resultDollars, resultCents, resultAmt;
	bool resultBool;
	//fancy logic to determine the difference, considering that the result and/or input(s) could be negative
	amt1 = 100*dollars + cents;
	if (neg) {amt1 *= -1;}
	amt2 = 100*rhs.dollars + rhs.cents;
	if (rhs.neg) {amt2 *= -1;}
	resultAmt = amt1 - amt2;
	resultBool = resultAmt < 0;
	//force it to be positive
	if (resultBool) {resultAmt *= -1;}
	resultDollars = resultAmt / 100;	
	resultCents = resultAmt % 100;
	return Money(resultDollars, resultCents, resultBool);
}
bool Money::operator==(const Money rhs) {
	int amt1, amt2;
	amt1 = 100*dollars + cents;
	if (neg) {amt1 *= -1;}
	amt2 = 100*rhs.dollars + rhs.cents;
	if (rhs.neg) {amt2 *= -1;}
	return amt1 == amt2;
}
bool Money::operator<(const Money rhs) {
	int amt1, amt2;
	amt1 = 100*dollars + cents;
	if (neg) {amt1 *= -1;}
	amt2 = 100*rhs.dollars + rhs.cents;
	if (rhs.neg) {amt2 *= -1;}
	return amt1 < amt2;
}
bool Money::operator>(const Money rhs) {
	int amt1, amt2;
	amt1 = 100*dollars + cents;
	if (neg) {amt1 *= -1;}
	amt2 = 100*rhs.dollars + rhs.cents;
	if (rhs.neg) {amt2 *= -1;}
	return amt1 > amt2;
}
bool Money::operator<=(const Money rhs) {
	return *this < rhs || *this == rhs;
}
bool Money::operator>=(const Money rhs) {
	return *this > rhs || *this == rhs;
}
bool Money::operator!=(const Money rhs) {
	return !(*this == rhs);
}

std::ostream& operator << (std::ostream& out, const Money& money){
	out << ((money.neg)?"-":"") << "$" << money.dollars << "." << std::setfill('0') << std::setw(2) << money.cents;
    return out;
}