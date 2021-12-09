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
    map<int, Student> students; friend class GraduationInfo;
public:
    // A names.txt fájlban lévő hallgatókat beiratkoztatni az érettségire
    void enrollment(const string& filename);
    int numStudents() const { return students.size();}
// Valamely tantárgy jegyeit tartalmazó fájl beolvasása és a jegyek
// elhelyezése a megfelelő diákhoz
    void readGradesOfSubject(const string& subject, const string& filename);
    // Kiszámítja az érettségi átlagát minden diáknak
    void computeFinalGrades();
    // Visszatéríti adott azonosítójú diák jegyeit tantárgyakkal együtt
    map<string, double> getGrades( int studentID) const;
    // Sikeresen érettségizők száma
    int numPassed() const;

};


#endif //LAB10_GRADUATIONEXAM_H
