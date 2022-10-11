#include<iostream>
using namespace std;

class square
{
    public:
    int length;

    int area()
    {
        return length*length;
    }
    int perimeter()
    {
        return 4*length;
    }
};

int main()
{
    square s;
    
    cout<<" Enter Length of Square ";
    cin>>s.length;

    cout<<" Area of rectangle: "<<s.area()<<endl;
    cout<<" Permeter of rectangle: "<<s.perimeter()<<endl;
}