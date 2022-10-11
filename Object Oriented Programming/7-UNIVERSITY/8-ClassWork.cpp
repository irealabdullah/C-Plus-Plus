#include<iostream>
using namespace std;
class students
{
	private:
		int rollno=10;
	
	public:
		void display()
		{
			cout<<" The roll no :  "<<rollno;
		}		
};

int main()
{
	students s1;
	s1.display();
}