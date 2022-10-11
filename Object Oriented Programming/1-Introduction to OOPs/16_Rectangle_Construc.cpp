#include<iostream>
using namespace std;

class rectangle
{
	private:
		int length,breadth;
		
	public:
    
		rectangle(int l,int b)
		{
			setlength(l);
			setbreadth(b);
		}
		
		
		void setlength(int l)
		{
			length=l;
		}
		
		void setbreadth(int b)
		{
			breadth=b;
		}
		
		int getlength()
		{
			return length;
		}
		
		int getbreadth()
		{
			return breadth;
		}
		
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
	rectangle r1(10,5);
	
	cout<<" Area : "<<r1.area()<<endl;
	cout<<" Perimeter : "<<r1.perimeter();
}