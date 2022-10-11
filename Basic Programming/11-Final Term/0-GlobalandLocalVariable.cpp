#include<iostream>
using namespace std;
int a=5;
int main()

{
	int b=3;
	cout<<"value of b = " <<b<<endl;
	cout<<"value of a = " <<a<<endl;
	{
	int a=8;
	cout<<"value of a = " <<a<<endl;
	}
	cout<<"value of a = " <<a;
	return 0;

}