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
    float ticketCost;

public:
    Commercial(string origin, string destination, string departureTime, string arrivalTime, float distance, Airplane *assignedAirplane, float ticketCost) : Flight(origin, destination, departureTime, arrivalTime, distance, assignedAirplane)
    {
        this->ticketCost = ticketCost;
    }

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

    float getTicketCost()
    {
        return ticketCost;
    }
};
