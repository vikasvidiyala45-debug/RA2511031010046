/*Q3 – Method Overloading

The shopping system calculates the total cost of a product in two different ways:

· Price × Quantity

· Price × Quantity + Delivery Charge

Write a C++ program that demonstrates method overloading using a function calculateCost().*/
#include <iostream>
using namespace std;
class Product {
public:
    float calculateCost(float price, int qty) {
        return price * qty;
    }
    float calculateCost(float price, int qty, float delivery) {
        return (price * qty) + delivery;
    }
};
int main() {
    Product p;
    cout << "Cost without delivery: " << p.calculateCost(100, 2) << endl;
    cout << "Cost with delivery: " << p.calculateCost(100, 2, 50) << endl;
    return 0;
}