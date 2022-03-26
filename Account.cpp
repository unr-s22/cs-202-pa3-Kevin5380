#include "Account.h"

using namespace std;

Account::Account(Money money){    
    balance = money;
}

void Account::makeDeposit(Money money){
    deposits.push_back(money);
    updateFlag = true;
}

void Account::makeWithdrawal(Money money){
    withdrawals.push_back(money);
    updateFlag = true;
}

ostream& operator << (std::ostream& out, const Account& account){
    out << "--------------------------" << endl;
    out << "Current Balance: " << account.balance << endl;

    out << "--------------------------" << endl;
    out << "Number of Deposits: " << account.deposits.size() << endl;
    out << "--------------------" << endl;

    for(int i = 0; i < account.deposits.size(); i++){
        out << "(" << i << ") " << account.deposits[i] << endl;
    }

    out << "--------------------------" << endl;
    out << "Number of Withdrawals: " << account.withdrawals.size() << endl;
    out << "--------------------------" << endl;

    for(int i = 0; i < account.withdrawals.size(); i++){
        out << "(" << i << ") " << account.withdrawals[i] << endl;
    }

    out << "----" << endl;

    return out;
}