//
// Created by Laszlo Hunor on 09.12.2021.
//
#include "Student.h"
#include <iostream>
using namespace std;


int main(){
Student student(16,"Kis","Pista");
student.addGrade("magyar",8);
student.addGrade("matek",6);
student.addGrade("roman",5);
student.computeAvarage();
cout << student;

return 0;
}
