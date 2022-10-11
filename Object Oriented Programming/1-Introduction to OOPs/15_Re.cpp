#include<iostream>
using namespace std;

class Rectangle
{

private:

int length;
int breadth;

public:

Rectangle(int l,int b);

// int getLength()
// {
//     return length;
// }
// int getBreadth()
// {
//     return breadth;
// }

void setLength(int l);
void setBreadth(int b);

int area();
int perimeter();

};

int main()
{
Rectangle r1(10,10);
cout<<"Area:"<<r1.area()<<endl;
// cout<<"Perimeter:"<<r1.perimeter()<<endl;
}


Rectangle::Rectangle(int l,int b)
{
length=l;
breadth=b;
}

void Rectangle::setLength(int l)
{
length=l;
}
void Rectangle::setBreadth(int b)
{
breadth=b;
}

int Rectangle::area()
{
return length*breadth;
}

// int Rectangle::perimeter()
// {
// return 2*(length+breadth);
// }
