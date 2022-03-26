#include <iostream>
#include <vector>

#include "Money.h"

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
    private:
        Money balance;

        int depositIndex = 0;
        int withdrawalIndex = 0;

        std::vector<Money> deposits;
        std::vector<Money> withdrawals;

        bool updateFlag = false;
    public:
        Account(Money money);

        void makeDeposit(Money money);
        void makeWithdrawal(Money money);

        friend std::ostream& operator << (std::ostream& out, const Account& account);
};

#endif // ACCOUNT_H