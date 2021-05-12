#ifndef struct_H // include guard
#define struct_H

#include <vector>
#include <string>

using namespace std;

// Students struct for main.cpp manual input
struct StudentsManual{
    string name;
    string surname;
    int homeworkQuant;
    vector<int> grades;
    int examGrade;
    double finalGrade;
};

// class Students {
// private:
//     string name;
//     string surname;
//     double finalGrade;
// public:
//     Students() : finalGrade(0) { }  // default konstruktorius
//     Students(const Students& fromStud); // copy konstruktorius
//     Students(std::string fName,  std::string lName);
//     inline std::string getName() const { return name; }    // get'eriai, inline
//     inline std::string getSurname() const { return surname; }  // get'eriai, inline
//     double getFinalGrade() const;// get'eriai
//     void setFinalGrade(double finalGrade);
//     bool comepareTwoStudents(Students a, Students b);
//     Students operator=(const Students& fromStud); // assign operatorius
//     ~Students(){}; // destruktorius
// };


class Person {
protected:
    string name;
    string surname;
public:
    inline std::string getName() const { return name; }    // get'eriai, inline
    inline std::string getSurname() const { return surname; }  // get'eriai, inline
    virtual void AbstractMemberFunction() = 0;
};

class Students : public Person {
private:
    double finalGrade;
public:
    Students() : finalGrade(0) { }  // default konstruktorius
    Students(const Students& fromStud); // copy konstruktorius
    Students(std::string fName,  std::string lName);
    double getFinalGrade() const;// get'eriai
    void setFinalGrade(double finalGrade);
    bool comepareTwoStudents(Students a, Students b);
    Students operator=(const Students& fromStud); // assign operatorius
    ~Students(){}; // destruktorius
    virtual void AbstractMemberFunction() {};
};

#endif