// Multiplication of 3*3 Matrix
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],multi[3][3]={0};
	
	cout<< " Enter Matrix A "<<endl;
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
		cout<< " Enter Number in pocket ["<<i<<"]["<<j<<"]:";
		cin>>a[i][j];
	}
	
	}
		cout<<" First matrix is ...."<<endl;
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
		cout<<a[i][j]<<" ";
		
	}
	cout<<endl;
}



	cout<< " Enter Matrix B "<<endl;
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
		cout<< " Enter Number in pocket ["<<i<<"]["<<j<<"]:";
		cin>>b[i][j];
	}
	
	}
		cout<<" Second matrix is ...."<<endl;
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
		cout<<b[i][j]<<" ";
		
	}
	cout<<endl;
}


for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
		for(int k=0;k<3;k++)
		{
			multi[i][j]=multi[i][j]+a[i][k]*b[k][j];	
		}
		cout<<endl;
	}
}
	cout<<" Multiplication of Two Matrix.... "<<endl;
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
		cout<<multi[i][j]<<" ";
	}
	cout<<endl;
	
}

}
