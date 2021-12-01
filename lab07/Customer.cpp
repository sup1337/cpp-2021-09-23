//
// Created by Sup1 on 11/4/2021.
//

#include "Customer.h"
#include <exception>
int Customer::counter{0};
Customer::Customer(const string &firstName, const string &lastName) {
    this->firstName=firstName;
    this->lastName=lastName;
    this->id=++counter;
}

const string &Customer::getFirstName() const {
    return firstName;
}

void Customer::setFirstName(const string &firstName) {
    this->firstName=firstName;
}

const string &Customer::getLastName() const {
    return lastName;
}

void Customer::setLastName(const string &lastName) {
    this->lastName=lastName;
}

Account &Customer::getAccount(int id) {
    try {
    for (int i = 0; i <= accounts.size(); ++i) {
        return accounts[i];
         }
    }
    catch(int r){
        cout << "id didnt exissts";
    }
}

int Customer::newAccount(double balance) {
    Account account(balance);
    this->accounts.emplace_back(account);
    return account.getId();
}

bool Customer::deleteAccount(int id) {
    for(auto it=accounts.begin(); it != accounts.end(); ++it){
        if(it->getId() == id){
            accounts.erase(it);
            return true;
        }
    }
    return false;
}

int Customer::getNumAccounts() const {
    return sizeof this->accounts;
}

void Customer::print(ostream &os) const {
 os<< "id: " << id << " FirstName: "<< firstName<< " LastName: " << lastName << endl;
    for (int i = 0; i < accounts.size(); ++i) {
        cout<< "\t" << accounts[i]<< endl;
    }
}

Account &Customer::operator[](int index) {
    return accounts[index];
}

const Account &Customer::operator[](int index) const {

}

ostream &operator<<(ostream &os, const Customer &customer) {
    customer.print(os);
    return os;
}
