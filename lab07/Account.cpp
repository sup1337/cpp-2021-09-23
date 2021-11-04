//
// Created by laszl on 10/28/2021.
//
#include "Account.h"
int Account::counter{0};


Account::Account(double balance) {
if(balance >= 0){
    this->balance=balance;
} else{
    this->balance=0;
}
    this->id=++counter;
}

Account::Account(int id, double balance) {

}

void Account::deposit(double amount) {
    if (balance>0)
    this->balance+=amount;
}

bool Account::withdraw(double amount) {
    if (amount<=balance){
        this->balance-=amount;
        return true;
    }
    return false;
}

int Account::getId() const {
    return this->id;
}

double Account::getBalance() const {
    return this->balance;
}

void Account::print(ostream &os) const {
    os<<"ID: "<<id<<"\t"<<"Balance: "<<balance;
}
ostream& operator<<(ostream& os, const Account& account) {
    account.print(os);
    return os;
}

