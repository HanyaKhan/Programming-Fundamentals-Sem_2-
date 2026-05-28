/*Declare a constant named "PI" and assign it the value 3.14159. Use this constant to
calculate the area of a circle with a given radius (prompted from the user). Display the
calculated area.*/
#include<iostream>
using namespace std;
int main()
{
	float area;
	float radius;
	cout<<"Enter Radius of a Circle : ";
	cin>>radius;
	float const PI=3.14159;
	area=PI*radius*radius;
	cout<<"\nArea of a circle : "<<area;
	return 0;
}
