//#20. Function Parameters _ Returning Values from Functions:
/*PASS BY VALUE*/
#include<iostream>
using namespace std;

/*
//FUNCTION PARAMETER

void display(int,int); //ftn prototype with ftn parameters

int main()
{
	display(20,30);  //ftn call

	return 0;
}

void display(int a,int b)
{	cout<<a<<endl;
	cout<<b<<endl;
	cout<<a+b<<endl;
}
*/

//RETURNING VALUES FROM FTN
int display(int, int); //ftn prototype with ftn parameters, returning value from ftn

int main()
{
	int result;
	result=display(20,30);//returned value of the ftn is stored in variable result
	cout<<result<<endl;
	return 0;
}

int display(int x, int y)
{
	cout<<x<<endl;
	cout<<y<<endl;
	return x+y; //return value x+y
}
