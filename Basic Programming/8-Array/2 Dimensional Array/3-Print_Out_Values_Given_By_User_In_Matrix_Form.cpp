#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<" Enter Matrix Rows Size : ";
	cin>>r;
	cout<<" Enter Matrix Column Size : ";
	cin>>c;
	cout<<" Enter Matrix Values: "<<endl;
	int array[r][c];
	for(int i=0;i<r;i++)
	{
	for(int j=0;j<c;j++)
	{
		cin>>array[i][j];
	}
		
	}
	cout<<" Matrix = "<<endl;
		for(int i=0;i<r;i++)
	{
	for(int j=0;j<c;j++)
	{
		cout<<array[i][j]<<" ";
	}
	
		cout<<endl;
	}

}