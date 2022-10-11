#include<iostream>
using namespace std;
class test
{
    private:
    int count;
    public:
    test()
    {
        count=5;
    }

    void operator --()
    {
        count =count-3;
    }

    void display()
    {
        cout<<"Count: "<<count;
    }
};

int main()
{
    test t;
    --t;
    t.display();
}