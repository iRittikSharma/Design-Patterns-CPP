#include <iostream>
#include "Vehicle.h"

using namespace std;

void Vehicle::drive()
{
    cout << "Normal Drive mode" << endl;
}

void PassangerVehicle ::drive()
{
    cout << "Passanger Drive mode" << endl;
}

void SportsVehicle::drive()
{
    cout << "Sports Dive mode" << endl;
}
/// @brief duplicacy of drive method when we are overriding the drive method in both class

void OffRoadVehicle::drive()
{
    cout << "Sports Dive mode" << endl;
}