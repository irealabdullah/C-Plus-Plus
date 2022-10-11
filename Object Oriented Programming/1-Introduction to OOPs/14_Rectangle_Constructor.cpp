#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle();
    int area();
    int perimeter();
};

rectangle::rectangle()
{
    length = 2;
    breadth = 15;
}

int rectangle::area()
{
    return length * breadth;
}

int rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    rectangle r;
    cout << " Area: " << r.area() << endl;
    cout << " Perimeter: " << r.perimeter();
}