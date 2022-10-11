#include <string>
#include <iostream>
using namespace std;

class courses
{
public:
    string c1, c2, c3;
    string coursename()
    {
        cout << " Enter course 1 " << endl;
        getline(cin, c1);
        cout << " Enter course 2 " << endl;
        getline(cin, c2);
        cout << " Enter course 3 " << endl;
        getline(cin, c3);
    }
};

class teacher
{
public:
    string studentname();
};

string teacher::studentname()
{
    string s[10];
    for (int i = 0; i < 10; i++)
    {
        getline(cin, s[i]);
    }
}

class section : public courses, public teacher
{
public:
    char sectionname();
};

char section::sectionname()
{
    char n[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> n[i];
    }
};

int main()
{
    section obj;
    obj.sectionname();
    obj.studentname();
    obj.coursename();
};