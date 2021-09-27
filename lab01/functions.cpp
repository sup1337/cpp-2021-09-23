//
// Created by laszlo.hunor on 9/23/2021.
//
#include <iostream>
#include "functions.h"
#include<cmath>
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
double mean(double array[],int numElements){
    double finalElements=0;
    for (int i = 0; i < numElements; ++i) {
        finalElements+=array[i];
    }
    finalElements=finalElements/numElements;
    if (numElements!=0)
    return finalElements;
    else{
        return NAN;
    }
}
    double stddev(double array[],int numElements) {
    if(numElements==0)
    {return NAN;}
    else{

        float sum = 0, standardDeviation = 0.0;

        double mean1=mean(array, numElements);

        for(int i = 0; i < numElements; ++i) {
            standardDeviation += pow(array[i] - mean1, 2);
        }

        return sqrt(standardDeviation / numElements);

    }
}
std::pair<double ,double>max2(double array[],int numElements) {
    std::pair<double, double> pair1;
    if (numElements == 0) {
        pair1.first = NAN;
        pair1.second = NAN;
        return pair1;
    } else {
        if (numElements == 1) {
            pair1.first = pair1.second = array[0];
        } else {
            if (array[0] < array[1]) {
                pair1.first = array[0];
                pair1.second = array[1];
            } else {
                pair1.first = array[1];
                pair1.second = array[0];
            }

            for (int i = 2; i < numElements; ++i) {
                if (array[i] > pair1.first) {
                    if (array[i] > pair1.second) {
                        pair1.first = pair1.second;
                        pair1.second = array[i];
                    }
                }

            }
        }
    }
    return pair1;
}