#include <iostream>
#include "Iberia.h"
#include "Prueba.h"
using namespace std;

void testStatics()
{
    Prueba p;
    cout << p.getNombre() << endl;
    cout << Prueba::getNombreEstatico() << endl;
    cout << Prueba::numero << endl;
}

void testDowncasting()
{
    vector<Flight *> flights;
    flights.push_back(new Commercial("Cocha", "La Paz", "04/16/2023 14:00", "04/16/2023 16:00", 415.15, nullptr, 300));
    flights.push_back(new Commercial("Cocha", "La Paz", "04/17/2023 14:00", "04/17/2023 16:00", 415.15, nullptr, 400));

    flights.push_back(new Cargo("Cocha", "Santa Cruz", "04/19/2023 12:00", "04/19/2023 14:00", 455.15, nullptr));
    flights.push_back(new Cargo("Cocha", "Santa Cruz", "04/20/2023 14:00", "04/20/2023 16:00", 455.15, nullptr));

    for (Flight *f : flights)
    {
        if (f->getType() == FlightType::commercial)
        {
            Commercial *c = (Commercial *)f;
            cout << c->getCabinCrewNumber() << endl;
            cout << c->getTicketCost() << endl;
        }
    }

    for (Flight *f : flights)
    {
        delete f;
    }
}

int main()
{
    Iberia iberia;
    iberia.showMenu();

    // testStatics();

    // testDowncasting();

    return 0;
}