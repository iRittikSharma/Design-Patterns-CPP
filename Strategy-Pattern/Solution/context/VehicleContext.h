#include <iostream>
#include "../strategies/driveStrategy.h"
using namespace std;

#ifndef VEHICLE_H
#define VEHICLE_H

// ----------------------[[Context]]----------------------------------------
class VehicleContext
{
private:
    DriveStrategyInterface *driveStrategy;

public:
    VehicleContext(DriveStrategyInterface *strategy)
    {
        this->driveStrategy = strategy;
    }
    void drive()
    {
        driveStrategy->drive();
    }
};
#endif