
//
// Created by laszlo.hunor on 10/21/2021.
//

#ifndef LAB2_MATRIX_H
#define LAB2_MATRIX_H


#include <iostream>
#include <stdexcept>

using namespace std;
class Matrix {
public:
    Matrix( int mRows, int mCols);

    virtual ~Matrix();

public:
//Methods
    void fillMatrix(double value);
    void printMatrix(ostream& os = cout) const;
    void randomMatrix(int a, int b);
    bool isSquare() const;

    int getMRows() const;

    int getMCols() const;

private:
//Data
    double ** mElements;
    int mRows; //number of rows
    int mCols; //number of columns
};

#endif //LAB2_MATRIX_H
