#include<iostream>
using namespace std;
class rectangle
{
    private:
    float length,breadth;
    
    public:
    void setareaofrectangle(float x,float y)
    {
        length=x;
        breadth=y;
    }
    float getareaofrectangle()
    {
        return length*breadth;
    }
};
 
int main()
{
    rectangle r;
    float value_1,value_2;
    cout<<" Enter Length :";
    cin>>value_1;
    cout<<" Enter Breadth :";
    cin>>value_2;

    r.setareaofrectangle(value_1,value_2);
    cout<<" Area of Rectangle: "<<r.getareaofrectangle();
 
};