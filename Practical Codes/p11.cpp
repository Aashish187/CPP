#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string* species; // Pointer for dynamic memory

public:
    // Dynamic constructor
    Animal(string s) {
        species = new string;
        *species = s;
        cout << "Dynamic constructor - Species: " << *species << endl;
    }

    // Copy constructor
    Animal(const Animal& a) {
        species = new string;
        *species = *(a.species);
        cout << "Copy constructor - Copying species: " << *species << endl;
    }
    void display() {
        cout << "Animal species: " << *species << endl;
    }
};
int main() {
    // Create first object using dynamic constructor
    Animal a1("Tiger");
    a1.display();

    // Create second object using copy constructor
    Animal a2 = a1;
    a2.display();
    return 0;
}