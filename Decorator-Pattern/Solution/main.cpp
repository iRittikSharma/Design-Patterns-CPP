#include <iostream>
#include <string>
#include <memory>

using namespace std;
#include "./component/Bevarage.h"
#include "./Decorator/DecoratorInterface.h"
int main()
{

    Beverage *beverage = new Whip(new Mocha(new Espresso()));

    cout << "The cost of your beverage is -> " << beverage->cost() << " " << endl;
    cout << "Here is your " << beverage->description() << endl;

    Beverage *beverage2 = new Latte();
    beverage2 = new Whip(beverage2);
    beverage2 = new Whip(beverage2);
    beverage2 = new Mocha(beverage2);

    cout << "The cost of your beverage is -> " << beverage2->cost() << " " << endl;
    cout << "Here is your " << beverage2->description() << endl;

    delete beverage;
    delete beverage2;
    return 0;
}