#pragma once
#include <vector>
#include "Pilot.h"
#include "CrewMember.h"
#include "Passenger.h"
#include "Flight.h"
#include "Commercial.h"
#include "Airplane.h"
#include <iostream>
#include <cctype>
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
        int identifier;
        string fullname;
        int age;
        int experienceYears;

        cout << "Enter pilot's identifier: ";
        cin >> identifier;
        cout << "Enter pilot's fullname: ";
        cin >> fullname;
        cout << "Enter pilot's age: ";
        cin >> age;
        cout << "Enter pilot's experience years: ";
        cin >> experienceYears;

        pilots.push_back(new Pilot(identifier, fullname, age, experienceYears));
    }

    void addNewCrewMember()
    {
        int identifier;
        string fullname;
        int age;
        string ability;

        cout << "Enter crew member's identifier: ";
        cin >> identifier;
        cout << "Enter crew member's fullname: ";
        cin >> fullname;
        cout << "Enter crew member's age: ";
        cin >> age;

        CrewMember *newCrewMember = new CrewMember(identifier, fullname, age);

        cout << "Enter crew member's abilities: ";
        do
        {
            cin >> ability;
            newCrewMember->addAbility(ability);
        } while (ability != "");

        crewMembers.push_back(newCrewMember);
    }

    void addNewPassenger()
    {
        int identifier;
        string fullname;
        int age;
        char premium;

        cout << "Enter passenger's identifier: ";
        cin >> identifier;
        cout << "Enter passenger's fullname: ";
        cin >> fullname;
        cout << "Enter passenger's age: ";
        cin >> age;
        cout << "Is a premium passager? Y/N: ";
        cin >> premium;
        premium = toupper(premium);

        passengers.push_back(new Passenger(identifier, fullname, age, premium == 'Y'));
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
