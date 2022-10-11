#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<" Enter strength ";
	cin>>a;
	float marks[a];
	for(int i=0;i<a;i++)
	{
		cin>>marks[i];
		cout<<" marks ="<<marks[i]<<endl;
	}
	
}