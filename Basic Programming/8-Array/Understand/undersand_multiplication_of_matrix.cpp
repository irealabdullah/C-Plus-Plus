#include<iostream>
using namespace std; 
int main()
{
	int r,c;
	cin>>r>>c;
	
	int a[r][c], b[r][c],multiply[r][c]={0};
	
	cout<<" Enter matrix a"<<endl;
	for(int i=0;i<r;i++)
	{
	for(int j=0;j<c;j++)
	{
		cin>>a[i][j];
	}
	}
	
	cout<<" Enter matrix b"<<endl;
	for(int i=0;i<r;i++)
	{
	for(int j=0;j<c;j++)
	{
		cin>>b[i][j];
	}
	}
	
	for(int i=0;i<r;i++)
	{
	for(int j=0;j<c;j++)
	{
	for(int k=0;k<c;k++)  // K is less than ? 
		{
			multiply[i][j]=multiply[i][j]+a[i][k]*a[k][j];
		}
	}
	}
	cout<<" Matrix of A & B = "<<endl;
		for(int i=0;i<r;i++)
	{
	for(int j=0;j<c;j++)
	{
		cout<<multiply[i][j]<<" ";
	}
	cout<<endl;
	}
}
	
