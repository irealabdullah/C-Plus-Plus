#include<iostream>
using namespace std;
class parent
{
    public:
    int x;
    
    void show()
    {
        cout<<x<<endl;
    }
 
};

class child:public parent
{
    public:
    int y;
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }


};
 
int main()
{
    parent p;
    p.x=10;
    p.show();

    child c;
    c.x=5;
    c.y=15;
    c.show();
    c.display();
};


/*#include<iostream>
using namespace std;
class high
{
    public:
    int x;
    void display()
    {
        cout<<" Value of low: "<<x<<endl;
    }

};

class low: public high
{
    public:
    int y;
    void show()
    {
        cout<<" Value of High: "<<x<<endl;
        cout<<" Value of High: "<<y<<endl;
    }
};
 
int main()
{
    high h;
    h.x=12;
    h.display();

    low l;
    l.x=15;
    l.y=15;
    l.show();
    l.display();

 
};*/