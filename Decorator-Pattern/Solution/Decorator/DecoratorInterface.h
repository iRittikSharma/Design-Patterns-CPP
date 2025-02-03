#ifndef DECORATORS_H
#define DECORATORS_H

#include <iostream>
#include "../component/Bevarage.h"
using namespace std;

// DE
class Decorator : public Beverage
{
protected:
    Beverage *beverage;

public:
    Decorator(Beverage *b) : beverage(b) {};

    virtual int cost() const override = 0;
    virtual string description() const override = 0;
};

class Mocha : public Decorator
{

public:
    Mocha(Beverage *b) : Decorator(b) {};
    int cost() const override
    {
        return 20 + beverage->cost();
    }
    string description() const override
    {
        return beverage->description() + ",Mocha";
    }
};

class Whip : public Decorator
{

public:
    Whip(Beverage *b) : Decorator(b) {};
    int cost() const override
    {
        return 50 + beverage->cost();
    }
    string description() const override
    {
        return beverage->description() + ",Whip";
    }
};

#endif