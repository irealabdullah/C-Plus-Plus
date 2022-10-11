#include <iostream>
using namespace std;
int main() 
{
  int x;
  cout<<" X = ";
  cin>>x;
  if(x>=1 && x<=1000) 
  cout<<" X Range = 1 - 1000 ";
  else if(x>=1000&&x<=10000)
  cout<<" X Range = 1000-10000 ";
  else
  cout<<" INVALID NUMBER ";
  return 0;
}
