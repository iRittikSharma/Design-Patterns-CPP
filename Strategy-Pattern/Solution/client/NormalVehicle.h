#include "../context/VehicleContext.h"
#include "../strategies/driveStrategy.h"
#ifndef NORMAL_VEHICLE_H
#define NORMAL_VEHICLE_H
class NormalVehicle : public VehicleContext
{
public:
    NormalVehicle() : VehicleContext(new passengerDriveStrategy())
    {
        cout << "created a Normal Vehicle" << endl;
    }
};
#endif