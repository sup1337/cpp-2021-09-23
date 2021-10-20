//
// Created by Laszlo Hunor on 14.10.2021.
//
#include <vector>
#ifndef CPP_2021_09_23_POINTSET_H
#define CPP_2021_09_23_POINTSET_H

#include "Point.h"
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>
#include <random>
#include <ctime>

using namespace std;
class PointSet{
    vector<Point> points;
    int n;
    vector<double> distances;
//segédfüggvény, amely feltölti a distances tömböt
    void computeDistances();
public:
    PointSet(int n = 100);

    double maxDistance() const;

    double minDistance() const;

    int numDistances() const;

    void printPoints() const;

    void printDistances() const;

    void sortPointsX();

    void sortPointsY();

    void sortDistances();

    int numDistinctDistances();
};

void init();

#endif //CPP_2021_09_23_POINTSET_H
