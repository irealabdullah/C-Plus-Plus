#include<iostream>
using namespace std;
int main() 
{
	int f=1,i,n;
	cout<<"Enter a number = ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	f=f*i;
	cout<<"Factorial of "<<n<<"="<<f;
	
	return 0;
}