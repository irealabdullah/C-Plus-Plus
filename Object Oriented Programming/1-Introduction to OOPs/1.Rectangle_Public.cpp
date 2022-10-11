#include <iostream>
using namespace std;

class rectangle
{
public:
    int length, breadth;

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
    cout << " Enter Length ";
    cin >> r.length;

    cout << " Enter Breadth ";
    cin >> r.breadth;

    cout << " Area of Rectangle: " << r.area() << endl;
    cout << " Perimeter of Rectangle: " << r.perimeter() << endl;
}