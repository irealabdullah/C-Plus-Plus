#include<iostream>
using namespace std;
int main()
{
	float a[3][3],sum=0;
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<" Matrix = "<<endl;
	
	for(int i=0;i<3;i++)
	
	{
	for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
		
	}
	
}