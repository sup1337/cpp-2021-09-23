//
// Created by laszlo.hunor on 9/23/2021.
//
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

}
