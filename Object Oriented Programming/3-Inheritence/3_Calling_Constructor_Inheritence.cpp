// Constructors in inheritance
// • Constructors of base class is executed first then the constructor of derived class is executed.
// • By default, non-parameterised constructor of base class is executed.
// • parameterised constructor of base class must be called from derived class constructor

#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << " 1. Base Class Default Constructor " << endl;
    }
    base(int x)
    {
        cout << " 2. Base Class Parameterized Constructor " << x << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << " 1. Derived Class Default Constructor " << endl;
    }
    derived(int y)
    {
        cout << " 2. Derived Class Parameterized Constructor " << y << endl;
    }
    derived(int a, int x) : base(x)
    {
        cout << "3. Derived Class Parameterized Constructor " << a;
    }
};

// int main()
// {
//     derived d;
// }

// int main()
// {
//     derived d(10);
// }

// int main()
// {
//     derived d(2, 6);
// }

// ---------------------------------------------------

// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//  Base(){cout<<"Non-param Base"<<endl;}
//  Base(int x){cout<<"Param of Base "<<x<<endl;}
// };
// class Derived:public Base
// {
// public:
//  Derived(){cout<<"Non-Param Derived"<<endl;}
//  Derived(int y){cout<<"Param of Derived "<<y<<endl;}

//  Derived(int x,int y):Base(x)
//  {
//  cout<<"Param of Derived "<<y<<endl;

//  }
// };
// int main()
// {
//  Derived d(5)
// }