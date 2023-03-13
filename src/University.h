#include <iostream>
#include <stdlib.h>
#include "DataProvider.h"

#pragma once
class University
{
private:
    DataProvider dataProvider;
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Subject> subjects;

    void loadData()
    {
        loadStudents();
        loadTeachers();
        loadSubjects();
    }

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

    void addNewTeacher()
    {
        int id;
        string name;
        cout << "Enter ID\n";
        cin >> id;
        cout << "Enter teacher's name\n";
        cin >> name;
        Teacher newTeacher(id, name);
        teachers.push_back(newTeacher);
    }

    void saveData()
    {
        dataProvider.saveTeachers(teachers);
    }

public:
    void start()
    {
        loadData();

        int option;
        char aux;
        do
        {
            system("clear");
            cout << "University\n";
            cout << "1. Show teachers\n";
            cout << "2. Show students\n";
            cout << "3. Show subjects\n";

            cout << "4. Add new teacher\n";

            cout << "10. Save Data\n";
            cout << "0. Salir\n";
            cin >> option;

            switch (option)
            {
            case 1:
                showTeachers();
                break;

            case 2:
                showStudents();
                break;

            case 3:
                showSubjects();
                break;

            case 4:
                addNewTeacher();
                break;

            case 10:
                saveData();
                break;

            default:
                cout << "Invalid option\n";
                break;
            }
            if (option != 0)
            {
                cin >> aux;
            }

        } while (option != 0);
    }

    ~University()
    {
        for (Subject subject : subjects)
        {
            subject.freeClassroomMemory();
        }
    }
};
