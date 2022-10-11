#include<iostream>
using namespace std;
int func(int x,int y)
{
    if(x == 0)
    throw 1;
    return x*y;
}

int main()
{
    int num1,num2,ans;
    cout<<"Enter Num1";
    cin>>num1;
    cout<<"Enter Num2";
    cin>>num2;
    try
    {
        ans=func(num1,num2);
        cout<<ans;
    }
    catch(int x)
    {
        cout<<"Error Code: "<<x;
    }

}