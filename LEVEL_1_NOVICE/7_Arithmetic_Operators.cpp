//#7. C++ Arithmetic Operators : 
#include<iostream>
using namespace std;

int main()
{
	int num1=10,num2=20;
	
	cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;//add
	cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;//sub
	cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;//mulp
	cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;//div ( WARNING: /0(DIVIDE BY ZERO)->crashes the pgm
	return 0;
}
