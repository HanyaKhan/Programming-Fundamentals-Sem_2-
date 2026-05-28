//9. Multiply two numbers if their difference is greater than 0 
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"x : ";
	cin>>x;
	cout<<"y : ";
	cin>>y;
	int mul=x*y;
	int sub=x-y;
	if(sub>0)
		cout<<mul;
	else
	cout<< "no calculation performed ";
	return 0;
	
}
