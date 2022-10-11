#include<iostream>
using namespace std;
int main()
{
	int values[5]={300,21,2,4,200},max=values[0];
	for(int i=0;i<=4;i++)
	{
		if(max<values[i]) //Reverse sign > for minimum value
		max=values[i];
	}
	cout<<max;
	return 0;
}