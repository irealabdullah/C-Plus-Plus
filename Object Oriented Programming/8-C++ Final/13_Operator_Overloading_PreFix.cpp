#include<iostream>
using namespace std;
class test
{
    private:
    int num;
    public:
    test()
    {
        num=0;
    }
    void operator ++()
    {
        
        cout<<num;
    }

 
};
 
int main()
{
    test t1;
    ++t1;
    
 
};