//
// Created by Laszlo Hunor on 30.09.2021.
//

#include "Point.h"
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
double distance(const Point& p1, const Point& p2){
    return sqrt(pow(p1.getX()- p2.getX(), 2) +
                pow(p2.getY() - p2.getY(), 2) * 1.0);
}

void testIsSquare(const char * filename){

}