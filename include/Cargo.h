#pragma once
#include "Flight.h"
#include "Package.h"
#include <vector>

class Cargo : public Flight
{
private:
    vector<Package> packages;

public:
    Cargo(string origin, string destination, string departureTime, string arrivalTime, float distance, Airplane *assignedAirplane) : Flight(origin, destination, departureTime, arrivalTime, distance, assignedAirplane)
    {
        this->type = FlightType::cargo;
    }

    float getBenefit()
    {
        return 0.0f;
    }
};
