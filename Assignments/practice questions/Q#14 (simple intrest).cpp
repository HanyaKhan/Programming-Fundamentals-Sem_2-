/*Write a program that calculates the simple interest. Prompt the user to enter the principal
amount, the rate of interest, and the time period (in years). Calculate the simple interest
using the formula: Simple Interest = (Principal * Rate * Time) / 100. Display the calculated
simple interest.*/
#include<iostream>
using namespace std;
int main()
{
	float ROI;
	float simple_intrest;
	int time_period;
	float principal_amount;
	cout<<"Principal Amount : ";
	cin>>principal_amount;
	cout<<"\nRate of Intrest : ";
	cin>>ROI;
	cout<<"\nEnter Time Period in Year : ";
	cin>>time_period;
	simple_intrest=(principal_amount*ROI *time_period)/100;
	cout<<"\nCalculated Interest : "<<simple_intrest;
	return 0;
}
