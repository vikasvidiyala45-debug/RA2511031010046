/*Q2 – Copy Constructor

When a product is added to a shopping cart, the product details must be copied into the cart object.

Write a C++ program that implements a copy constructor in the class Product to copy the product price from one object to another.*/
#include <iostream>
using namespace std;
class Product {
private:
    float price;
public:
    Product(float p) {
        price = p;
    }
    Product(Product &p) {
        price = p.price;
    }
    void display() {
        cout << "Price: " << price << endl;
    }
};
int main() {
    Product p1(6000);
    Product p2 = p1; 
    p1.display();
    p2.display();
    return 0;
}