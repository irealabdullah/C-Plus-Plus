// Polymorphism
// • Same name different actions
// • Runtime Polymorphism is achieved using function overriding
// • Virtual functions are abstract functions of base class
// • Derived class must override virtual function
// • Base class pointer pointing to derived class object and a override function is called
// Summary: class car is defined, then sub classes override, then base class method made as
// virtual the pure virtual

// #include <iostream>
// using namespace std;
// class car
// {
// public:
//     void start()
//     {
//         cout << " Car Started " << endl;
//     }
//     void stop()
//     {
//         cout << " Car Stoped " << endl;
//     }
// };

// class suzuki : public car
// {
// public:
//     void start()
//     {
//         cout << " suzuki Started " << endl;
//     }
//     void stop()
//     {
//         cout << " suzuki Stoped " << endl;
//     }
// };

// class swift : public car
// {
// public:
//     void start()
//     {
//         cout << " swift Started " << endl;
//     }
//     void stop()
//     {
//         cout << " swift Stoped " << endl;
//     }
// };

// int main()
// {
//     car *c = new suzuki();
//     c->start();
//     c->stop();
// }

// #include <iostream>
// using namespace std;
// class car
// {
// public:
//     virtual void start()
//     {
//         cout << " Car Started " << endl;
//     }
//     virtual void stop()
//     {
//         cout << " Car Stoped " << endl;
//     }
// };

// class suzuki : public car
// {
// public:
//     void start()
//     {
//         cout << " suzuki Started " << endl;
//     }
//     void stop()
//     {
//         cout << " suzuki Stoped " << endl;
//     }
// };

// class swift : public car
// {
// public:
//     void start()
//     {
//         cout << " swift Started " << endl;
//     }
//     void stop()
//     {
//         cout << " swift Stoped " << endl;
//     }
// };

// int main()
// {
//     car *c = new suzuki();
//     c->start();
//     c->stop();
// }

#include <iostream>
using namespace std;
class car
{
public:
    virtual void start() = 0;

    virtual void stop() = 0;
};

class suzuki : public car
{
public:
    void start()
    {
        cout << " suzuki Started " << endl;
    }
    void stop()
    {
        cout << " suzuki Stoped " << endl;
    }
};

class swift : public car
{
public:
    void start()
    {
        cout << " swift Started " << endl;
    }
    void stop()
    {
        cout << " swift Stoped " << endl;
    }
};

int main()
{
    car *c = new suzuki();
    c->start();
    c->stop();

    c = new swift();
    c->start();
    c->stop();
}