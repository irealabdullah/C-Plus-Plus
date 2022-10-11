#include<iostream>
using namespace std;
int main()
{
	int n[5],i,sum=0;
	cout<<" Enter 5 values ";
	for(i=0;i<=4;i++)
	{
		cin>>n[i];
		sum=sum+n[i];
	}
	cout<<" Sum = "<<sum;

}