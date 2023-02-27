#include "University.h"
#include <iostream>
using namespace std;

void University::start()
{
    loadStudents();
    loadTeachers();
}

void University::loadStudents()
{
    vector<Student> students = dataProvider.loadStudentsFrom("students.txt");
    cout << "\nStudents\n";
    for (Student student : students)
    {
        cout << student.getName() << endl;
    }
}

void University::loadTeachers()
{
    vector<Teacher> teachers = dataProvider.loadTeachersFrom("teachers.txt");
    cout << "\nTeachers\n";
    for (Teacher teacher : teachers)
    {
        cout << teacher.getName() << endl;
    }
}