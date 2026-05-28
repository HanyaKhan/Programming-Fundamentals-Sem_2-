//6.Calculate sales tax ( tax = amount * tax percentage / 100 ) 
#include<iostream>
using namespace std;
int main()
{
    float sales_tax;
	float tax_percentage;
	float amount;
	cout<<"Amount of Tax : ";
	cin>>amount;
	cout<<"Tax Percentage : ";
	cin>>tax_percentage;
	sales_tax = amount * tax_percentage / 100;
	cout<<"total sales tax : ";
	cout<<sales_tax;
	return 0;
}
