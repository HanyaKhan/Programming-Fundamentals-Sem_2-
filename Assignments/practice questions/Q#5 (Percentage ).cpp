//5. Calculate marks percentage ( marks percentage = marks obtained / total * 100 ) 
#include<iostream>
using namespace std;
int main()
{
	float total_marks;
	float marks_percentage;
	float obtained_marks;
	cout<<"Enter obtain marks : ";
	cin>>obtained_marks;
	cout<<"Enter total marks : ";
	cin>>total_marks;
	marks_percentage=(obtained_marks)/total_marks*100;
	cout<<"Marks Percentage : "<<marks_percentage; 
    return 0;
}
