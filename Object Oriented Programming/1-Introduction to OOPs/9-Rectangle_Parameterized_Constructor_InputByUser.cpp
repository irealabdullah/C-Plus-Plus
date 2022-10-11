#include <iostream>
using namespace std;
class rectangle
{
private:
	int length, breadth;

public:
	rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}

	int area()
	{
		return length * breadth;
	}
};

int main()
{

	int length, breadth;

	cout << " Enter length of rectangle ";
	cin >> length;
	cout << " Enter Breadth  of rectangle ";
	cin >> breadth;
	rectangle r(length, breadth);
	cout << " Area : " << r.area();
}

// very important concept
// #include <iostream>
// using namespace std;
// class test
// {
// private:
//     int x, y, z;

// public:
//     test(int num1, int num2, int num3)
//     {
//         x = num1;
//         y = num2;
//         z = num3;
//     }

//     void display()
//     {
//         cout << " x: " << x;
//         cout << " y: " << y;
//         cout << " z: " << z;
//     }
// };

// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     test t(a, b, c);
//     t.display();
// }

// important Exp of constructor

// #include <iostream>
// using namespace std;
// class rectangle
// {
// private:
//     int length, breadth;

// public:
//     rectangle(int l, int b)
//     {
//         length = l;
//         breadth = b;
//     }

//     void display()
//     {
//         cout << length << endl;
//         cout << breadth << endl;
//     }

//     int area()
//     {
//         return length * breadth;
//     }
// };
// int main()
// {
//     int l, b;
//     cin >> l >> b;

//     rectangle r(l, b);
//     r.display();
//     cout << r.area();
// }