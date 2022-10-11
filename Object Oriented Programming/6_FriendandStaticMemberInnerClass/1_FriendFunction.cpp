#include <iostream>
using namespace std;
class test
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend void func();
};

void func()
{
    test t;
    t.a = 10;
    t.b = 15;
    t.c = 20;
}

int main()
{
}