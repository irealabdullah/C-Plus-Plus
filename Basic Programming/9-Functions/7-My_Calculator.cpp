#include<iostream>
using namespace std;

int add(int x,int y)
{
	return(x+y);
}

int multi(int x,int y)
{
	return(x*y);
}

int divi(int x,int y)
{
	return(x/y);
}

int sub(int x,int y)
{
	return(x-y);
}

int mod(int x,int y)
{
	return(x%y);
}


int main()
{
	int a,b,sum;
	char ch;
	
	cout<<" MY Pocket Calculator "<<endl<<endl;
	
	cout<<" Enter NUM1 : ";
	cin>>a;
	cout<<" Enter operator : ";
	cin>>ch;
	
	if(ch=='+')
	{
	cout<<" Enter NUM2 : ";
	cin>>b;
	cout<<" Sum of A + B = "<<add(a,b);
	}
	
	else if(ch=='-')
	{
	cout<<" Enter NUM2 : ";
	cin>>b;
	cout<<" Sum of A - B = "<<sub(a,b);
	}
	
	else if(ch=='*')
	{
	cout<<" Enter NUM2 : ";
	cin>>b;
	cout<<" Sum of A * B = "<<multi(a,b);
	}
	
	else if(ch=='/')
	{
	cout<<" Enter NUM2 : ";
	cin>>b;
	cout<<" Sum of A / B = "<<divi(a,b);
	}
		else if(ch=='*')
	{
	cout<<" Enter NUM2 : ";
	cin>>b;
	cout<<" Sum of A mod B = "<<mod(a,b);
	}
	
	else 
	{
		cout<<" Please Enter Valid Operator ";
	}
	
}