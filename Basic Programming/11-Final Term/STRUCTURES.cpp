#include<iostream>
using namespace std;
int main()
{
	struct students
	{
	string name;
	int rollno;
	float marks;
	}s1;
	
	cout<<" Enter student name ";
	cin>>s1.name;
	cout<<" Enter student roll no ";
	cin>>s1.rollno;
	cout<<" Enter student marks ";
	cin>>s1.marks;
	
	
	cout<<" Following details are "<<endl;
	cout<<"  Student Name "<<s1.name<<endl;
	cout<<"  Student Rollno "<<s1.rollno<<endl;
	cout<<"  Student Marks "<<s1.marks<<endl;
	
}
