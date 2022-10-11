#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;
    public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
     int area()
    {
        return length*breadth;
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
    cout<<"Area:"<<r.area()<<endl;
 
};