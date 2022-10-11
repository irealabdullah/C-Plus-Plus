#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<" Enter any character ";
	cin>>ch;
	
	switch(ch)
	{
	case 'a':
	case 'A':
	cout<<" vowel";
	break;
	case 'e':
	case 'E':
	cout<<" vowel";
	break;
	case 'i':
	case 'I':
	cout<<" vowel";
	break;
	case 'O':
	case 'o':
	cout<<" vowel";
	break;
	case 'U':
	case 'u':
	cout<<" vowel";
	break;
	default:
		cout<<" Consonent ";
	}
}