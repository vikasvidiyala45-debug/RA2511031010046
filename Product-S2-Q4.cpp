/*Q4 – Operator Overloading

Two product objects can be combined to calculate the total price of both products.

Write a C++ program to overload the + operator to add the prices of two Product objects.

---*/
#include <iostream>
using namespace std;
class Product {
public:
    float price;
    Product(float p) {
        price = p;
    }
    Product operator+(Product p) {
        return Product(price + p.price);
    }
    void display() {
        cout << "Total Price: " << price << endl;
    }
};
int main() {
    Product p1(500), p2(300);
    Product total = p1 + p2;
    total.display();
    return 0;
}