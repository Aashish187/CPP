#include <iostream>
using namespace std;

// Function template to calculate square of a given value
template <typename T>
T square(T num) {
    return num * num;
}

// Class template 
template <typename T>
class Container {
private:
    T item;

public:
    Container(T value) : item(value) {}

    // Function to get the stored item
    T getItem() {
        return item;
    }
    // Function to display the item
    void display() {
        cout << "Stored item: " << item << endl;
    }
};
int main() {
    // Using function template
    cout << "Square of 4: " << square(4) << endl;
    cout << "Square of 2.5: " << square(2.5) << endl;

    // Using class template
    Container<int> intContainer(15);
    intContainer.display();
    cout << "Retrieved int: " << intContainer.getItem() << endl;

    Container<double> doubleContainer(7.89);
    doubleContainer.display();
    cout << "Retrieved double: " << doubleContainer.getItem() << endl;
    return 0;
}