#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound() = 0;
};
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Meow!"<<endl;
    }
};
class Lion : public Animal
{
public:
    void sound() override
    {
        cout << "Grrrrrrrrrr!"<<endl;
    }
};
int main()
{
    Cat c;
    Lion l;
    c.sound();
    l.sound();
    return 0;
}