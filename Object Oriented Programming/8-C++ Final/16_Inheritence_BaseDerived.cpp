#include<iostream>
using namespace std;
class parent
{
    public:
    int p;
    void display()
    {
        cout<<"This is a Parent Class "<<"P="<<p<<endl;
    }
};
class child:public parent
{
    public:
    int c;
    void show()
    {
        cout<<"This is Child Class "<<"C="<<c<<" "<<"P="<<p<<endl;
    }

};
 
int main()
{
    parent p;
    p.p=10;
    p.display();

    child c;
    c.c=20;
    c.p=3;
    c.show();
    c.display();
};