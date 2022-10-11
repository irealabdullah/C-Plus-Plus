#include <iostream>
using namespace std;
class test
{
private:
    int number;

public:
    test()
    {
        number = 0;
    }

    void operator++()
    {
        ++number;
    }
    void display()
    {
        cout << " Value: " << number;
    }
};

int main()
{
    test t1;
    ++t1; // prefix
    t1.display();
}