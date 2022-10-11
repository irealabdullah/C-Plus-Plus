#include<iostream>
using namespace std;
int main()
{
	char ch='A';
	cout<<"Enter any character : ";
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	cout<<" Vowel ";
	else
	cout<<" Consonent ";
	return 0;
}