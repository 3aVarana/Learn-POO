#pragma once
#include "Airplane.h"
#include "Passenger.h"
#include "Pilot.h"
#include "CrewMember.h"

class Flight
{
protected:
    string origin, destination, departureTime, arrivalTime;
    float distance;
    Airplane *assignedAirplane;
    Pilot *pilot, *copilot;

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
};
