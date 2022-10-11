#include <iostream>
using namespace std;

class Test
{
private:
    int num;

public:
    void getvalue()
    {
        cout << " Enter Number: ";
        cin >> num;
    }
    Test operator+(Test obj)
    {
        Test t;
        t.num = num + obj.num;
        return t;
    }

    void show()
    {
        cout << " Sum value is :" << num;
    }
};
int main()
{
    Test obj1, obj2, obj3;
    cout << " Enter data of obj 1 " << endl;
    obj1.getvalue();
    cout << " Enter data of obj 2 " << endl;
    obj2.getvalue();

    obj3 = obj1 + obj2;
    obj3.show();
}
