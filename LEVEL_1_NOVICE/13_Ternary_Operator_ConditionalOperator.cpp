//#13. C++ Ternary Operator (Conditional Operator) :
#include<iostream>
using namespace std;

/*ternary or conditional op
shorthand to if else */
int main()
{
	int mark;
	cout<<"Enter ur mark: ";
	cin>>mark;
	/* SYNTAX expr ? stmt1 : stmt2 ;
	expr-> any logical,comparison 
	stmt->any valid C++ statement
	if expr TRUE stmt1 executed
	else stmt2 executed*/	
	mark>=35 ? cout<<"PASS"<<endl : cout<<"FAIL"<<endl;
	return 0;
}
