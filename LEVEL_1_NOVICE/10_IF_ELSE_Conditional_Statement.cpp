//#10. IF ELSE _ Conditional Statement  :
#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter ur age:";
	cin>>age;
	/* comparison operators: 
	<>  ==  <=  >=  !=  NOTE: =is ASSIGNMENT operator, == is COMPARISON operator
Logical operator: ! */

	if(age<=17){
		cout<<"NO..u cant vote"<<endl; // executed if d condition is true
	}else{  //if else
	cout<<"Yes..u can vote"<<endl;	
	}
	return 0;

}
