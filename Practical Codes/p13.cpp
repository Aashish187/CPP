#include <iostream>
using namespace std;
// Abstract class with virtual and pure virtual functions
class Vehicle {
public:
    virtual void startEngine() = 0;

    virtual void describe() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    // pure virtual function
    void startEngine() {
        cout << "Car engine" << endl;
    }

    // Override virtual function
    void describe() {
        cout << "This is a Car" << endl;
    }
};

class Bike : public Vehicle {
public:
    //  pure virtual function
    void startEngine() {
        cout << "Bike engine" << endl;
    }

    // Override virtual function
    void describe() {
        cout << "This is a Bike" << endl;
    }
};

int main() {
    Car car;
    Bike bike;
    cout << "Car details:" << endl;
    car.describe();      // Calls overridden virtual function
    car.startEngine();   // Calls implemented pure virtual function
    cout << "\nBike details:" << endl;
    bike.describe();     // Calls overridden virtual function
    bike.startEngine();  // Calls implemented pure virtual function
    return 0;
}