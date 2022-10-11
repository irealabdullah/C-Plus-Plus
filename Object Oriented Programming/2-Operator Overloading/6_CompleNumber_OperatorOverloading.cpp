#include <iostream>
using namespace std;
class complex
{
public:
    int real, imaginary;

    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.real = 5;
    c1.imaginary = 3;
    c2.real = 10;
    c2.imaginary = 4;
    c3 = c1 + c2;
    cout << "Complex Number: " << c3.real << "+i" << c3.imaginary;
};