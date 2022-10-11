#include<iostream>
using namespace std;

int add(int x,int y)
{
	return x+y;
}
int multiply(int x,int y)
{
	return x*y;
}
int division(int x,int y)
{
	return x/y;
}
int subtract(int x,int y)
{
	return x-y;
}
int mod(int x,int y)
{
	return x%y;
}

int main()
{
	cout<<add(20,20)<<endl;
	cout<<subtract(21,20)<<endl;
	cout<<multiply(21,20)<<endl;
	cout<<mod(10,5)<<endl;
	cout<<division(10,5)<<endl;
}

