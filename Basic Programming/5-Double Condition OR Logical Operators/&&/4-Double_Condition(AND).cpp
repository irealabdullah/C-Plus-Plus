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
	if(a>b&&a>c)
	cout<<" Value of "<<a<<" is greater";
	if(b>a&&b>c)
	cout<<" Value of "<<b<<" is greater";
	if(c>b&&c>a)
	cout<<" Value of "<<c<<" is greater";
	
	return 0;
}