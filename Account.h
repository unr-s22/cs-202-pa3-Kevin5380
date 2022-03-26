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
    public:
        Account(Money money);

        void makeDeposit(Money money);
        void makeWithdrawal(Money money);

        Money getBalance();

        friend std::ostream& operator << (std::ostream& out, Account& account);
};

#endif // ACCOUNT_H