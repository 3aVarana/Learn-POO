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
};
