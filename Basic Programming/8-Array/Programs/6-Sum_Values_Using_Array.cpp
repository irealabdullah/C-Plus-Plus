#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<" HOW MANY NUMBERS YOU WANT TO ENTER ";
	cin>>n;
	int a[n],sum=0,i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<" Sum = "<<sum;
	return 0;
}