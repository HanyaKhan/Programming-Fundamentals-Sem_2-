//11. Write a program that converts temperature from Celsius to Fahrenheit. Prompt the user
//to enter a temperature in Celsius and display the equivalent temperature in Fahrenheit.
//Use the formula: F = (C * 9/5) + 32.
#include<iostream>
using namespace std;
int main()
{
   float TC;
   cout<<"Enter A temperature in Celsius : ";
   cin>>TC;
   float F;
   F=(TC * 9/5) + 32;
   cout<<"\nTemperature in Fareheit : ";
   cout<<F;
   	return 0;
}
