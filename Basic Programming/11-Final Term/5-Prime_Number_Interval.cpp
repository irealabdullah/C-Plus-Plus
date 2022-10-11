#include <iostream>
using namespace std;
int main() 
{
	int s,e,count,i,j;
	cout<<" Enter Range = ";
	cin>>s>>e;
	for(i=s;i<=e;i++)
	{
		count=0;
		for(j=2;j<=i/2;j++)
		{
		if(i%j==0)
		count=count+1;
		if(count==1)
		break;
		}
		if(count==0)
		cout<<i<<",";
	}
	return 0;
}
	
	