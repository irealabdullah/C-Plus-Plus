#include<iostream>
using namespace std;
int main()
{
	char ch;
	float v1,v2;
	cout<<" Enter First Number ";
	cin>>v1;
	cout<<" Enter operator ";
	cin>>ch;
	cout<<" Enter Second Number ";
	cin>>v2;
	
	if((ch!='*')||(ch!='-')||(ch!='+')||(ch!='/'))
	{
		cout<<" Invalid Operator ";
	}
	else
	{
	switch(ch)
	{
	case '+':
	cout<<v1<<"+"<<v2<<"="<<v1+v2;
	break;
	case '-':
	cout<<v1<<"-"<<v2<<"="<<v1-v2;
	break;
	case '*':
	cout<<v1<<"*"<<v2<<"="<<v1*v2;
	break;
	case '/':
	cout<<v1<<"/"<<v2<<"="<<v1/v2;
	break;
	default:
	cout<<" Thanks use again  ";
	}
}
}