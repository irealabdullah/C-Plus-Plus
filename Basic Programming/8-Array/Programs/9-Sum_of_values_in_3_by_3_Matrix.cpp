#include<iostream>
using namespace std;
int main() // Sum of values in 3*3 Matrix 
{
	int a[3][3],sum=0;
	for(int i=0;i<3;i++)
	{
	cout<<endl;
	for(int j=0;j<3;j++)
		
		{
			cout<<" Enter a Number : ";
			cin>>a[i][j];
			sum=sum+a[i][j];
		}
		
		cout<< " Sum of Given matrix = "<<sum;
	}
	return 0;
}