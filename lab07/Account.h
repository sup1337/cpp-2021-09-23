//
// Created by laszl on 10/28/2021.
//

#ifndef LAB06_ACCOUNT_H
#define LAB06_ACCOUNT_H
#include <iostream>
using namespace std;
class Account {
public:
   explicit Account(double balance=0);

    Account(int id, double balance);

    void deposit( double amount);
    bool withdraw(double amount);
    int getId() const;
    double getBalance() const;
    void print(ostream& os) const;
    friend ostream& operator<<(ostream& os, const Account& account);
private:
    static int counter;
    int id; //generated field
    double balance;
};


#endif //LAB06_ACCOUNT_H
