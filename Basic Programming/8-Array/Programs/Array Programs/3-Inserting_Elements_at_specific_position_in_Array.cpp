#include<iostream>
using namespace std;
int main()
{
	int a[5] = {10,12,13,54,85};
	int position,num,i;

	cout<<" Enter the position and number : "<<endl;
	cin>>position>>num;

	for (int i = 4; i >= position; i--)
	{
		a[i+1]=a[i];
	}
	 
	a[position]=num;

	cout<<" This is the new array after insert the new number "<<endl;
	for (int i=0;i<6;i=i+1)
	{
		cout<<a[i]<<endl;
	}
	
	
	return 0;
}