#ifndef struct_H // include guard
#define struct_H

#include <vector>
#include <string>

using namespace std;

struct Students{
    string name;
    string surname;
    int homeworkQuant;
    vector<int> grades;
    int examGrade;
    double finalGrade;
};

// struct StudentsFromFile{
//     string name;
//     string surname;
//     double finalGrade;
// };

class StudentsFromFile {

private:
    string name;
    string surname;
    double finalGrade;
public:
    StudentsFromFile() : finalGrade(0) { }  // default konstruktorius
    StudentsFromFile(std::string fName,  std::string lName);
    inline std::string getName() const { return name; }    // get'eriai, inline
    inline std::string getSurname() const { return surname; }  // get'eriai, inline
    double getFinalGrade() const;// get'eriai
    void setFinalGrade(double finalGrade);
    bool comepareTwoStudents(StudentsFromFile a, StudentsFromFile b);
};

#endif