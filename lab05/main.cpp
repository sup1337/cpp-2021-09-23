//
// Created by Laszlo Hunor on 20.10.2021.
//
#include <iostream>
#include "Matrix.h"
#include <fstream>
using namespace std;
int main() {
    Matrix m1(3,3);
    m1.fillMatrix(2);
    ofstream ofs("matrix.txt");
    m1.printMatrix(ofs);
    cout<<endl;
    Matrix m2(3,3);
    m2.randomMatrix(3,4);
    m2.printMatrix(ofs);
    cout<<endl<<m2.isSquare();
    operator+(m1,m2).printMatrix();
        return 0;
}