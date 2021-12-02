//
// Created by Laszlo Hunor on 02.12.2021.
//

#ifndef LAB9_SZEMELY_H
#define LAB9_SZEMELY_H
#include <string>
#include <ostream>

using namespace std;
class Szemely {
private:
    string vezetekNev;
    string keresztNev;
    int szuletesiEV;
public:
    Szemely(const string &vezetekNev, const string &keresztNev, int szuletesiEv);

    friend ostream &operator<<(ostream &os, const Szemely &szemely);
};


#endif //LAB9_SZEMELY_H
