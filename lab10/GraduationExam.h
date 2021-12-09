//
// Created by Laszlo Hunor on 09.12.2021.
//

#ifndef LAB10_GRADUATIONEXAM_H
#define LAB10_GRADUATIONEXAM_H
#include <iostream>
#include <map>
#include "Student.h"
#include <string>
using namespace std;
class GraduationExam {
private:
    int year;
    map<int,Student>students;
public:
    void enrollment(string&);
    int numStudents();
    void readGradesOfSubject();

};


#endif //LAB10_GRADUATIONEXAM_H
