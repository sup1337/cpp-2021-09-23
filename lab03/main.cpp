#include <iostream>
#include "List.h"

using namespace std;
int main() {
    std::cout << "Hello, lab3" << std::endl;
    List list;
    for (int i = 0; i < 10; ++i) {
        list.insertFirst(i);
        list.print();
        list.empty();
    }
    return 0;
}
