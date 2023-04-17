#pragma once
#include <string>
using namespace std;

class Prueba
{
private:
    /* data */
public:
    static const int numero = 10;

    string getNombre()
    {
        return "Prueba";
    }

    static string getNombreEstatico()
    {
        return "Prueba";
    }
};