#include <iostream>
#include "Point.h"
using namespace std;
Point* createArray(int numPoints);
double distance(const Point& p1, const Point& p2);
bool isSquare(Point p1, Point p2, Point p3, Point p4);
bool isSquare(Point p1, Point p2, Point p3, Point p4);
void printArray(Point* points, int numPoints);
pair<Point,Point> closestPoints(Point *array,int numPoints);
int main(int argc, char** argv) {
    Point p1(1,1);
    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    Point p2(2, 2);
    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    Point p3(3,3);
    Point p4(4,4);
    p1.print();
    cout<<isSquare(p1,p2,p3,p4)<<endl;
    Point * points;
    int numPoints ;
    cin >> numPoints;
    points=createArray(numPoints);
    printArray(points,numPoints);
    cout << endl << "closestr points" << closestPoints(points,numPoints).first.getX()<< " , "<<closestPoints(points,numPoints).first.getY() << " 5";
    cout << closestPoints(points,numPoints).second.getX()<< " , "<<closestPoints(points,numPoints).second.getY();

    return 0;
}
double distance(const Point& p1, const Point& p2){
    return sqrt(pow(p1.getX()- p2.getX(), 2) +
                pow(p2.getY() - p2.getY(), 2) * 1.0);
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

Point* createArray(int numPoints){
    srand(time(NULL));
    Point * points = new Point[numPoints];
    for(int i=0; i<numPoints; i++)
    {
        points[i]=Point(rand()%2000, rand()%2000);
    }
    cout<<endl;
    return points;
}
void printArray(Point* points, int numPoints)
{
    cout<<"Array:{";
    for(int i=0; i<numPoints; i++)
    {
        cout<<"("<<points[i].getX()<<", "<<points[i].getY()<<")"<<"; ";
    }
    cout<<" }";
}
pair<Point,Point> closestPoints(Point *array,int numPoints){
    pair<Point,Point>pair1;
    pair1.first=array[0].getX(),array[0].getY();
    pair1.second=array[1].getX(),array[1].getY();
    for (int i = 1; i < numPoints; ++i) {
        for (int j = i+1; j < numPoints; ++j) {
            if (distance(array[i],array[j])< distance(pair1.first,pair1.second)){
                pair1.first=array[i].getX(),array[i].getY();
                pair1.second=array[j].getX(),array[j].getY();
            }
        }
    }
    return pair1;
}