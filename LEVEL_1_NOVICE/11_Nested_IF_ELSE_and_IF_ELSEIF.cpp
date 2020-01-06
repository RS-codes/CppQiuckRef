//#11. C++ Nested IF ELSE and IF ELSEIF:
#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter ur age:";
	cin>>age;
	if(age<100){
		if(age<=20){  //nested if
		cout<<"u r young"<<endl;
		}
		else if(age<=45){  //if else if
		cout<<"u r mid-age"<<endl;	
		}else{
		cout<<"u r old"<<endl;
		}
	}
	return 0;

}
