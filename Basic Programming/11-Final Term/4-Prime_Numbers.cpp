#include<iostream>
using namespace std;
int main()
{
	int num,n,count=0;
	cout<<" Enter a Number : ";
	cin>>n;
	for(num=2;num<=n;num++)
	{
	if (n%num==0)
	count=count+1;
	}
	if(count==1)
	cout<<"Prime Number";
	else
	cout<<" Not a Prime Number";
	
	return 0;
}