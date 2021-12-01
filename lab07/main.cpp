#include <iostream>
#include <sstream>
#include "Account.h"
#include "Customer.h"
using namespace std;
int main() {
    Account account1;
    Account account2(1000);
    Account account3(2000);
    cout << account1 << endl << account2 << endl << account3 << endl;
    Customer customer1("Kiss","Zoltan");
    cout << customer1<< endl;
    customer1.newAccount(1000);
    customer1.newAccount(2000);
    cout << customer1<< endl;

    return 0;
}
