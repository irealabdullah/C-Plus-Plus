#include<iostream>
using namespace std;
int main()
{
	int a[5]={14,21,2,4,3},max;
	max=a[0];
	for(int i=0;i<=4;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	cout<<max;
	return 0;
}