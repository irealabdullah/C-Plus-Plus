#include<iostream>
#include<string>
using namespace std;
class Course
{
    public:
    string s1,s2,s3;

    string CourseName()
    {
        cout<<"Enter Course 1";
        getline(cin,s1);
        cout<<"Enter Course 2";
        getline(cin,s2);
        cout<<"Enter Course 3";
        getline(cin,s3);
    }
};

class Teacher
{
    public:
    string StudentName()
    {
        string s[3];
        for(int i=0; i<3; i++)
        {
            getline(cin,s[i]);
        }
    }
};

class Section:public Course,public Teacher
{
    public:
    char SectionName()
    {
        char n[3];
         for(int i=0; i<3; i++)
        {
            cin>>n[i];
        }
    }

};
 
int main()
{
    Section obj;
    obj.CourseName();
    obj.StudentName();
    obj.SectionName();
}