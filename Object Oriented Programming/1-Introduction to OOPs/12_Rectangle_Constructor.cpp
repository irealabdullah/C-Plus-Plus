#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle()
    {
        length = 2;
        breadth = 15;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    rectangle r;
    cout << "Area:" << r.area();
}