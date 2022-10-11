#include<iostream>
using namespace std;
class rectangle
{
    public:
    float areaofrectangle(float a,float b)
    {
        return a*b;
    }
};
 
int main()
{
    rectangle r;
    float length,breadth,area;
    cout<<" Enter Length ";
    cin>>length;
    cout<<" Enter Breadth ";
    cin>>breadth;
    area=r.areaofrectangle(length,breadth);
    cout<<" Area of Rectangle "<<area;
};