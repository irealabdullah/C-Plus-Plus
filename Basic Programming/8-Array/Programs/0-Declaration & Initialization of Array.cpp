#include<iostream>
using namespace std;
int main()
//Declaration & Initialization of Array 
{

	int a[5][5]; // Declaration //means 5 rows & 5 coloumn Total 25 value\\
	
	int b[2][2]={1,2,3,4}; //Declaration & Initialization //means 2 rows & 2 coloumn Total 4 value\\
	
	int c[3][3]={{1,1,1},{2,2,2},{3,3,3}}; //Declaration & Initialization
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}