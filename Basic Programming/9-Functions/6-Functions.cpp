#include<iostream>
using namespace std;
int display(int x,int y)
{
	return x+y;
}

int show(int x,int y)
{
	return x-y;
}
int main()
{
	int a,b,ans;
	cout<<" Please Enter value of A ";
	cin>>a;
	cout<<" Please Enter value of B ";
	cin>>b;
	
	cout<<" Sum of A & B = "<<display(a,b);
	cout<<" Sub of A & B = "<<show(a,b);
	
}