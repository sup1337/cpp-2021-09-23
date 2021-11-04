//
// Created by laszl on 10/28/2021.
//
#include "Polynomial.h"
#include <iostream>

int main(){
    double c1[]{1,2,3};
    double c2[]{3,2,1};
    Polynomial p1(2,c1);
    Polynomial p2(2,c2);
    cout << p1<< endl;
    cout << p1.degree()<< endl;
    cout << p1.evaluate(3)<< endl;
    cout << p1.derivative()<< endl;
    cout << p1.operator[](2) << endl;
    cout << operator+(p1,p2)<< endl;
    cout << operator-(p1,p2)<< endl;
    return 0;
}
