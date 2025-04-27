#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    // Default constructor
    Student() {
        name = "XYZ";
        age = 0;
        marks = 0.0;
        cout << "Default constructor called!" << endl;
    }

    // Parameterized constructor
    Student(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
        cout << "Parameterized constructor called!" << endl;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    // Using default constructor
    Student s1;
    cout << "Student 1 details:" << endl;
    s1.display();

    cout << "\n----------------\n";

    // Using parameterized constructor
    Student s2("Aashish", 18, 95.5);
    cout << "Student 2 details:" << endl;
    s2.display();

    return 0;
}