//10. Find whether the sum of two numbers is greater than 50 
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"x : ";
	cin>>x;
	cout<<"y : ";
	cin>>y;
	int sum = x+y;
	cout<<"sum : "<<sum;
	if(sum>50)
	cout<<"\nSum is greater than 50";
	else
	cout<<"\nSum is smaller than 50";
	return 0;
}
