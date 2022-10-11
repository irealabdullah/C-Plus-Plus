#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<" HOW MANY NUMBERS YOU WANT TO ENTER ? "<<endl;
	cin>>n;
	cout<<" Enter Numbers : ";
	int a[n],max=a[0];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(max<a[i]);
		max=a[i];
	}
	cout<<" Maximum Number = "<<max;
	return 0;
}