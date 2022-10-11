#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],multi[2][2]={0};
	
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
			for(int k=0;k<2;k++)
			{
				multi[i][j]=multi[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<multi[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}