//It's just a concept
// #include<iostream>
// using namespace std;
// class test
// {
//     private:
//     int num;
//     public:
//     test(int n)
//     {
//         num=n;
//         cout<<"Object:"<<num<<endl;
//     }
 
// };
 
// int main()
// {
//     test t1(5),t2(5),t3(0);
 
// };

// ----------------------------------------------

#include<iostream>
using namespace std;
class test
{
    private:
    int num;
    public:
    test(int n)
    {
        num=n;
    }

    test operator+(test t2)
    {
        test temp(0);
        temp.num=num+t2.num;   
        return temp;        
    }
    void display()
    {
        cout<<num;
    }
 
};
 
int main()
{
    test t1(5),t2(5),t3(0);
    
    t3=t1+t2;
    t3.display();
    //left = Function call
    //right = argument pass
};