#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the value of A = ";
	cin>>a;
	cout<<"Enter the value of B = ";
	cin>>b;
	cout<<"Enter the value of C = ";
	cin>>c;
	if(a>b && a>c)
	cout<<" A is greater ";
	if(b>a && b>c) 
	cout<<" B is greater ";
	if(c>a && c>b)
	cout<<" C is greater ";
	
	return 0;
}