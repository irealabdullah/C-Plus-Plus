#include<iostream>
using namespace std;
int main()
{
	int a[100],i=0;
	char choice;
	do
	{
		cout<<" Enter the "<<i+1<<" Number : ";
		cin>>a[i];
		i++;
		cout<<" Do you want to enter again (press Y) : ";
		cin>>choice;
	} 
	while(choice=='y'||choice=='Y');
	
	cout<<" Elements are ";
	for(int k=0;k<i;k++)
	cout<<a[k]<<",";
	
}