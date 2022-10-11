#include<iostream>
#include<string>
using namespace std;
class Wall 
	{
		private:
	
			
			double length;
			double height;
	
		
		public:
	
			
			Wall(double len, double hgh) 
				{
					
					length=len;					//this whole part/function is constructor
					height=hgh;
				
				}
	
	
			double CalculateArea()
				{
	
					return length*height;
	
				}
	
	
	};
int main()
	{
	
	
		Wall wall_1(10.5 , 8.5);
		Wall wall_2(8.5 , 6.3);	
		
		
		cout<<"Area of Wall 1: "<<wall_1.CalculateArea();
		cout<<"\nArea of Wall 2: "<<wall_2.CalculateArea();
		
		return 0;
		
		
	}