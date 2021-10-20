//
// Created by Laszlo Hunor on 14.10.2021.
//

#include "Point.h"

int Point::getX() const {
    return x;
}

Point::Point(int x, int y) {
    if (x>=0 && x<M && y>=0 && y<M)
    {
        this->x=x;
        this->y=y;
    }
    else
    {
        this->x=0;
        this->y=0;
    }
}

int Point::getY() const {
    return y;
}

double Point::distanceTo(const Point &point) const {
    return sqrt((this->getX() - point.getX()) * (this->getX() - point.getX()) +
                ((this->getY() - point.getY()) * (this->getY() - point.getY())));

}