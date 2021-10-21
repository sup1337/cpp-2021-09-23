//
// Created by Laszlo Hunor on 21.10.2021.
//

#ifndef LAB05_MATRIX_H
#define LAB05_MATRIX_H

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
    friend Matrix operator+(const Matrix& x, const Matrix& y);
private:
//Data
    double ** mElements;
    int mRows; //number of rows
    int mCols; //number of columns
};

#endif //LAB05_MATRIX_H
