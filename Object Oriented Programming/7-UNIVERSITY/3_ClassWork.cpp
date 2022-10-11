#include<iostream>
#include<string>
using namespace std;
class gradebook
{
	private:
		string coursename;
		
	public:
		void setcoursename(string name)
		{
			coursename=name;
		}
		
		string getcoursename()
		{
			return coursename;
		}
		void displaymessage()
		{
			cout<<" Welcome to GradeBook for \n "<<getcoursename()<<" ! ";
		}
};

int main()
{
	string nameofcourse;
	gradebook mygradebook;
	
	cout<<" Initial course name is : "<<mygradebook.getcoursename()<<endl;
	
	cout<<" \nPlease enter course name "<<endl;
	getline(cin,nameofcourse);
	mygradebook.setcoursename(nameofcourse);
	cout<<endl;
	mygradebook.displaymessage();
	
}