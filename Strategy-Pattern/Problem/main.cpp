#include <iostream>
#include "Vehicle.h"
using namespace std;

int main()
{
    cout << "Welcome to the problem statement of Strategy Design patterns" << endl;

    PassangerVehicle *car1 = new PassangerVehicle();
    car1->drive();
    SportsVehicle *car2 = new SportsVehicle();
    car2->drive();
    OffRoadVehicle *car3 = new OffRoadVehicle();
    car3->drive();

    return 0;
}
