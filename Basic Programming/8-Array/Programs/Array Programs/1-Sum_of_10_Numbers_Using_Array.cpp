#include<iostream>
using namespace std;
int main()
{
	int a[10],sum=0;
	cout<<" Enter 10 Numbers in array ";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int k=0;k<10;k++)
	{
		sum=sum+a[k];
	}
	cout<<" Sum of numbers are = "<<sum;
}