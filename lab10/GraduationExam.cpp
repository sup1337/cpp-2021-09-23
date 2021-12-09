//
// Created by Laszlo Hunor on 09.12.2021.
//
#include "GraduationExam.h"
#include <iostream>
#include <fstream>

using namespace std;


void GraduationExam::enrollment(const string &filename) {
    try {

    }catch(...){
        cout<<"file not found" << "\n";
        }
    }


void GraduationExam::readGradesOfSubject(const string &subject, const string &filename) {

}

void GraduationExam::computeFinalGrades() {

}

map<string, double> GraduationExam::getGrades(int studentID) const {
    return map<string, double>();
}

int GraduationExam::numPassed() const {
    return 0;
}


