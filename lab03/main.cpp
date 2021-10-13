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
    cout<<"list size "<<list.size()<<endl;
    list.insertFirst(11);
    list.print();
    list.removeFirst();
    list.print();
    list.remove(11);
    list.print();
    return 0;
}
