/*A smart car uses two separate systems: an Engine module for engine control and a GPS module for navigation. 
The SmartCar class must access both modules together to provide a complete smart-driving experience. Design a C++ program to combine both independent functionalities.*/
#include <iostream>
using namespace std;

class Engine {
public:
    void startEngine() {
        cout << "Engine Started" << endl;
    }
};

class GPS {
public:
    void startGPS() {
        cout << "Navigation Started" << endl;
    }
};

class SmartCar : public Engine, public GPS {
public:
    void show() {
        startEngine();
        startGPS();
        cout << "Smart Car Ready for Driving" << endl;
    }
};

int main() {
    SmartCar s;
    s.show();
    return 0;
}