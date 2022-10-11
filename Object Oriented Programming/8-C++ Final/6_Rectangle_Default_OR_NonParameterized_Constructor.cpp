#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;
    public:
    rectangle()
    {
        length=5;
        breadth=1;
    }
     int area()
    {
        return length*breadth;
    }
 
};
 
int main()
{
    
    rectangle r;
    cout<<"Area:"<<r.area()<<endl;
 
};