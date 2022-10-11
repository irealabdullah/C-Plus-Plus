#include<iostream>
using namespace std;
class Rectangle
{
    public:
    float areaofrectangle(float a,float b)
    {
        float c;
        c=a*b;
        cout<<" Area of Rectangle :"<<c;
    }
    /* or we can write return a*b;*/
};

int main()
{
    Rectangle r;
    float length,breadth,area;
    cout<<" Enter Length ";
    cin>>length;
    cout<<" Enter Breadth ";
    cin>>breadth;
    r.areaofrectangle(length,breadth);
}

/* area=obj.areaofrectangle(Length,breadth);
cout<<" Area of Rectangle "<<area;*/