#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle()
    {
        length = 15;
        breadth = 10;
    }
    void setlength(int l)
    {
        length = l;
    }

    void setbreadth(int b)
    {
        breadth = b;
    }

    // int getbreadth()
    // {
    //     return breadth;
    // }
    // int getlength()
    // {
    //     return length;
    // }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    rectangle r;
    cout << " Area of Rectangle: " << r.area() << endl;
}