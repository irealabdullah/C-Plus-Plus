#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<" HOW MANY NUMBERS YOU WANT TO ENTER ? ";
	cin>>n;
	
	float sum=0,avg,memory[n];
	for(int i=0;i<n;i++)
	{
		cin>>memory[i];
		sum=sum+memory[i];
	}
	avg=sum/n;
	cout<<" Sum = "<<sum<<endl;
	cout<<" Average = "<<avg<<endl;
}