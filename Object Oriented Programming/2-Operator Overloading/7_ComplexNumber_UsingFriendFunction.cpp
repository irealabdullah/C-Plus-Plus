#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

void display()
{
    cout << real << "+i" << img;
}

    friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    complex c1(17, 3), c2(2, 4), c3;
    c3 = c1 + c2;
    c3.display();
};

// wrong but do this friend functionn method for addition

// #include <iostream>
// using namespace std;
// class complex
// {
// private:
//     int real, img;

// public:
//     complex(int r = 0, int i = 0)
//     {
//         real = r;
//         img = i;
//     }

//     void display()
//     {
//         cout << real << "+i" << img;
//     }

//     friend complex operator+(complex c1, complex c2);
// };

// complex operator+(complex c1, complex c2)
// {
//     complex temp;
//     temp.real = c1.real + c2.real;
//     temp.img = c1.img + c2.img;
//     return temp;
// }

// int main()
// {
//     int a, b, c;
//     cin >> a >> b;
//     complex c1(a, b);
//     complex c2(a, b);
//     complex c3;
//     c3 = c1 + c2;
//     c3.display();
// };