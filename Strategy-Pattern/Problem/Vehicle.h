#ifndef UTILS_H
#define UTILS_H

class Vehicle
{
public:
    void drive();
};

class PassangerVehicle : public Vehicle
{
public:
    void drive();
};

class SportsVehicle : public Vehicle
{
public:
    void drive();
};
class OffRoadVehicle : public Vehicle
{
public:
    void drive();
};

#endif