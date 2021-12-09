//
// Created by Laszlo Hunor on 02.12.2021.
//

#include "Szemely.h"

Szemely::Szemely(const string &vezetekNev, const string &keresztNev, int szuletesiEv) : vezetekNev(vezetekNev),
                                                                                      keresztNev(keresztNev),
                                                                                      szuletesiEV(szuletesiEv) {
    this->keresztNev=keresztNev;
    this->szuletesiEV=szuletesiEv;
    this->vezetekNev=vezetekNev;
}

ostream &operator<<(ostream &os, const Szemely &szemely) {
    szemely.print(os);
    return os;
}

void Szemely::print(ostream &os) const {
    os << "vezetekNev: " << this->vezetekNev<< " keresztNev: " << this->keresztNev << " szuletesiEV: "
       << this->szuletesiEV;

}
