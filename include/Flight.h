#pragma once
#include "Airplane.h"
#include "Passenger.h"
#include "Pilot.h"
#include "CrewMember.h"

class Flight
{
private:
    string origin, destination, scheduledDatetime;
    Airplane *assignedAirplane;
    Pilot *pilot, *copilot;

public:
};
