#pragma once
#include "Airplane.h"
#include "Passenger.h"
#include "Pilot.h"
#include "CrewMember.h"

enum FlightType
{
    commercial, // 0
    cargo       // 1
};

class Flight
{
protected:
    string origin, destination, departureTime, arrivalTime;
    float distance;
    Airplane *assignedAirplane;
    Pilot *pilot, *copilot;
    FlightType type;

public:
    Flight(string origin, string destination, string departureTime, string arrivalTime, float distance, Airplane *assignedAirplane)
    {
        this->origin = origin;
        this->destination = destination;
        this->departureTime = departureTime;
        this->arrivalTime = arrivalTime;
        this->distance = distance;
        this->assignedAirplane = assignedAirplane;

        this->pilot = nullptr;
        this->copilot = nullptr;
    }

    void setPilot(Pilot *pilot)
    {
        this->pilot = pilot;
    }

    void setCopilot(Pilot *copilot)
    {
        this->copilot = copilot;
    }

    bool hasPilot()
    {
        return pilot != nullptr;
    }

    bool hasCopilot()
    {
        return copilot != nullptr;
    }

    string getIdentifier()
    {
        return origin + " " + destination;
    }

    int getType()
    {
        return type;
    }

    virtual float getBenefit() = 0;

    /*
    Ahora que la clase Flight tiene un método abstracto es necesario declararle un constructor virtual en la clase
     */
    virtual ~Flight()
    {
    }
};
