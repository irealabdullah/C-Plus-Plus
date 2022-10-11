#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length=10,breadth=5;
    
    public:
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
    cout<<"Area:"<<r.area()<<endl;
    cout<<"Perimeter:"<<r.perimeter()<<endl;
};
