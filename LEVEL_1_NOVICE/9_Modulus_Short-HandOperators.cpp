//#9. C++ Modulus, Short-Hand Operators : 
#include<iostream>
using namespace std;

int main()
{
	//MODULUS % OPERATOR
	int num1=20,num2=3;
	cout<<num1%num2<<endl;  //returns REMAINDER

	/*SHORTHAND OPERATORS
	+=  -=  *=   /=  %=  */
	num1+=num2; // same as num1=num1+num2
	cout<<num1<<endl;

	num1-=num2; // same as num1=num1-num2
	cout<<num1<<endl;

	num1*=num2; // same as num1=num1*num2
	cout<<num1<<endl;

	num1/=num2; // same as num1=num1/num2
	cout<<num1<<endl;

	num1%=num2; // same as num1=num1%num2
	cout<<num1<<endl;

	return 0;
}
