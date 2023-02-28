#include "DataProvider.h"

#pragma once
class University
{
private:
    DataProvider dataProvider;
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Subject> subjects;

    void loadStudents();
    void loadTeachers();
    void loadSubjects();
    
    void showStudents();
    void showTeachers();
    void showSubjects();

public:
    void start();
};
