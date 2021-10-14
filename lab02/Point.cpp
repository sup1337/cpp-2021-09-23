//
// Created by Laszlo Hunor on 30.09.2021.
//

#include "Point.h"
#include "../lab04/Point.h"

#include <fstream>
using namespace std;
ifstream fin("input.txt");
Point::Point(int x, int y) {
    if (x >= 0 && x <= 2000 && y >= 0 && y <= 2000){
        this->x = x;
        this->y = y;
    } else{
        this->x = 0;
        this->y = 0;
    }
}
int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y; }


void Point::print() const{
    cout<< "("<<this->getX()<<","<< this->getY()<<")";
}


double Point::distanceTo(const Point &point) const {
    return 0;
}
