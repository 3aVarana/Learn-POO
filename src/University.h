#include "Student.h"
#include "Teacher.h"
#include "DataProvider.h"

#pragma once
class University
{
private:
    DataProvider dataProvider;
    vector<Student> students;
    vector<Teacher> teachers;

    void loadStudents();
    void loadTeachers();
    void showStudents();
    void showTeachers();

public:
    void start();
};
