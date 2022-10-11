#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin>>num;
    if (!(num>0 && num<=10))
    cout<<" Your number is between 1 and 10 ";
    else
	cout<<" Your number is not between 1 and 10";
    return 0;
}