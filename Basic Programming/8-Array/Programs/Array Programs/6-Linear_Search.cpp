#include<iostream>
using namespace std;
//Linear Search in C++
int main()
{
int b;
int k = -1;
int a[5]={41,32,100,81,16},i,chek;
cout<<" Please Enter element : ";
cin>>chek;
for(i=0;i<5;i=i+1)
{
    if(chek==a[i])
{
    b=i;
    k=0; 
    break;
}
}
    if(k==0)
cout<<" Number Available in Array "<<b<<endl;
    else
cout<<" Number not Available in Array ";
}