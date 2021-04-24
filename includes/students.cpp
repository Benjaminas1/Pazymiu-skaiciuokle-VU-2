#include <vector>
#include <string>
#include "students.hpp"

using namespace std;


// struct StudentsFromFile{
//     string name;
//     string surname;
//     double finalGrade;
// };

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