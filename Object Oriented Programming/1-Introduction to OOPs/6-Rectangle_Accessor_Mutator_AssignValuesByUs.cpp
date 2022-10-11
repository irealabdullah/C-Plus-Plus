#include <iostream>
using namespace std;

class rectangle
{

private:
    int length, breadth;

public:
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }

    // int getlength()
    // {
    //     return length;
    // }

    // int getbreadth()
    // {
    //     return breadth;
    // }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    rectangle r;
    r.setlength(10);
    r.setbreadth(15);

    // cout << " Length of Rectangle " << r.getlength() << endl;
    // cout << " Breadth of Rectangle " << r.getbreadth() << endl;
    cout << " Area of Rectangle: " << r.area() << endl;
    cout << " Perimeter of Rectangle: " << r.perimeter() << endl;
}