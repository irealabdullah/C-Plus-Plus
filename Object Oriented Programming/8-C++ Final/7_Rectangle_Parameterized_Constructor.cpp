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
    rectangle r(2,5);
    cout<<"Area:"<<r.area()<<endl;
 
}