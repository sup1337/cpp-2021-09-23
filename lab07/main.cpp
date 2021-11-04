#include <iostream>
#include <sstream>
#include "Account.h"
using namespace std;
int main() {
    Account account1;
    Account account2(1000);
    Account account3(2000);

    cout << account1 << endl << account2 << endl << account3 << endl;



    return 0;
}
