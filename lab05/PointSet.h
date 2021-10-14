//
// Created by Laszlo Hunor on 14.10.2021.
//
#include <vector>
#ifndef CPP_2021_09_23_POINTSET_H
#define CPP_2021_09_23_POINTSET_H


using namespace std;
class PointSet{ //különböző pontok vector<Point> points;//különböző pontok száma
    int n;
//pontok kozotti tavolsagok
    vector<double> distances;
//segédfüggvény, amely feltölti a distances tömböt void computeDistances();
public:
    PointSet(int n);

//konstruktor: előállítja a points tömböt
//kiszámítja a pontok közötti távolságokat (tavolsagok tömb), PointSet( int n = 100 );
//maximum kiválasztás a tavolsag tömbből
    double maxDistance() const;
//minimum kiválasztás a tavolsag tömbből
    double minDistance() const;
//összesen hány távolság értelmezhető n
//különböző pont között
    int numDistances() const;
//a pontok tároló kiíratása
    void printPoints() const;
//a tavolsagok tároló kiíratása
    void printDistances() const;
//növekvő sorrendbe rendezi a pontokat x koordináta szerint void sortPointsX();
//u. a. y koordináta szerint
    void sortPointsY();
//a tavolsagok tároló rendezése
    void sortDistances();
//hány darab különböző távolságot tartalmaz a tavolsagok tömb int numDistinctDistances();
    int numDistinctDistances();
};


#endif //CPP_2021_09_23_POINTSET_H
