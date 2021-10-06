//
// Created by Laszlo Hunor on 30.09.2021.
//

#ifndef LAB1_POINT_H
#define LAB1_POINT_H
#include <iostream>
#include <math.h>
using namespace std;

class Point{
private:int x, y;
public:
    Point( int x=0, int y=0);
    int getX() const;
    int getY() const;
    void print() const;
    int distSq(Point p, Point q);
    bool isSquare(Point p1, Point p2, Point p3, Point p4);
    void testIsSquare(const char * filename);
    Point* createArray(int numPoints);

};


#endif //LAB1_POINT_H
