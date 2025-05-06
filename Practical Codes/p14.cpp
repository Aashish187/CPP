#include <iostream>
using namespace std;
class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Function overloading
    void print() {
        cout << value << endl;
    }
    void print(string text) {
        cout << text << ": " << value << endl;
    }
    // Operator overloading: add two Numbers
    Number operator+(Number other) {
        return Number(value + other.value);
    }
};
int main() {
    // Create numbers
    Number n1(5);
    Number n2(3);

    // Show function overloading
    cout<<"Function Overloading: "<<endl;
    n1.print();         
    n1.print("Number"); 
    cout<<"\n"; 

    // Show operator overloading
    cout<<"Operator Overloading: "<<endl;
    Number sum = n1 + n2;
    cout << "Sum: ";
    sum.print();        
    return 0;
}