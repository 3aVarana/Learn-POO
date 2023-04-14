#pragma once
#include "Flight.h"
#include "Passenger.h"
#include "CrewMember.h"
#include <vector>

class Commercial : public Flight
{
private:
    vector<Passenger *> passengers;
    vector<CrewMember *> cabinCrew;

public:
    int getCabinCrewNumber()
    {
        return cabinCrew.size();
    }

    void addCrewMember(CrewMember *cm)
    {
        cabinCrew.push_back(cm);
    }

    void addPassenger(Passenger *passenger)
    {
        passengers.push_back(passenger);
    }
};
