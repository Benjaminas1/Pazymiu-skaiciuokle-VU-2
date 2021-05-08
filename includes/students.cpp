#include <vector>
#include <string>
#include "students.hpp"

using namespace std;

// Studentas::galBalas realizacija
double StudentsFromFile::getFinalGrade() const {
    return finalGrade;
}

void StudentsFromFile::setFinalGrade(double finalGrade){
    this->finalGrade = finalGrade;
}

// Ne Studentas member funkcija, bet dirba su Studentas objektais, todėl realizacija čia
bool comepareTwoStudents(StudentsFromFile a, StudentsFromFile b){
    if(a.getName()<b.getName()) return true;
    else return false;
}

StudentsFromFile::StudentsFromFile(std::string name,  std::string surname){
    this->name = name;
    this->surname = surname;
}

StudentsFromFile StudentsFromFile::operator=(const StudentsFromFile& fromStud) { // priskyrimo operatorius
    // Savęs priskyrimo aptikimas
    if (&fromStud == this) return *this;

    this->name = fromStud.name;
    this->surname = fromStud.surname;
    this->finalGrade = fromStud.finalGrade;

    return *this;
}

StudentsFromFile::StudentsFromFile(const StudentsFromFile& fromStud){ // kopijavimo
    this->name = fromStud.name;
    this->surname = fromStud.surname;
    this->finalGrade = fromStud.finalGrade;
}