#include <iostream>
using namespace std;

// Forward declaration
class ClassB;

class ClassA {
private:
    int numA = 10;
public:
    // Friend function declaration
    friend void showSum(ClassA, ClassB);
    // Friend class declaration
    friend class ClassC;
};
class ClassB {
private:
    int numB = 20;

public:
    // Friend function declaration
    friend void showSum(ClassA, ClassB);
};
// Class C definition (friend class of ClassA)
class ClassC {
public:
    void displayA(ClassA objA) {
        cout << "Accessing ClassA's private member from ClassC: " << objA.numA << endl;
    }
};
// Friend function definition
void showSum(ClassA objA, ClassB objB) {
    cout << "Sum of private members (accessed by friend function): " 
         << objA.numA + objB.numB << endl;
}
int main() {
    ClassA objA;
    ClassB objB;
    ClassC objC;
    // Using friend function
    showSum(objA, objB);
    // Using friend class
    objC.displayA(objA);
    return 0;
}