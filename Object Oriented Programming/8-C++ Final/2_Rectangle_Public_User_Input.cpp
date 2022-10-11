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
    cout<<"Enter Length of Rectangle:";
    cin>>r.length;
    cout<<"Enter Breadth of Rectangle:";
    cin>>r.breadth;
    cout<<"Area:"<<r.area()<<endl;
    cout<<"Perimeter:"<<r.perimeter()<<endl;
 
};
