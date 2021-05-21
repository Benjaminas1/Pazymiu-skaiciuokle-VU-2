#include <gtest/gtest.h>
#include "../includes/students.hpp"

TEST(StudentsClassTest, CopyConstructor){
    Students student("Jonas", "jonaitis");
    Students student2(student);
    EXPECT_EQ(student.getName(),student2.getName());
}

TEST(StudentsClassTest, FinalGradeSetGet){
    Students student("Jonas", "jonaitis");
    student.setFinalGrade(6.5);
    EXPECT_EQ(6.5,student.getFinalGrade());
}