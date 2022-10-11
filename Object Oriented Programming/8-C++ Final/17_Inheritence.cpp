#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length,breadth;

    rectangle(int l=1,int b=1)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
 
};

class square:public rectangle
{
    public:

    square(int l)
    {
        length=l;

    }
    
    int area()
    {
        return length*length;
    }
};
 
int main()
{
    int Length,Breadth;
    cout<<"Enter Length: ";
    cin>>Length;
    cout<<"Enter Breadth: ";
    cin>>Breadth;

    rectangle r(Length,Breadth);
    cout<<"Area: "<<r.area()<<endl;

    cout<<"Enter Length of Square: ";
    cin>>Length;
    square s(Length);
    cout<<"Area: "<<s.area();
    

 
};