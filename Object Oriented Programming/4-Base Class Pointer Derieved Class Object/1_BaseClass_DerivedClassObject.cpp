// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     void fun1()
//     {
//         cout << " Function 1 from Base class" << endl;
//     }
// };

// class derived : public Base
// {
// public:
//     void fun2()
//     {
//         cout << " Function 2 from Derived Class" << endl;
//     }
// };

// int main()
// {
//     derived d;
//     d.fun1();
//     d.fun2();
//     return 0;
// }

#include <iostream>
using namespace std;
class Base
{
public:
    void fun1()
    {
        cout << " Function 1 from Base class" << endl;
    }
    void fun2()
    {
        cout << " Function 2 from Base class" << endl;
    }
};

class derived : public Base
{
public:
    void fun2()
    {
        cout << " Function 2 from Derived Class" << endl;
    }
};

int main()
{

    Base *p;
    p = new derived;
    p->fun1();
    p->fun2();
    /* p->fun2(); we cannot call this as it is not from base class
    a basic car cannot be called advanced car*/
}