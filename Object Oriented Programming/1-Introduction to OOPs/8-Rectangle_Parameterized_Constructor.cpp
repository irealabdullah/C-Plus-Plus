#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle(int l, int b)
    {
        setlength(l);
        setbreadth(b);
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
    rectangle r(10, 15); // Passing Values above

    cout << " Area of Rectangle: " << r.area() << endl;
}