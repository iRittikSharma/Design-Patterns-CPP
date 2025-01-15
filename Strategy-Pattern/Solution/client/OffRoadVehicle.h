
#include "../context/VehicleContext.h"
#include "../strategies/driveStrategy.h"
#ifndef OFFROAD_VEHICLE_H
#define OFFROAD_VEHICLE_H
class OffRoadVehicle : public VehicleContext
{
    public:
    OffRoadVehicle() : VehicleContext(new sportsDriveStrategy())
    {
        cout << "created a Offroad Vehicle" << endl;
    }
};
#endif