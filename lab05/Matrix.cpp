//
// Created by laszlo.hunor on 10/21/2021.
//
#include <ctime>
#include "Matrix.h"

Matrix::Matrix( int mRows, int mCols) : mElements(mElements), mRows(mRows), mCols(mCols) {
    this->mRows=mRows;
    this->mCols=mCols;
    mElements=new double *[mRows];
    for (int i = 0; i < mRows; ++i) {
        mElements[i]=new double [mCols];
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < mRows; ++i) {
        delete []mElements[i];
    }
    delete[]mElements;
}

void Matrix::fillMatrix(double value) {
    for (int i = 0; i < mRows; ++i) {
        for (int j = 0; j < mCols; ++j) {
            mElements[i][j]=value;
        }
    }
}

void Matrix::printMatrix(ostream &os) const {
    for (int i = 0; i < mRows ;++i) {
        for (int j = 0; j <mCols ; ++j) {
            os<<mElements[i][j];
            cout<<mElements[i][j] << " ";
        }
    }
    cout<< endl;
}

void Matrix::randomMatrix(int a, int b) {
    srand(time(NULL));
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            mElements[i][j]=rand()%10;
        }
    }
}

bool Matrix::isSquare() const {
    if (mRows == mCols){
        return true;
    }
    else{return false;}
}

int Matrix::getMRows() const {
    return mRows;
}

int Matrix::getMCols() const {
    return mCols;
}

Matrix operator+(const Matrix &x, const Matrix &y) {
    if (x.mRows!=y.mRows || x.mCols!=y.mCols) {
        throw out_of_range("out of range");
    } else{
        for (int i = 0; i < x.mRows; ++i) {
            for (int j = 0; j < x.mCols; ++j) {
                x.mElements[i][j]+=y.mElements[i][j];
            }
        }
    }
}