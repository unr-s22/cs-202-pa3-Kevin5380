#include "Account.h"
#include "Money.h"
#include <iostream>

using namespace std;

int main(){
	Account account(Money(300, 23));

    cout << account << endl;
	
    account.makeDeposit(Money(200, 00));
    account.makeDeposit(Money(300, 24));
    account.makeDeposit(Money(501, 12));

    cout << account << endl;

    account.makeWithdrawal(Money(300, 10));
    account.makeWithdrawal(Money(201, 34));

    cout << account << endl;

    
    
	//testing that Money class works
	Money m1(100,25, false);
	Money m2(100,26, true);
	Money m3(50,3);
	Money m4(100, 20);
	Money m5(1,2);

	//+ tests
	std::cout << "Addition test with two positive values:" << Money(20, 3) + Money(3, 99) << std::endl;
	std::cout << "Addition test with one negative value and a positive result: " << Money(20, 3) + Money(3, 99, true) << std::endl;
	std::cout << "Addition test with one negative value and a negative result: " << Money(20, 3, true) + Money(3, 99) << std::endl;
	std::cout << "Addition test with two negative values and a negative result: " << Money(20, 3, true) + Money(3, 99, true) << std::endl;

	//- tests
	std::cout << "Subtraction test with two positive values:" << Money(100, 40) - Money(20, 50) << std::endl;
	std::cout << "Subtraction test with one negative value and a positive result: " << Money(100, 40) - Money(200, 20, true) << std::endl;
	std::cout << "Subtraction test with one negative value and a negative result: " << Money(20, 3) - Money(3, 99, true) << std::endl;
	std::cout << "Subtraction test with two negative values: " << Money(20, 3, true) - Money(3, 99, true) << std::endl;

	//== tests
	std::cout << "Equal to (true): " << (Money(100,10, false) == Money(100,10)) << std::endl;
	std::cout << "Equal to (false): " << (Money(50,60, false) == Money(50,60,true)) << std::endl;

	//> tests
	std::cout << "Greater than (true): " << (Money(10, 10, false) > Money(20, 5, true)) << std::endl;
	std::cout << "Greater than (false): " << (Money(3,33) > Money(4,99)) << std::endl;

	//< tests
	std::cout << "Less than (true): " << (Money(6,98) < Money(10,95)) << std::endl;
	std::cout << "Less than (false): " << (Money(499,0) < Money(499,0)) << std::endl;

	//>= tests
	std::cout << "Greater than or equal to (true): " << (Money(1,99) >= Money(999,99, true)) << std::endl;
	std::cout << "Greater than or equal to (true): " << (Money(30,40, true) >= Money(30,40,true)) << std::endl;
	std::cout << "Greater than or equal to (false): " << (Money(29,50, true) >= Money(20,40,true)) << std::endl;

	//<= tests
	std::cout << "Less than or equal to (true): " << (Money(30, 30) <= Money(50,30)) << std::endl;
	std::cout << "Less than or equal to (true): " << (Money(40,0) <= Money(40,0)) << std::endl;
	std::cout << "Less than or equal to (false): " << (Money(60,0) <= Money()) << std::endl;

	return 0;
}