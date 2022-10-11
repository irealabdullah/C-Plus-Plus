#include <iostream>
using namespace std;
class Shape
{
public:
    void area()
    {
        cout << " Area of Shape " << endl;
    }

    virtual void perimeter() = 0;
};

class circle : public Shape
{
public:
    void area()
    {
        cout << " Area of Circle " << endl;
    }
    void perimeter()
    {
        cout << " Perimeter of Circle " << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << " Area of Rectangle " << endl;
    }
    void perimeter()
    {
        cout << " Perimeter of Rectangle " << endl;
    }
};

int main()
{
    Shape *ptr = new circle();
    ptr->area();
    ptr->perimeter();

    ptr = new Rectangle();
    ptr->area();
    ptr->perimeter();
}