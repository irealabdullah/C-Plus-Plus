#include<iostream>
using namespace std;

class rectangle 
{
    public:

    int length=20,breadth=10;

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

    cout<<" Area of Rectangle: "<<r.area()<<endl;
    cout<<" Perimeter of Rectangle: "<<r.perimeter()<<endl;
    

}