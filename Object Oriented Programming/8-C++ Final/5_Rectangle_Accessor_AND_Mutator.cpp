#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;
    public:
    void setlength(int l)
    {
        length =l;
    }
    void setbreadth(int b)
    {
        breadth =b;
    }
    int getlength()
    {
        return length;
    }
     int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
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
    cout<<"Length:"<<r.getlength()<<endl;
    cout<<"Breadth:"<<r.getbreadth()<<endl;
}