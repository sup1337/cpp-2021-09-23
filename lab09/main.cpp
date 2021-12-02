//
// Created by Laszlo Hunor on 02.12.2021.
//
#include <iostream>
#include "Szemely.h"
#include "Alkalmazott.h"
using namespace std;
int main(){
    Szemely szemely1("Kelemen","Laszlo",1999);
    cout<<szemely1;
    cout<<endl;
    szemely1.print();
    cout<<endl;
    Alkalmazott alkalmazott1("Kis","Pista",1999,"beszerzo",alkalmazott1.getId());
    alkalmazott1.print();
    return 0;
}
