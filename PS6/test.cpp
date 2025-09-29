#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;  // Protected member, accessible in derived class
public:
    Vehicle(string b) {
        brand = b;
    }
    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    string type; // Type of car (SUV, Sedan, etc.)
public:
    // Constructor 1: Brand only
    Car(string b) : Vehicle(b) {
        type = "Unknown";
    }

    // Constructor 2: Brand and Type
    Car(string b, string t) : Vehicle(b) {
        this->type = t;
    }

    void showCarInfo() {
        cout << "Brand: " << brand << ", Type: " << type << endl;
    }
};

int main() {
    // Using constructor with brand only
    Car car1("Toyota");
    car1.showCarInfo();

    // Using constructor with brand and type
    Car car2("Honda", "SUV");
    car2.showCarInfo();

    return 0;
}
