#include<iostream>
using namespace std;

float add(float x,float y) //parameter
{
	return (x+y);
}

float multiply(int x,int y) //parameter
{
	return (x*y);
}

int main()
{
	cout<<add(2.25,25)<<endl;  //here we will cout in main()
	cout<<multiply(2,5);  //here we will cout in main()
	return 0;
}
