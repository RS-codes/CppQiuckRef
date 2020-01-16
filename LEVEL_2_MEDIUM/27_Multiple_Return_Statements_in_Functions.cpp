//#27. C++ Multiple Return Statements in Functions :
#include<iostream>
using namespace std;

bool check(int);


int main()
{
	if(check(18))
		cout<<"u r adult"<<endl;
	else
		cout<<"u r kid"<<endl;
	return 0;
}

bool check(int age)
{
	if(age>=18)
		return true;//u can have many return statements in a pgm, but only one gets executed
	else
		return false;
}
