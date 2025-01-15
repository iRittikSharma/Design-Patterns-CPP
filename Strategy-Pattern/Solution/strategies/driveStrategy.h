#include <bits/stdc++.h>
using namespace std;

#ifndef DRIVE_STRATEGY_INTERFACE_H
#define DRIVE_STRATEGY_INTERFACE_H
// strategy interface

class DriveStrategyInterface
{
public:
    virtual void drive() const = 0;
};

// Concrete Strategies

// Strategy 1
class passengerDriveStrategy : public DriveStrategyInterface
{
public:
    void drive() const override
    {
        cout << "Passanger Drive mode" << endl;
    }
};

// Strategy 2

class sportsDriveStrategy : public DriveStrategyInterface
{
    void drive() const override
    {
        cout << "Sports Drive Mode" << endl;
    }
};

#endif
