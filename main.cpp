#include "Account.h"
#include "Money.h"
#include <iostream>

int main() {
	//testing that Money class works
	//TODO: clean this up
	Money m1(100,25);
	Money m2(50,3);
	Money m3(50,3);
	Money m4(100, 20);
	Money m5(1,2);
	std::cout << "Addition should return a value: " << m1+m2 << std::endl;
	std::cout << "Subtraction should return a value: " << m1-m2 << std::endl;
	std::cout << "Subtraction should return a value: " << m4-m1 << std::endl;
	std::cout << "Greater than (true): " << (m1 > m2) << std::endl;
	std::cout << "Greater than (false): " << (m2 > m3) << std::endl;
	std::cout << "Less than (false): " << (m1 < m2) << std::endl;
	std::cout << "Less than (false): " << (m2 < m3) << std::endl;
	std::cout << "Greater than or equal to (true): " << (m1 >= m2) << std::endl;
	//NOTE:
	std::cout << "Greater than or equal to (true): " << (m2 >= m3) << std::endl;
	std::cout << "Less than or equal to (false): " << (m1 <= m2) << std::endl;
	std::cout << "Less than or equal to (true): " << (m2 <= m3) << std::endl;
	return 0;
}