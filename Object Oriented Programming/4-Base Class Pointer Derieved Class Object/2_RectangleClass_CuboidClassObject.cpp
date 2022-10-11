// #include <iostream>
// using namespace std;
// class rectangle
// {
// public:
//     void area()
//     {
//         cout << "Area of Rectangle " << endl;
//     }
// };

// class cuboid : public rectangle
// {
// public:
//     void volume()
//     {
//         cout << "Volume of cuboid " << endl;
//     }
// };

// int main()
// {

//     cuboid c;
//     c.volume();
//     c.area();
// };

#include <iostream>
using namespace std;
class rectangle
{
public:
    void area()
    {
        cout << "Area of Rectangle " << endl;
    }
};

class cuboid : public rectangle
{
public:
    void volume()
    {
        cout << "Volume of cuboid " << endl;
    }
};

int main()
{

    rectangle *p;
    p = new cuboid;
    p->area();
    // p->volume(); cannot access this
    // Reason:
};