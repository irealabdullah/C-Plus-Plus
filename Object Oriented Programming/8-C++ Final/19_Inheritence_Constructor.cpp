#include<iostream>
using namespace std;
class Parent
{
    public:
    Parent()
    {
        cout<<"This is Parent class without Parameter "<<endl;
    }

    Parent(int x)
    {
        cout<<"This is Parent class with Parameter "<<x<<endl;  
    }
    Parent(int x,int y)
    {
        cout<<"This is Parent class with Parameter "<<x<<" & "<<y<<endl;  
    }
 
};

class child:public Parent 
{
    public:
    child()
    {
        cout<<"This is Child class without Parameter "<<endl;

    }
    child(int x,int y)
    {
        cout<<"This is Child class with Parameter "<<x<<" & "<<y<<endl;  
    }

};
 
int main()
{
    Parent p();
    Parent p1(35,60);
    child c(20,25);
    Parent p2(25);
};