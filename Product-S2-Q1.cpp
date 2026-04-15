/*Q1 – Constructor Overloading

A product object can be created in two ways:

· Without providing product details.

· With product name and price given during creation.

Write a C++ program that demonstrates constructor overloading for the class Product.*/
#include <iostream>
using namespace std;
class Product {
private:
    string name;
    float price;
public:
    
    Product() {
        name = "DELL";
        price = 50000;
    }
    Product(string n, float p) {
        name = n;
        price = p;
    }
    void display() {
        cout << "\nProduct Name: " << name;
        cout << "\nPrice: " << price << endl;
    }
};
int main() {
    Product p1;                 // default
    Product p2("Laptop", 50000); // parameterized
    p1.display();
    p2.display();
    return 0;
}