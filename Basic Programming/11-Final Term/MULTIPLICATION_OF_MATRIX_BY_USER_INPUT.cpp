#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	int a[r][c],b[r][c],multi[r][c]={0};
	
	cout<<" Enter Matrix A "<<endl;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<endl;
	cout<<" Enter Matrix B "<<endl;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<endl;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			for(int k=0;k<2;k++)
			{
				multi[i][j]=multi[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<multi[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}