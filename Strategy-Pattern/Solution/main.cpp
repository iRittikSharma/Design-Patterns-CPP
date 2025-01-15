#include <iostream>
#include "./strategies/driveStrategy.h"
#include "./context/VehicleContext.h"
#include "./client/clients.h"

using namespace std;

int main()
{
    int mode;
    cout << "Enter the drive mode :\n (1 -> Normal Vehicle \n 2-> Sports Vehicle \n 3-> offroad Vehicle )" << endl;
    cin >> mode;
    VehicleContext *vehicle;
    if (mode == 1)
    {
        vehicle = new NormalVehicle();
    }
    else if (mode == 2)
    {
        vehicle = new SportsVehicle();
    }
    else if (mode == 3)
    {
        vehicle = new OffRoadVehicle();
    }
    else
    {
        cout << "select a valid vehicle type" << endl;
    }

    vehicle->drive();

    return 0;
}
