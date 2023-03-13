#pragma once

#include <string>
using namespace std;

#include "Person.h"

enum TeacherType
{
    horario,
    medioTiempo,
    tiempoCompleto
};

class Teacher : public Person
{
private:
    TeacherType type;

public:
    Teacher(int id, string name) : Person(id, name)
    {
        this->type = TeacherType::horario;
    }

    TeacherType getType()
    {
        return type;
    }
};
