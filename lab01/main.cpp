#include <iostream>
#include "functions.h"

int main() {
    std::cout << (countBits(127));
    for (int i = 0; i < 35; ++i) {
        int number = 0;
        if (setBits(number,i)){
            std::cout<<i<<"--->"<<number<<std::endl;
        } else{
            std::cout<<"Impossible Operation"<<std::endl;
        }
    }
    return 0;
}
