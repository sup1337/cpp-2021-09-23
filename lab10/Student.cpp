//
// Created by Laszlo Hunor on 09.12.2021.
//
#include <iostream>
#include "Student.h"
#include <fstream>
#include <math.h>
using namespace std;

Student::Student(int id, const string &firstName, const string &lastName) : ID(id), firstName(firstName),
                                                                            lastName(lastName) {}

const std::string &Student::getFirstName() const {
    return firstName;
}

double Student::getAverage() const {
    return average;
}

const std::string &Student::getLastName() const {
    return lastName;
}

const std::map<std::string, double> &Student::getGrades() const {
    return grades;
}

void Student::computeAvarage() {
    double sum = 0;
    for (auto &p: grades) {
        if (p.second >= 5) {
            sum += p.second;
        } else{
            return;
        }
    }
    double avg = sum / grades.size();
    if (avg >=6){
        this->average= ceil(avg);
    }

}

void Student::addGrade(string subject, double grade) {
    grades.insert(make_pair(subject, grade));
}

ostream &operator<<(ostream &os, const Student &student) {
    os << "ID: " << student.ID << " firstName: " << student.firstName << " " << " lastName: " << student.lastName
       << endl;
    for (auto &index: student.grades) {
        cout << "Student grades: " << index.first << ":" << index.second << endl;
    }
    cout << "Average: " << student.average << endl;
    return os;
}







