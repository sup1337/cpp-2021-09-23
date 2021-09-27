//
// Created by laszlo.hunor on 9/23/2021.
//
#include <iostream>
#include "functions.h"
int countBits( int number) {
    int count = 0;
    while (number!=0) {
        if(number&1==1)
        count ++;
        number>>=1;
    }
    return count;
}
bool setBits(int& number , int order){
    if(order>0&&order<31){
        int counter=0;
        while (counter!=order){
            number=number>>1;
            ++counter;
        }
        number=number|(1<<order);
        std::cout<< "returned number is:" << number <<std::endl;
        return true;
    } else{
        return false;
    }

}
