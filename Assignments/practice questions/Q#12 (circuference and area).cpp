/*Write a program that calculates the area and circumference of a circle. Prompt the user
to enter the radius of the circle and display the calculated area and circumference. Use
the formulas: Area = p * r^2, Circumference = 2 * p * r*/
#include<iostream>
using namespace std;
int main()
{
	float area;
	float circumference;
	float radius;
	cout<<"Enter Radius of a Circle : ";
	cin>>radius;
	float PI=22/7;
	circumference=2*PI*radius;
	area=PI*radius*radius;
	cout<<"circumference of a circle : "<<circumference;
	cout<<"\nArea of a circle : "<<area;
	return 0;
}
