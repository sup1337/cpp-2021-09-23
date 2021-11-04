//
// Created by Sup1 on 11/4/2021.
//

#include "Customer.h"
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
    for (int i = 0; i = id; ++i) {

    }
    return Customer ;
}

int Customer::newAccount(double balance) {
    return 0;
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
 os << "FirstName: "<< firstName<< "LastName: " << lastName << "id: " << id << endl;
}

Account &Customer::operator[](int index) {
    return accounts[index];
}

const Account &Customer::operator[](int index) const {

}
