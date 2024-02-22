#include <iostream>
using namespace std;

int main()
{
	int choice;
	double radius, length, width, area;
	float PI = 3.14;
	
	cout<<"Choose a shape to calculate its area : "<<endl;
	cout<<"1. Circle" <<endl;
	cout<<"2. Rectangle"<<endl;
	cout<<"Enter your choice (1 or 2)"<<endl;
	cin>> choice;
	
	if (choice==1)
	{
		cout<< "Enter the radius of the circle: ";
		cin>> radius;
		
		area = PI * (radius * radius);//formula for area of circle
		cout<<"Area of the circle is : "<< area <<endl;
	}
	else if (choice == 2)
	{
		cout<<"Enter the length of the rectangle : ";
		cin>> length;
		cout<<"Enter the width of the rectangle: ";
		cin>>width;
		
		if ((length > 0) || (width > 0))
			cout<<"Invalid input. Length and width cannot be negative."<<endl;
			area = length * width;
			cout<<"Area of the rectangle is:"<< area <<endl;
			
	}
	else
		cout<<"Invalid choice. Please enter 1 or 2."<<endl;
		
	return 0;	
}

