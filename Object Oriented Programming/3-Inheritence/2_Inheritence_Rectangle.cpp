#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h)
    {
        height = h;
    }
    int getHeight() { return height; }
    void setHeight(int h) { height = h; }
    int volume() { return getLength() * getBreadth() * height; }
};
int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout << "Volume is " << c.volume() << endl;
}
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
// Rectangle::Rectangle(Rectangle &r)
// {
//     length = r.length;
//     breadth = r.breadth;
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
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    // cout<<"Rectangle Destroyed";
}


// #include <iostream>
// using namespace std;
// class Rectangle
// {
// private:
//     int length;
//     int breadth;

// public:
//     int getLength()
//     {
//         return length;
//     }
//     int getBreadth()
//     {
//         return breadth;
//     }
//     void setLength(int l)
//     {
//         length = l;
//     }
//     void setBreadth(int b)
//     {
//         breadth = b;
//     }
//     int area()
//     {
//         return length * breadth;
//     }
// };

// class Cuboid : public Rectangle
// {
// private:
//     int height;

// public:
//     int getHeight()
//     {
//         return height;
//     }

//     void setHeight(int h)
//     {
//         height = h;
//     }
//     int volume()
//     {
//         return getLength() * getBreadth() * height;
//     }
// };

// int main()
// {
//     Rectangle r;
//     r.setLength(10);
//     r.setBreadth(5);
//     cout << r.area() << endl;

//     Cuboid c;
//     c.setLength(2);
//     c.setBreadth(3);
//     c.setHeight(5);
//     cout << c.area() << endl;
//     cout << c.volume() << endl;
// }