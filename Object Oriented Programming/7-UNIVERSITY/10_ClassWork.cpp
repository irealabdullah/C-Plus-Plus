// #include <iostream>
// using namespace std;

// class cs
// {
// private:
// 	float length, breadth;

// public:
// 	cs() : length(2.9), breadth(1.5)
// 	{
// 	}

// 	float area()
// 	{
// 		return length * breadth;
// 	}
// };

// int main()
// {

// 	cs c;
// 	cout << " Area " << c.area();
// }

// #include <iostream>
// using namespace std;

// class cs
// {
// private:
// 	float length, breadth;

// public:
// 	cs()
// 	{
// 		length = 10.3;
// 		breadth = 9.8;
// 	}

// 	float area()
// 	{
// 		return length * breadth;
// 	}
// };

// int main()
// {

// 	cs c;
// 	cout << " Area " << c.area();
// }

#include <iostream>
using namespace std;

class book
{
private:
	float length, breadth;

public:
	void setdimensions(int l, int b)
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
	book b1;
	b1.setdimensions(5, 8);
	cout << " AREA " << b1.area();
}
