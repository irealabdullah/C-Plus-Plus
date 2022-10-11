// Right= Argument
// Left= Function Call
#include <iostream>
using namespace std;
class test
{
private:
    int number;

public:
    test(int n)
    {
        number = n;
    }
    test operator+(test t2)
    {
        test t3(0);
        t3.number = number + t2.number;
        return t3;
    }
    test operator-(test t2)
    {
        test t3(0);
        t3.number = number - t2.number;
        return t3;
    }
    test operator*(test t2)
    {
        test t3(0);
        t3.number = number * t2.number;
        return t3;
    }
    test operator/(test t2)
    {
        test t3(0);
        t3.number = number / t2.number;
        return t3;
    }
    void display()
    {
        cout << "Value: " << number << endl;
    }
};

int main()
{
    test t1(10);
    test t2(2);
    test sum(0);
    sum = t1 / t2;
    sum.display();
}

// objects will add,sub,multiply,divide