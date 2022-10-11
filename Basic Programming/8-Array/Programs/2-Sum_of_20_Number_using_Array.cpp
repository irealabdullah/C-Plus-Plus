//sum of 20 values using array 

#include<iostream>
using namespace std;
int main()
{
	int values[20],sum; //declaration
	cout<<" Enter 20 values to get their Sum:";
	for(int i=0;i<=19;i++)
	{
		cin>>values[i];
	}
	for(int j=0;j<=19;j++)
	{
		sum=sum+values[j];
	}
	cout<<"sum of 20 values = "<<sum;
	return 0;
	
	
}