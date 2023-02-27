#include <iostream>
#include "Application.h"
#include "DataProvider.h"
using namespace std;

void Application::run()
{
    DataProvider dataProvider;

    vector<Student> students = dataProvider.loadStudentsFrom("students.txt");
    cout << "\nStudents\n";
    for (Student student : students)
    {
        cout << student.getName() << endl;
    }

    vector<Teacher> teachers = dataProvider.loadTeachersFrom("teachers.txt");
    cout << "\nTeachers\n";
    for (Teacher teacher : teachers)
    {
        cout << teacher.getName() << endl;
    }
}