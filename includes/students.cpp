#include <vector>
#include <string>
#include "students.hpp"

using namespace std;

// Studentas::galBalas realizacija
double Students::getFinalGrade() const {
    return finalGrade;
}

void Students::setFinalGrade(double finalGrade){
    this->finalGrade = finalGrade;
}

// Ne Studentas member funkcija, bet dirba su Studentas objektais, todėl realizacija čia
bool comepareTwoStudents(Students a, Students b){
    if(a.getName()<b.getName()) return true;
    else return false;
}

Students::Students(std::string name,  std::string surname){
    this->name = name;
    this->surname = surname;
}

Students Students::operator=(const Students& fromStud) { // priskyrimo operatorius
    // Savęs priskyrimo aptikimas
    if (&fromStud == this) return *this;

    this->name = fromStud.name;
    this->surname = fromStud.surname;
    this->finalGrade = fromStud.finalGrade;

    return *this;
}

Students::Students(const Students& fromStud){ // kopijavimo
    this->name = fromStud.name;
    this->surname = fromStud.surname;
    this->finalGrade = fromStud.finalGrade;
}