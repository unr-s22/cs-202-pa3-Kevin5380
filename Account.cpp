#include "Account.h"

using namespace std;

Account::Account(Money money){    
    balance = money;
}

Money Account::getBalance(){
    for(depositIndex; depositIndex < deposits.size(); depositIndex++){
        balance + deposits[depositIndex];
    }

    for(withdrawalIndex; withdrawalIndex < withdrawals.size(); withdrawalIndex++){
        balance - deposits[withdrawalIndex];
    }

    return balance;
}

void Account::makeDeposit(Money money){
    deposits.push_back(money);
}
void Account::makeWithdrawal(Money money){
    withdrawals.push_back(money);
}

ostream& operator << (std::ostream& out, Account& account){
    out << "--------------------------" << endl;
    out << "Current Balance: " << account.getBalance() << endl;

    out << "--------------------------" << endl;
    out << "Number of Deposits: " << account.deposits.size() << endl;
    out << "--------------------" << endl;

    for(int i = 0; i < account.deposits.size(); i++){
        out << "(" << (i + 1) << ") " << account.deposits[i] << endl;
    }

    out << "--------------------------" << endl;
    out << "Number of Withdrawals: " << account.withdrawals.size() << endl;
    out << "--------------------------" << endl;

    for(int i = 0; i < account.withdrawals.size(); i++){
        out << "(" << (i + 1) << ") " << account.withdrawals[i] << endl;
    }

    out << "----" << endl;

    return out;
}