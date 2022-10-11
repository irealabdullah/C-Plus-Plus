#include <iostream>
using namespace std;
int main()
{
	int num[3],sum=0,i;
	cout<<" Enter 5 values = ";
	for(int i=0;i<=2;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<=2;i++)
	{
		sum=sum+num[i];
	}
	cout<<sum<<endl;
	
}