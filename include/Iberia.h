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
        int option;
        do
        {
            cout << endl;
            cout << "1. Add airplane" << endl;
            cout << "2. Add pilot" << endl;
            cout << "3. Add crew member" << endl;
            cout << "4. Add passenger" << endl;

            cout << "0. Exit" << endl;
            cin >> option;

            switch (option)
            {
            case 1:
                addNewAirplane();
                break;
            case 2:
                addNewPilot();
                break;
            case 3:
                addNewCrewMember();
                break;
            case 4:
                addNewPassenger();
                break;

            case 0:
                cout << "Adión" << endl;
                break;
            default:
                cout << "Invalid option" << endl;
            }
        } while (option != 0);
    }

    void addNewAirplane()
    {
        int identifier;
        string manufacturer;
        string model;

        cout << "Enter airplane's identifier: ";
        cin >> identifier;
        cout << "Enter airplane's manufacturer: ";
        cin >> manufacturer;
        cout << "Enter airplane's model: ";
        cin >> model;

        airplanes.push_back(new Airplane(identifier, manufacturer, model));
    }

    void addNewPilot()
    {
        // cin>> atributos
        // Pilot *p = new Pilot(a, b, c , d);
        // pilots.push_back(p);
    }

    void addNewCrewMember()
    {
        // cin>> atributos
        // do
        // {
        // cin >> ability;
        // } while (ability != "");
    }

    void addNewPassenger()
    {
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

    ~Iberia()
    {
        for (Flight *f : flights)
        {
            delete f;
        }
        for (Pilot *p : pilots)
        {
            delete p;
        }
        for (CrewMember *c : crewMembers)
        {
            delete c;
        }
        for (Passenger *p : passengers)
        {
            delete p;
        }
        for (Airplane *a : airplanes)
        {
            delete a;
        }
    }
};
