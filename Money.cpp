#include "Money.h"
//parameterized constructor
Money::Money(int newDollars, int newCents) {
	dollars = newDollars;
	cents = newCents;
}
//destructor
Money::~Money() {}
//operator overloads
//TODO: <<, >>
float Money::operator+(const Money rhs) {
	float amt1 = float(dollars) + 0.01*float(cents);
	float amt2 = float(rhs.dollars) + 0.01*float(rhs.cents);
	return amt1 + amt2;
}
//TODO: round off the value to 2 decimal places
float Money::operator-(const Money rhs) {
	float amt1 = float(dollars) + 0.01*float(cents);
	float amt2 = float(rhs.dollars) + 0.01*float(rhs.cents);
	return amt1 - amt2;
}
bool Money::operator==(const Money rhs) {
	float amt1 = float(dollars) + 0.01*float(cents);
	float amt2 = float(rhs.dollars) + 0.01*float(rhs.cents);
	if (amt1 == amt2) {
		return true;
	}
	else {
		return false;
	}
}
bool Money::operator<(const Money rhs) {
	float amt1 = float(dollars) + 0.01*float(cents);
	float amt2 = float(rhs.dollars) + 0.01*float(rhs.cents);
	if (amt1 < amt2) {
		return true;
	}
	else {
		return false;
	}
}
bool Money::operator>(const Money rhs) {
	float amt1 = float(dollars) + 0.01*float(cents);
	float amt2 = float(rhs.dollars) + 0.01*float(rhs.cents);
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