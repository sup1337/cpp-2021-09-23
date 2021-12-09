//
// Created by Laszlo Hunor on 02.12.2021.
//

#ifndef LAB9_MANAGER_H
#define LAB9_MANAGER_H
#include "Alkalmazott.h"
#include <string>
#include <iostream>
using namespace std;

class Manager:public Alkalmazott{
private:
    const string Manager::MANAGER_MUNKAKOR="manager";
};


#endif //LAB9_MANAGER_H
