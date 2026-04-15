/*An electric car is a specialized type of car that adds battery range and charging details. A car is already derived from a vehicle.
 Design a three-level hierarchy to represent Vehicle, Car and ElectricCar, and write a program to display all inherited and specialized details.*/

#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
};

class Car : public Vehicle {
public:
    int seats;
};

class ElectricCar : public Car {
public:
    int battery;

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Seats: " << seats << endl;
        cout << "Battery Range: " << battery << " km" << endl;
    }
};

int main() {
    ElectricCar e;
    e.brand = "Tata";
    e.seats = 5;
    e.battery = 350;

    e.display();
    return 0;
}