//Max Min 
#include<iostream>
using namespace std;
int main()
{
	int a[5]={20,30,45,5,15},max=a[0];
	for(int i=0;i<=4;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	cout<<max;
	return 0;
}