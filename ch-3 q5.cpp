/*Different charging systems such as fast charging and normal charging must all provide their own implementation of charge(). 
A generic ChargingSystem class should only declare the common interface and should not allow direct object creation. Design a suitable C++ program.*/
#include <iostream>
using namespace std;

class ChargingSystem {
public:
    virtual void charge() = 0;
};

class FastCharging : public ChargingSystem {
public:
    void charge() {
        cout << "Fast Charging Completed in 1 hour" << endl;
    }
};

class NormalCharging : public ChargingSystem {
public:
    void charge() {
        cout << "Normal Charging Completed in 5 hours" << endl;
    }
};

int main() {
    ChargingSystem *c;
    FastCharging f;
    NormalCharging n;

    c = &f;
    c->charge();

    c = &n;
    c->charge();

    return 0;
}