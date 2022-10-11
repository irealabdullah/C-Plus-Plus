#include<iostream>
using namespace std;
int main()
{
	int n[5],i;
	cout<<" Enter 5 values = ";
	for(i=0;i<=4;i++)
	{
		cin>>n[i];
	}
	if(n[0]>n[1]&&n[0]>n[2]&&n[0]>n[3]&&n[0]>n[4])
	cout<<" Largest value = "<<n[0];
	else if(n[1]>n[0]&&n[1]>n[2]&&n[1]>n[3]&&n[1]>n[4])
	cout<<" Largest value = "<<n[1];
	else if(n[2]>n[0]&&n[2]>n[1]&&n[2]>n[3]&&n[2]>n[4])
	cout<<" Largest value = "<<n[2];
	else if(n[3]>n[0]&&n[3]>n[1]&&n[3]>n[2]&&n[3]>n[4])
	cout<<" Largest value = "<<n[3];
	else 
	cout<<" Largest value = "<<n[4];
	
}