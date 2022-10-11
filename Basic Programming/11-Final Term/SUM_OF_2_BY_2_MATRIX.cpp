#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],add[2][2];
	
	cout<<" Enter Matrix A "<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<endl;
	cout<<" Enter Matrix B "<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<add[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}