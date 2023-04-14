#pragma once
#include <vector>
#include "Pilot.h"
#include "CrewMember.h"
#include "Passenger.h"
#include "Flight.h"
#include "Commercial.h"
#include "Airplane.h"
#include <iostream>
using namespace std;

class Iberia
{
private:
    vector<Pilot *> pilots;
    vector<CrewMember *> crewMembers;
    vector<Passenger *> passengers;
    vector<Airplane *> airplanes;
    vector<Flight *> flights;

public:
    void showMenu()
    {
    }

    void addNewPilot()
    {
        // cin>> atributos
        // Pilot *p = new Pilot(a, b, c , d);
        // pilots.push_back(p);
    }

    void addCrewMember()
    {
        // cin>> atributos
        // do
        // {
        // cin >> ability;
        // } while (ability != "");
    }

    void addFlight()
    {
        string origin, destination, departureTime, arrivalTime;
        float distance;
        int airplanePos;

        cout << "Ingrese origen: ";
        cin >> origin;
        cout << "Ingrese destino: ";
        cin >> destination;

        cout << "Ingrese fecha de partida: ";
        cin >> departureTime;
        cout << "Ingrese fecha de llegada: ";
        cin >> arrivalTime;

        cout << "Ingrese distancia en millas: ";
        cin >> distance;

        for (int i = 0; i < airplanes.size(); i++)
        {
            if (airplanes[i]->isActive())
            {
                cout << "[" << i << "]" << airplanes[i]->getIdentifier() << endl;
            }
        }
        cin >> airplanePos;
        if (airplanePos < 0 && airplanePos >= airplanes.size())
        {
            cout << "Opcion invalida";
            return;
        }

        Flight *flight = new Flight(origin, destination, departureTime, arrivalTime, distance, airplanes[airplanePos]);

        char addPilot;
        cout << "Desea añadir piloto y copiloto? Y/N";
        cin >> addPilot;
        if (addPilot == 'Y')
        {
        }
    }

    void addCrewMember()
    {
        int crewPos;
        for (int i = 0; i < flights.size(); i++)
        {
            try
            {
                Commercial *commercial = (Commercial *)flights[i];
                cout << "[" << i << "]" << commercial->getIdentifier() << endl;
            }
            catch (exception e)
            {
            }
        }
    }
};
