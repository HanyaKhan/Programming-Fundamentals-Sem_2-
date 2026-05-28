//2. Find sum/difference/product/division of two/three numbers 
#include<iostream>
using namespace std;
int main()
{
	float N1,N2,N3;
	cout<<"Enter First Number : ";
	cin>>N1;
	cout<<"Enter Second Number : ";
	cin>>N2;
	cout<<"Enter Third Number : ";
	cin>>N3;
	float SUM1,SUM2,DIFF1,DIFF2,DIFF3,MUL1,MUL2,DIV1,DIV2,DIV3;
	SUM1=N1+N2;
	SUM2=N1+N2+N3;
	DIFF1=N1-N2;
	DIFF2=N2-N3;
	DIFF3=N1-N2-N3;
	MUL1=N1*N2;
	MUL2=N1*N2*N3;
	DIV1=N1/N2;
	DIV2=N2/N3;
	DIV3=N1/N2/N3;
	cout<<"\nSum of First two numbers: "<<SUM1;
	cout<<"\nSum of all three numbers: "<<SUM2;
	cout<<"\nDifference of first two numbers : "<<DIFF1;
	cout<<"\nDifference of last two numbers  : "<<DIFF2;
	cout<<"\nDifference of all three numbers  : "<<DIFF3;
	cout<<"\nMultiplication of First two numbers:"<<MUL1;
	cout<<"\nMultiplication of all three numbers:"<<MUL2;
	cout<<"\nDivision of first two numbers  : "<<DIV1;
	cout<<"\nDivision of last two numbers  : "<<DIV2;
	cout<<"\nDivision of all three numbers  : "<<DIV3;	
	return 0;
}
