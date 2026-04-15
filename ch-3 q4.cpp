/*Different vehicles start differently. A petrol car starts using ignition, while an electric car starts using battery power.
 Design a program with a common start() function so that when a base-class pointer is used, the correct start behavior is chosen at runtime.*/

#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle Start" << endl;
    }
};

class PetrolCar : public Vehicle {
public:
    void start() {
        cout << "Petrol Car Starts with Ignition" << endl;
    }
};

class ElectricCar : public Vehicle {
public:
    void start() {
        cout << "Electric Car Starts with Battery Power" << endl;
    }
};

int main() {
    Vehicle *v;
    PetrolCar p;
    ElectricCar e;

    v = &p;
    v->start();

    v = &e;
    v->start();

    return 0;
}
