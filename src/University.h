#include <iostream>
#include "DataProvider.h"

#pragma once
class University
{
private:
    DataProvider dataProvider;
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Subject> subjects;

    void loadStudents()
    {
        students = dataProvider.loadStudents();
    }
    void loadTeachers()
    {
        teachers = dataProvider.loadTeachers();
    }
    void loadSubjects()
    {
        subjects = dataProvider.loadSubjects();
    }

    void showStudents()
    {
        cout << "\nStudents\n";
        for (Student student : students)
        {
            cout << student.getId() << " - " << student.getName() << endl;
        }
    }
    void showTeachers()
    {
        cout << "\nTeachers\n";
        for (Teacher teacher : teachers)
        {
            cout << teacher.getId() << " - " << teacher.getName() << endl;
        }
    }
    void showSubjects()
    {
        cout << "\nSubjects\n";
        for (Subject subject : subjects)
        {
            cout << subject.getCode() << " - " << subject.getClassroom() << " - " << subject.getName() << endl;
        }
    }

public:
    void start()
    {
        cout << "University started...\n";
        loadStudents();
        loadTeachers();
        loadSubjects();

        showStudents();
        showTeachers();
        showSubjects();
    }

    ~University()
    {
        for (Subject subject : subjects)
        {
            subject.freeClassroomMemory();
        }
    }
};
