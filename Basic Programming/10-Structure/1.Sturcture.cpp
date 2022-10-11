#include<iostream>
using namespace std;
int main()
{
	struct students
	{
		char name[25];
		int rollno;
		float marks;
		char grade;
	}s1,s2,s3;
	
	cout<<" ENTER NAME OF STUDENT : ";
	cin>>s1.name;
	cout<<" ENTER ROLLNO OF STUDENT : ";
	cin>>s1.rollno;
	cout<<" ENTER MARKS OF STUDENT : ";
	cin>>s1.marks;
	cout<<" ENTER GRADE OF STUDENT : ";
	cin>>s1.grade;
	
	cout<<endl;
	
	cout<<" ENTER NAME OF STUDENT : ";
	cin>>s2.name;
	cout<<" ENTER ROLLNO OF STUDENT : ";
	cin>>s2.rollno;
	cout<<" ENTER MARKS OF STUDENT : ";
	cin>>s2.marks;
	cout<<" ENTER GRADE OF STUDENT : ";
	cin>>s2.grade;
	
	cout<<endl;
	
	cout<<" ENTER NAME OF STUDENT : ";
	cin>>s3.name;
	cout<<" ENTER ROLLNO OF STUDENT : ";
	cin>>s3.rollno;
	cout<<" ENTER MARKS OF STUDENT : ";
	cin>>s3.marks;
	cout<<" ENTER GRADE OF STUDENT : ";
	cin>>s3.grade;
	
	cout<<endl;
	
}