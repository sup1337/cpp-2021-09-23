//
// Created by Laszlo Hunor on 14.10.2021.
//

#ifndef CPP_2021_09_23_POINT_H
#define CPP_2021_09_23_POINT_H
#define M 2000

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

class Point{
private:
    int x, y;
public:
    Point( int x=0, int y=0);
    int getX() const;
    int getY() const;
    double distanceTo(const Point& point)const ;
};
#endif //CPP_2021_09_23_POINT_H
