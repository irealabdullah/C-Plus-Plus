#include<iostream>
using namespace std;
int main()
{
	float values[10];
	float sum=0,avg;
	cout<<" Enter 10 values ";
	for(int i=0;i<=9;i++)
	{
		cin>>values[i];
	}
	for(int i=0;i<=9;i++)
	{
		sum=sum+values[i];
	}
	avg=sum/10;
	cout<<" Average of 10 values = "<<avg;
	return 0;
	
}