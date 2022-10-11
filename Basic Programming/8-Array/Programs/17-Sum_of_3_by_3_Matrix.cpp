// Sum of 3*3 Matrix
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],add[3][3];
	
	cout<<" Enter Matrix A "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<endl; cout<<" Enter Matrix B "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	
	cout<<endl; cout<<" Matrix A + B = "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<add[i][j]<<" ";
		}
		cout<<endl;
	}
}