#include<iostream>
using namespace std;

class book
{
	private:
    float length,breadth;

	public:

        void setdimensions(int l,int b)
        {
            length=l;
            breadth=b;
        }
		
};
int main()
{
    book b1;
    b1.setdimensions(5,8);
    
}


/*
		OR
		public:
		bs():
		{
			length=2.5 ,breadth=1.5
		}*/
		