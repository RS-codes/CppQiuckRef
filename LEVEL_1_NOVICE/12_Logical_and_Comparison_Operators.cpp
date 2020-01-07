//#12. C++ Logical and Comparison Operators:
//enable whichever you want to test and comment others
#include<iostream>
using namespace std;

/* COMPARISON OP:
<><=  >=  ==  !=
LOGICAL OP: && || !  */

int main()
{
	int date;
	cout<<"Enter a date: ";
	cin>>date;

	<> comparison op
	/*
	if(date>0){
		if(date<32){
		cout<<"Date is valid"<<endl;
		}
	}
	*/

	<=  >= comparison op
	/*
	if(date>=1){
		if(date<=31){
		cout<<"Date is valid"<<endl;
		}
	}
	*/


	 ==  != comparison op
	/*
	if(date==1){
	cout<<"Got salary"<<endl;	
	}
	
	if(date!=1){
	cout<<"waiting fr salary"<<endl;	
	}
	*/

	&&  || -logical operators
	/*
	if(date>=1 && date <=31){
	cout<<"date is valid"<<endl;
	if(date==1 || date==31){
	cout<<"todays spl"<<endl;
	}
	}else {
	cout<<"date is invalid"<<endl;
	}
	*/
	
	 ! logical op (operates on BOOLEAN

	/*
	bool human=true;
	if(!human){ //negates
	cout<<"...ALIEN..."<<endl;
	}cout<<"human"<<endl;
	*/
	return 0;
}
