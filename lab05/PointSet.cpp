//
// Created by Laszlo Hunor on 14.10.2021.
//

#include "PointSet.h"

bool stat[M][M];

PointSet::PointSet(int n){

    this->n=n;
    points.reserve(n);
    distances.reserve(n*(n-1)/2);
    init();

    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(0, M);

    while(points.size() < n)
    {
        int x=(int)dist(mt);
        int y=(int)dist(mt);
        if (!stat[x][y])
        {
            points.emplace_back(x, y);
            stat[x][y]= true;
        }
    }
    computeDistances();
}

void PointSet::computeDistances() {
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            distances.push_back(points[i].distanceTo(points[j]));
        }
    }
}

void PointSet::printPoints() const {
    for (int i=0;i<n;i++)
    {
       cout << points[i].getX(), points[i].getY();
    }
}

int PointSet::numDistances() const {
    return n*(n-1)/2;
}

void PointSet::printDistances() const {
    int nr=numDistances();
    for (int i=0;i<nr;i++)
    {
        cout<<distances[i]<<" ";
    }
}

double PointSet::maxDistance() const {
    return *max_element(distances.begin(), distances.end());
}

double PointSet::minDistance() const {
    return *min_element(distances.begin(), distances.end());
}

void PointSet::sortPointsX() {
    sort(points.begin(), points.end(),[](const Point& a, const Point& b)
    {
        return a.getX() > b.getX();
    });
}

void PointSet::sortPointsY() {
    sort(points.begin(), points.end(),[](const Point& a, const Point& b)
    {
        return a.getY() > b.getY();
    });
}

void PointSet::sortDistances() {
    sort(distances.begin(), distances.end());
}

int PointSet::numDistinctDistances() {
    sortDistances();
    return unique(distances.begin(), distances.end()) - distances.begin();
}

void init(){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            stat[i][j] = false;
        }
    }
}
