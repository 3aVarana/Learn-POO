#include "Classroom.h"

Classroom::Classroom(char building, char floor, char number, vector<string> assets)
{
    this->building = building;
    this->floor = floor;
    this->number = number;
    this->assets = assets;
}

char Classroom::getBuilding()
{
    return building;
}

char Classroom::getFloor()
{
    return floor;
}

char Classroom::getNumber()
{
    return number;
}

vector<string> Classroom::getAssets()
{
    return assets;
}
