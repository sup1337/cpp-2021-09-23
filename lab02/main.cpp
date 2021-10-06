#include <iostream>
#include "Point.h"
using namespace std;
bool isSquare(Point p1, Point p2, Point p3, Point p4);
bool isSquare(Point p1, Point p2, Point p3, Point p4);
int main(int argc, char** argv) {
    Point p1(1,1);
    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    Point p2(2, 2);
    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    Point p3(3,3);
    Point p4(4,4);
    p1.print();
    cout<<isSquare(p1,p2,p3,p4);
    return 0;
}
int distSq(Point p, Point q){
    return (p.getX() - q.getX()) * (p.getX() - q.getX()) + (p.getY() - q.getY()) * (p.getY() - q.getY());
}
bool isSquare(Point p1, Point p2, Point p3, Point p4)
{
    int d2 = distSq(p1, p2);
    int d3 = distSq(p1, p3);
    int d4 = distSq(p1, p4);

    if (d2 == 0 || d3 == 0 || d4 == 0)
        return false;
    if (d2 == d3 && 2 * d2 == d4 && 2 * distSq(p2, p4) == distSq(p2, p3)) {
        return true;
    }
    if (d3 == d4 && 2 * d3 == d2&& 2 * distSq(p3, p2) == distSq(p3, p4)) {
        return true;
    }
    if (d2 == d4 && 2 * d2 == d3&& 2 * distSq(p2, p3) == distSq(p2, p4)) {
        return true;
    }

    return false;
}