#include<iostream>
using namespace std;
class rectangle
{
     private:
    int length=10,breadth=5;
    
    public:
    void setlength(int l)
    {
        length = l;
    }

    void setbreadth(int b)
    {
        breadth =b;
    }
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
    int Length,Breadth;
    rectangle r;
    cout<<"Enter Length of Rectangle:";
    cin>>Length;
    r.setlength(Length);
    cout<<"Enter Breadth of Rectangle:";
    cin>>Breadth;
    r.setbreadth(Breadth);
    cout<<"Area:"<<r.area()<<endl;
    cout<<"Perimeter:"<<r.perimeter()<<endl;
 
};