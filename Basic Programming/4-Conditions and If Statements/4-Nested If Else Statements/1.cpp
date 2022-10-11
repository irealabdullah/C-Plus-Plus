#include<iostream>
using namespace std;
int main()
{
	int m;
	cout<<" Enter Marks = ";
	cin>>m;
	if(m>=90)
	{
		if(m==100)
		cout<<" Student got A* ";
		else
		cout<<" Student got A grade ";
	}
	
	else if(m>=80)
	cout<<" Student got B grade ";
	else if(m>=70)
	cout<<" Student got C grade ";
	else if(m>=60)
	cout<<" Student got D grade ";
	else if(m>=50)
	cout<<" Student got E grade ";
	else
	cout<<" FAIL ";

	return 0;
}