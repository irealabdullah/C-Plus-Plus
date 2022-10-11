#include<iostream>
using namespace std;
class calculator
{
    private:
    int NUM1,NUM2;
    public:
    calculator(int N1,int N2)
    {
        NUM1=N1;
        NUM2=N2;
    }
    int add(int x,int y)
    {
        return x+y;
    }
 
    int mul(int x,int y)
    {
        return x*y;
    }
    
    int div(int x,int y)
    {
        return x/y;
    }
    
    int sub(int x,int y)
    {
        return x-y;
    }
};
 
int main()
{
    
    int num1,num2,input;
    cout<<"Enter Num1: ";
    cin>>num1;
    cout<<"Enter Num2: ";
    cin>>num2;
    calculator c(num1,num2);
    cout<<"Press 1,2,3,4 to choose Operator"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Escape"<<endl;
    cin>>input;
    

    switch (input)
    {
    case (1):
        cout<<c.add(num1,num2)<<endl;
        break;
    
    case (2):
        cout<<c.sub(num1,num2)<<endl;

    case (3):
        cout<<c.mul(num1,num2)<<endl;
    
    case (4):
        cout<<c.div(num1,num2)<<endl;
        
    default:
    cout<<"Thanks for using Calculator";
        break;
    }
};