#include "../context/VehicleContext.h"
#include "../strategies/driveStrategy.h"

#ifndef SPORTS_VEHICLE_H
#define SPORTS_VEHICLE_H

class SportsVehicle : public VehicleContext
{
public:
    SportsVehicle() : VehicleContext(new sportsDriveStrategy())
    {
        cout << "created a Sports Vehicle" << endl;
    }
};
#endif