//7. Find whether a numbers is negative or not 
#include<iostream>
using namespace std;
int main()
{
	float x;
	cout<<"x : ";
	cin>>x;
	if(x>0)
	{
		cout<<"x is positive ";
	}
	else if(x<0)
	{
		cout<<"x is negative ";
	}
	else if(x==0)
	{
		cout<<"x is zero ";
	}
	return 0;
}
