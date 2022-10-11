#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;
    public:
    void setlength(int l);
    void setbreadth(int b);
    int area();
};

void rectangle::setlength(int l) //Outside are Non-INLINE Functions 
{ 
    length=l;
}

void rectangle::setbreadth(int b)
{
    breadth=b;
}

int rectangle::area()
{
    return length*breadth;
}
 
int main()
{
    rectangle r;
    int Length,Breadth;
    cout<<"Enter Length: ";
    cin>>Length;
    cout<<"Enter Breadth: ";
    cin>>Breadth;
    r.setlength(Length);
    r.setbreadth(Breadth);
    cout<<"Area:"<<r.area()<<endl;
 
};