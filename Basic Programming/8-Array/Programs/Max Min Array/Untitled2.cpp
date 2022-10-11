#include<iostream>
using namespace std;
int main()
{
	int n, max=values[0];
	cout<<" Enter Numbers: ";
	cin>>n;
	int values[n];
	for(int i=0;i<n;i++)
	{
		if(max<values[i])
		max=values[i];
	}
	cout<<max;
}