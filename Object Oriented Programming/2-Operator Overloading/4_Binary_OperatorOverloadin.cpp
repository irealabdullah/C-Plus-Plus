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
    void display()
    {
        cout << "Value: " << number << endl;
    }
};

int main()
{
    test t1(5);
    test t2(10);
    test sum(0);
    sum = t1 + t2;
    sum.display();
}

// Must see this code

// #include <iostream>
// using namespace std;
// class test
// {
// private:
//     int num;

// public:
//     test(int n)
//     {
//         num = n;
//     }

//     test operator+(test t2)
//     {
//         test temp(0);
//         temp.num = num + t2.num;
//         return temp;
//     }
//     void display()
//     {
//         cout << num << endl;
//     }
// };
// int main()
// {
//     test t1(10), t2(15), t3(0);
//     t3 = t1 + t2;
//     t1.display();
//     t2.display();
//     t3.display();
// }