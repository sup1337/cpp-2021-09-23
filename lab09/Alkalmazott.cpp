//
// Created by Laszlo Hunor on 02.12.2021.
//

#include "Alkalmazott.h"


using namespace std;
int Alkalmazott::counter=0;

int Alkalmazott::getId() const {
    return id;
}

Alkalmazott::Alkalmazott(const string &vezetekNev, const string &keresztNev, int szuletesiEv, const string &munkakor,
                         int id) : Szemely(vezetekNev, keresztNev, szuletesiEv), munkakor(munkakor), id(counter++) {}

ostream &operator<<(ostream &os, const Alkalmazott &alkalmazott) {
    alkalmazott.print(os);
    return os;
}

void Alkalmazott::print(ostream &os) const {
    Szemely::print(os);
    os  << " munkakor: " << this->munkakor << " id: "
       << this->getId();

}
