#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],addition[2][2];
	
	cout<< " Enter values of 2*2 Matrix A "<<endl;
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++)
	{
	cin>>a[i][j];
	}
	}
	cout<<endl;
	
	cout<< " Enter values of 2*2 Matrix B "<<endl;
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
	addition[i][j]=a[i][j]+b[i][j];
	}
	}
	cout<<endl;
	
	cout<< " Addition of Matrix 2*2 Array = "<<endl;
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++)
	{
	cout<<addition[i][j]<<" ";
	}
		
	}
	cout<<endl;
}