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

    void operator++(int)
    {
        number++;
    }
    void display()
    {
        cout << " Value: " << number << endl;
    }
};

int main()
{
    test t1;
    t1.display(); // value=0
    t1++;         // Postfix
    t1.display(); // value=1
}