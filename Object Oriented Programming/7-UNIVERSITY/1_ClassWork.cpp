#include<iostream>
using namespace std;

class gradebook
{
	public:
		void displaymessage(string coursename)
		{
			cout<<" Welcome to the GradeBook for \n "<<coursename<<" ! "<<endl;
		}
};

int main()
{
	string nameofcourse;
	gradebook mygradebook;
	
	cout<<" Please Enter the Course Name : ";
	getline(cin,nameofcourse);	
	mygradebook.displaymessage(nameofcourse);
}