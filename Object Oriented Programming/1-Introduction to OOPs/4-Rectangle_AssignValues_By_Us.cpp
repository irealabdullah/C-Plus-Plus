#include<iostream>
using namespace std;

class rectangle 
{
    public:

    int length,breadth;

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};

int main()
{
    rectangle r;
    r.breadth=10;
    r.length=15;
    cout<<" Area of Rectangle: "<<r.area()<<endl;
    cout<<" Perimeter of Rectangle: "<<r.perimeter()<<endl;
}