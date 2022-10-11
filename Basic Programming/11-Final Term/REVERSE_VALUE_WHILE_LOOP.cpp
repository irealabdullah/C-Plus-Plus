#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,temp;
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev+(temp%10);
		temp=temp/10;
	}
	cout<<rev;
	
	
	return 0;
}