#include <iostream>
#include <string>
using namespace std;
#ifndef BEVERAGES_H
#define BEVERAGES_H
// Component
class Beverage
{
public:
    virtual int cost() const = 0;
    virtual string description() const = 0;
};

// Concrete Components

class Espresso : public Beverage
{
public:
    int cost() const override
    {
        return 100;
    }
    string description() const override
    {
        return "Espresso";
    }
};

class Latte : public Beverage
{
public:
    int cost() const override
    {
        return 80;
    }
    string description() const override
    {
        return "This is your Lattte";
    }
};

#endif