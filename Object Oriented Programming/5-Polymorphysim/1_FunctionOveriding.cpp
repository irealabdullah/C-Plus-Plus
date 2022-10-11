// Function Overriding

// • Redefining a function of base class in derived class
// • Function overriding is used for achieving runtime polymorphism
// • Prototype of a overrides function must be exactly same as base class function

#include <iostream>
using namespace std;

class Base
{
public:
    void fun() // same
    {
        cout << " Fun of Base " << endl;
    }
};
class Derived : public Base
{
public:
    void fun() // same
    {
        cout << " Fun of Derived " << endl;
    }
};
int main()
{
    Derived d;
    d.fun();

    Base b;
    b.fun();
}

// same feature but redefined
// Function Overriding