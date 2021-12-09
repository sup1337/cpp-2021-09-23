//
// Created by Laszlo Hunor on 09.12.2021.
//

#ifndef LAB9_STUDENT_H
#define LAB9_STUDENT_H
#include <string>
#include <map>
#include <ostream>
#include <fstream>

using namespace std;

class Student {
private:


    int ID;
    std::string firstName;
    std::string lastName;
    std::map<std::string,double>grades;
    double average=0;
public:

    Student(int id, const string &firstName, const string &lastName);

    int getId() const{
        return ID;
    }

     const string & getFirstName() const;

     const string & getLastName() const;

     const map<std::string, double> & getGrades() const;

    double getAverage() const;

    void computeAvarage();

    void addGrade(string subject,double grade);

    friend ostream &operator<<(ostream &os, const Student &student);

};


#endif //LAB9_STUDENT_H
