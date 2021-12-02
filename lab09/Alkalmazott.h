//
// Created by Laszlo Hunor on 02.12.2021.
//

#ifndef LAB9_ALKALMAZOTT_H
#define LAB9_ALKALMAZOTT_H
#include <string>
#include <ostream>
#include "Szemely.h"
using namespace std;
class Alkalmazott: public Szemely{
private:
    string munkakor;
    static int counter;
protected:
    int id;

public:
    Alkalmazott(const string &vezetekNev, const string &keresztNev, int szuletesiEv, const string &munkakor, int id);

    int getId() const;
    virtual void print(ostream& os=cout)const;
    friend ostream &operator<<(ostream &os, const Alkalmazott &alkalmazott);
};



#endif //LAB9_ALKALMAZOTT_H
