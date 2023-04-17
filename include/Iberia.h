#pragma once
#include <vector>
#include "Pilot.h"
#include "CrewMember.h"
#include "Passenger.h"
#include "Flight.h"
#include "Commercial.h"
#include "Cargo.h"
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
            cout << "5. Create new flight" << endl;
            cout << "6. Assign pilot and copilot to flight" << endl;

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
            case 5:
                addFlight();
                break;
            case 6:
                assignPilotToFlight();
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
        char premiumOption;

        cout << "Enter passenger's identifier: ";
        cin >> identifier;
        cout << "Enter passenger's fullname: ";
        cin >> fullname;
        cout << "Enter passenger's age: ";
        cin >> age;
        cout << "Is a premium passager? Y/N: ";
        cin >> premiumOption;
        premiumOption = toupper(premiumOption);

        passengers.push_back(new Passenger(identifier, fullname, age, premiumOption == 'Y'));
    }

    void addFlight()
    {
        string origin, destination, departureTime, arrivalTime;
        float distance;
        int airplanePos, flightType;

        cout << "Enter origin: ";
        cin >> origin;
        cout << "Enter destination: ";
        cin >> destination;
        cout << "Enter departure date: ";
        cin >> departureTime;
        cout << "Enter arrival date: ";
        cin >> arrivalTime;
        cout << "Enter distance(miles): ";
        cin >> distance;

        cout << "Select an airplane to assign to flight: " << endl;
        for (int i = 0; i < airplanes.size(); i++)
        {
            if (airplanes[i]->isActive())
            {
                cout << "[" << i << "]" << airplanes[i]->getIdentifier() << endl;
            }
        }
        cin >> airplanePos;

        if (airplanePos < 0 || airplanePos >= airplanes.size())
        {
            cout << "Invalid option" << endl;
            return;
        }

        cout << "Enter flight's type. (1)Commercial - (2)Cargo" << endl;
        cin >> flightType;

        Flight *flight;
        switch (flightType)
        {
        case 1:
            float ticketCost;
            cout << "Enter ticket cost: ";
            cin >> ticketCost;
            flight = new Commercial(origin,
                                    destination,
                                    departureTime,
                                    arrivalTime,
                                    distance,
                                    airplanes[airplanePos],
                                    ticketCost);
            break;
        case 2:
            flight = new Cargo(origin,
                               destination,
                               departureTime,
                               arrivalTime,
                               distance,
                               airplanes[airplanePos]);
            break;
        default:
            cout << "Invalid option";
            return;
        }

        char pilotOption;
        cout << "Do you want to add pilot and copilot? Y/N";
        cin >> pilotOption;
        pilotOption = toupper(pilotOption);

        if (pilotOption == 'Y')
        {
            addPilotTo(flight);
        }
        flights.push_back(flight);
    }

    void addPilotTo(Flight *flight)
    {
        int pilotPos, copilotPos;
        cout << "Select a pilot and copilot: " << endl;
        for (int i = 0; i < pilots.size(); i++)
        {
            cout << "[" << i << "]" << pilots[i]->getIdentifier() << " " << pilots[i]->getFullname() << endl;
        }
        cin >> pilotPos >> copilotPos;

        if (pilotPos < 0 || pilotPos >= pilots.size())
        {
            cout << "Invalid option" << endl;
            return;
        }
        if (copilotPos < 0 || copilotPos >= pilots.size())
        {
            cout << "Invalid option" << endl;
            return;
        }
        if (pilotPos == copilotPos)
        {
            cout << "Invalid option" << endl;
            return;
        }

        flight->setPilot(pilots[pilotPos]);
        flight->setCopilot(pilots[copilotPos]);
    }

    void assignPilotToFlight()
    {
        int flightPos;
        cout << "Select a flight: " << endl;
        for (int i = 0; i < flights.size(); i++)
        {
            cout << "[" << i << "]" << flights[i]->getIdentifier() << " " << pilots[i]->getFullname() << endl;
        }
        cin >> flightPos;

        if (flightPos < 0 || flightPos >= flights.size())
        {
            cout << "Invalid option" << endl;
            return;
        }

        Flight *selectedFlight = flights[flightPos];
        if (selectedFlight->hasPilot())
        {
            char assignOption;
            cout << "This flight has already assigned apilot and copilot" << endl;
            cout << "Do you want to assign new ones? Y/N: ";
            cin >> assignOption;
            assignOption = toupper(assignOption);

            if (assignOption == 'Y')
            {
                addPilotTo(selectedFlight);
            }
        }
        else
        {
            addPilotTo(selectedFlight);
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
