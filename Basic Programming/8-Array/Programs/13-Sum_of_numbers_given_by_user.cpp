#include<iostream>
using namespace std;
int main()
{// sum of numbers given by user

	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		}	
		for(int j=0;j<n;j++)
		{
			
			sum=sum+a[j];
		}
		cout<<" sum = "<<sum;
}