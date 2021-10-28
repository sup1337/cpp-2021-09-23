//
// Created by laszl on 10/28/2021.
//

#include "Polynomial.h"

Polynomial::Polynomial(int degree, const double *coefficients) {

    this->capacity = degree+1;
    this->coefficients = new double [this->capacity];
    for(int i = 0;i < this->capacity;++i){
        this->coefficients[i] = coefficients[i];
    }
}

ostream &operator<<(ostream &out, const Polynomial &what) {
    for(int i = 0;i < what.capacity; ++i){
        out << what.coefficients[i] <<' ';
    }
    return out;
}

Polynomial::Polynomial(const Polynomial &that) {
    this->capacity = that.capacity;
    this->coefficients = new double[this->capacity];
    for (int i = 0; i < this->capacity; i++) {
        this->coefficients[i] = that.coefficients[i];
    }
}

Polynomial::Polynomial(Polynomial &&that) {

}

Polynomial::~Polynomial() {
    for (int i = 0; i < this->capacity; ++i) {
        this->coefficients[i]=NULL;
        delete[] this->coefficients;
    }
    this->capacity=NULL;
    delete[] this->coefficients;
}

int Polynomial::degree() const {
    return 0;
}

double Polynomial::evaluate(double x) const {

    return 0;
}

Polynomial Polynomial::derivative() const {

    return Polynomial(0, nullptr);
}

double Polynomial::operator[](int index) const {
    return 0;
}

Polynomial operator-(const Polynomial &a) {
    return Polynomial(0, nullptr);
}

Polynomial operator+(const Polynomial &a, const Polynomial &b) {
    return Polynomial(0, nullptr);
}

Polynomial operator-(const Polynomial &a, const Polynomial &b) {
    return Polynomial(0, nullptr);
}

Polynomial operator*(const Polynomial &a, const Polynomial &b) {

    return Polynomial(0, nullptr);
}
