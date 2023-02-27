#include "University.h"
#include <iostream>
using namespace std;

void University::start()
{
    cout << "University started...\n";
    loadStudents();
    loadTeachers();

    showStudents();
    showTeachers();
}

void University::loadStudents()
{
    students = dataProvider.loadStudentsFrom("students.txt");
}

void University::loadTeachers()
{
    teachers = dataProvider.loadTeachersFrom("teachers.txt");
}

void University::showStudents()
{
    cout << "\nStudents\n";
    for (Student student : students)
    {
        cout << student.getName() << endl;
    }
}

void University::showTeachers()
{
    cout << "\nTeachers\n";
    for (Teacher teacher : teachers)
    {
        cout << teacher.getName() << endl;
    }
}
