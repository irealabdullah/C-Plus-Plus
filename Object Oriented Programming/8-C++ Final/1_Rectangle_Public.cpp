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
    r.length=5;
    r.breadth=10;
    cout<<"Area:"<<r.area()<<endl;
    cout<<"Perimeter:"<<r.perimeter()<<endl;
 
};
