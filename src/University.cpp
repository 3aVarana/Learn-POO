#include "University.h"
#include <iostream>
using namespace std;

void University::start()
{
    cout << "University started...\n";
    loadStudents();
    loadTeachers();
    loadSubjects();

    showStudents();
    showTeachers();
    showSubjects();
}

void University::loadStudents()
{
    students = dataProvider.loadStudentsFrom("students.txt");
}

void University::loadTeachers()
{
    teachers = dataProvider.loadTeachersFrom("teachers.txt");
}

void University::loadSubjects()
{
    subjects = dataProvider.loadSubjectsFrom("subjects.txt");
}

void University::showStudents()
{
    cout << "\nStudents\n";
    for (Student student : students)
    {
        cout << student.getId() << " - " << student.getName() << endl;
    }
}

void University::showTeachers()
{
    cout << "\nTeachers\n";
    for (Teacher teacher : teachers)
    {
        cout << teacher.getId() << " - " << teacher.getName() << endl;
    }
}

void University::showSubjects()
{
    cout << "\nSubjects\n";
    for (Subject subject : subjects)
    {
        cout << subject.getCode() << " - " << subject.getClassroom() << " - " << subject.getName() << endl;
    }
}
