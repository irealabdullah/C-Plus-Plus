//Function Without Parameters
#include<iostream>
using namespace std;

class rectangle
{
    public:

    float area()
    {
        float length,breadth,area;
        cout<<" Enter Length ";
        cin>>length;
        cout<<" Enter Length ";
        cin>>breadth;
        area=length*breadth;
        cout<<" Area of Rectangle : "<<area;
    }
};

int main()
{
    rectangle r1;
    r1.area();
}