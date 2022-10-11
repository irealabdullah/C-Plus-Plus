#include <iostream>
using namespace std;

class Rectangle
{

private:
    int length, breadth;

public:
    Rectangle();
    // Rectangle(int l, int b);

    // int getLength();
    // int getBreadth();
    void setLength(int l);
    void setBreadth(int b);

    int area();
    // int perimeter();

    // ~Rectangle();
};

int main()
{
    // Rectangle r(10, 10);
    int length, breadth;
    Rectangle r;
    cin >> length;
    cin >> breadth;
    r.setLength(length);
    r.setBreadth(breadth);

    cout << " Area " << r.area() << endl;
    // cout << " Length " << r.getLength() << endl;
    // cout << " Breadth " << r.getBreadth() << endl;
}

// int Rectangle::getLength()
// {
//     return length;
// }

// int Rectangle::getBreadth()
// {
//     return breadth;
// }

// Rectangle::Rectangle()
// {
//     length = 2;
//     breadth = 2;
// }

// Rectangle::Rectangle(int l, int b)
// {
//     length = l;
//     breadth = b;
// }

void Rectangle::setLength(int l)
{
    length = l;
}
void Rectangle::setBreadth(int b)
{
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

// int Rectangle::perimeter()
// {
//     return 2 * (length + breadth);
// }

// Rectangle::~Rectangle()
// {
//     cout << "Rectangle Destroyed";
// }