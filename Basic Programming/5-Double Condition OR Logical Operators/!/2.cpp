#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<" Enter a number: ";
    cin>>x;    
    if (!(x == 0))
    cout<<" You typed a number other than 0 ";
    else
    cout<<" You typed zero ";
    return 0;
}