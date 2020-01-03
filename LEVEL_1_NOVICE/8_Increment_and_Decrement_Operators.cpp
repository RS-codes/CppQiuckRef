//#8. C++ Increment and Decrement Operators: 
#include<iostream>
using namespace std;

int main()
{
	int a=10;
	
	/* prefix   ++a or --a   */
	//Increment
	cout<<"PREFIX"<<endl;
	cout<<"++a = "<<++a<<endl; //first incremented, then assigned
	cout<<"a= "<<a<<endl<<endl;

	//Decrement
	cout<<"--a = "<<--a<<endl; //first decremented, then assigned
	cout<<"a= "<<a<<endl<<endl<<endl;



	/* postfix   a++ or a--   */
	//Increment
	cout<<"POSTFIX"<<endl;
	cout<<"a++ = "<<a++<<endl; //first assigned then incremented,incremented o/p comes when u encounter next statement
	cout<<"a= "<<a<<endl<<endl;
	
	//Decrement
	cout<<"a-- = "<<a--<<endl; //first assigned then decremented,decremented o/p comes when u encounter next statement
	cout<<"a= "<<a<<endl<<endl<<endl;
	
	return 0;
}
