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
    rectangle *p = new rectangle(); // create object in heap
    p->length = 10;
    p->breadth = 5;
    cout << "Area:" << p->area();
}