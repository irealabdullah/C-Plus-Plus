#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	int a[r][c],b[r][c],add[r][c];
	
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
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<add[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}