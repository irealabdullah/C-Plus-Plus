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
    rectangle *ptr;
    ptr = &r;
    // r.length = 10;
    ptr->length = 10; // using pointer we access length assign 10
    ptr->breadth = 5;
    cout << "Area:" << ptr->area() << endl;
    cout << "Perimeter:" << ptr->perimeter();
}